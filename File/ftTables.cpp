/*
-------------------------------------------------------------------------------

    Copyright (c) Charles Carley.

    Contributor(s): none yet.

-------------------------------------------------------------------------------
  This software is provided 'as-is', without any express or implied
  warranty. In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
-------------------------------------------------------------------------------
*/
#define FT_IN_SOURCE_FILE
#include "ftTables.h"
#include "ftEndianUtils.h"
#include "ftHashTypes.h"
#include "ftLogger.h"
#include "ftMember.h"
#include "ftPlatformHeaders.h"


using namespace ftEndianUtils;


const ftName ftTables::INVALID_NAME = {
    nullptr,  // m_names
    SK_NPOS,  // m_hash
    0,        // m_ptrCount
    0,        // m_numDimensions
    0,        // m_isFunctionPointer;
    0,        // m_arraySize
    {0, 0}    // m_array
};

const ftType ftTables::INVALID_TYPE = {
    nullptr,  // m_names
    SK_NPOS,  // m_hash
    0,        // m_strcId
};



ftTables::ftTables() :
    m_names(0),
    m_types(0),
    m_tlens(0),
    m_strcs(0),
    m_nameCount(0),
    m_typeCount(0),
    m_strcCount(0),
    m_ptrLength(FT_VOIDP),
    m_firstStruct(0)
{
}


ftTables::~ftTables()
{
    Structures::Iterator it = m_structures.iterator();
    while (it.hasMoreElements())
        delete it.getNext();

    ::free(m_names);
    ::free(m_types);
    ::free(m_tlens);
    ::free(m_strcs);
}

bool ftTables::isPointer(const FBTuint16& name) const
{
    return getNameAt(name).m_ptrCount > 0;
}

ftCharHashKey ftTables::getStructHashByType(const FBTuint16& type)
{
    if (type < m_typeCount)
        return ftCharHashKey(m_types[type].m_name);
    return ftCharHashKey();
}


ftStruct* ftTables::findStructByName(const ftCharHashKey& kvp)
{
    FBTuint32 i;
    i = findTypeId(kvp);
    if (i != SK_NPOS32)
        return m_structures.at(i);

    return nullptr;
}

bool ftTables::read(const void* ptr, const FBTsize& len, int flags)
{
    FBTuint32 *ip = 0, i, j, k, nl;
    FBTtype*   tp = 0;

    if (!ptr)
        return false;

    bool swap   = (flags & ftFile::FH_ENDIAN_SWAP) != 0;
    m_ptrLength = (flags & ftFile::FH_CHUNK_64) != 0 ? 8 : 4;


    char* cp = (char*)ptr;
    if (!ftCharNEq(cp, ftIdNames::FT_SDNA, 4))
    {
        ftLogger::logF("Table is missing the SDNA code.");
        return false;
    }

    cp += 4;
    if (!ftCharNEq(cp, ftIdNames::FT_NAME, 4))
    {
        ftLogger::logF("Table is missing the NAME code.");
        return false;
    }
    cp += 4;
    FBTintPtr opad;


    ip = (FBTuint32*)cp;
    nl = *ip++;
    cp = (char*)ip;

    if (swap)
        nl = swap32(nl);


    if (nl > FT_MAX_TABLE)
    {
        ftLogger::logF("Table max names exceeded(%d)", FT_MAX_TABLE);
        return false;
    }
    else
        m_names = (Names)::malloc((nl * sizeof(ftName)) + 1);



    i = 0;
    while (i < nl && i < FT_MAX_TABLE)
    {
        ftName name = {cp, ftCharHashKey(cp).hash(), 0, 0, 0, 1};

        ftFixedString<64> bn;

        // re-lex
        while (*cp)
        {
            switch (*cp)
            {
            default:
            {
                bn.push_back(*cp);
                ++cp;
                break;
            }
            case ')':
            case ']':
                ++cp;
                break;
            case '(':
            {
                ++cp;
                name.m_isFunctionPointer = 1;
                break;
            }
            case '*':
            {
                ++cp;
                name.m_ptrCount++;
                break;
            }
            case '[':
            {
                while ((*++cp) != ']')
                    name.m_dimensions[name.m_numDimensions] = (name.m_dimensions[name.m_numDimensions] * 10) + ((*cp) - '0');
                name.m_arraySize *= name.m_dimensions[name.m_numDimensions++];
            }
            break;
            }
        }
        ++cp;
        m_names[m_nameCount++] = name;
        m_hashedNames.push_back(name.m_hash);
        ++i;
    }


    opad = (FBTintPtr)cp;
    opad = ((opad + 3) & ~3) - opad;
    while (opad--)
        cp++;


    if (!ftCharNEq(cp, ftIdNames::FT_TYPE, 4))
    {
        ftLogger::logF("Table is missing the TYPE code.");
        return false;
    }

    cp += 4;

    ip = (FBTuint32*)cp;
    nl = *ip++;
    cp = (char*)ip;

    if (swap)
        nl = swap32(nl);

    if (nl > FT_MAX_TABLE)
    {
        ftLogger::logF("Table max names exceeded(%d)", FT_MAX_TABLE);
        return false;
    }
    else
    {
        m_types = (Types)::malloc((nl * sizeof(ftType) + 1));
        m_tlens = (TypeL)::malloc((nl * sizeof(FBTtype) + 1));
    }

    i = 0;
    while (i < nl)
    {
        ftType typeData        = {cp, ftCharHashKey(cp).hash(), SK_NPOS32};
        m_types[m_typeCount++] = typeData;
        while (*cp)
            ++cp;
        ++cp;
        ++i;
    }

    opad = (FBTintPtr)cp;
    opad = ((opad + 3) & ~3) - opad;
    while (opad--)
        cp++;
    if (!ftCharNEq(cp, ftIdNames::FT_TLEN, 4))
    {
        ftLogger::logF("Table is missing the TLEN code.");
        return false;
    }

    cp += 4;
    tp = (FBTtype*)cp;

    i = 0;
    while (i < m_typeCount && i < SK_NPOS16)
    {
        FBTtype& type = m_tlens[i];
        type          = (*tp++);

        if (swap)
            m_tlens[i] = swap16(m_tlens[i]);
        ++i;
    }

    if (m_typeCount & 1)
        ++tp;

    cp = (char*)tp;
    if (!ftCharNEq(cp, ftIdNames::FT_STRC, 4))
    {
        ftLogger::logF("Table is missing the STRC code.");
        return false;
    }

    cp += 4;

    ip = (FBTuint32*)cp;
    nl = *ip++;
    tp = (FBTtype*)ip;

    if (swap)
        nl = swap32(nl);

    if (nl > FT_MAX_TABLE)
    {
        ftLogger::logF("Max name table size exceeded(%d).", FT_MAX_TABLE);
        return false;
    }
    else
        m_strcs = (Strcs)::malloc(nl * FT_MAX_MEMBERS * sizeof(FBTtype) + 1);


    m_typeFinder.reserve(m_typeCount);

    i = 0;
    while (i < nl)
    {
        m_strcs[m_strcCount++] = tp;
        if (swap)
        {
            tp[0] = swap16(tp[0]);
            tp[1] = swap16(tp[1]);

            m_types[tp[0]].m_strcId = m_strcCount - 1;
            m_typeFinder.insert(m_types[tp[0]].m_name, m_types[tp[0]]);

            k = tp[1];
            if (k < FT_MAX_MEMBERS)
            {
                j = 0;
                tp += 2;
                while (j < k)
                {
                    tp[0] = swap16(tp[0]);
                    tp[1] = swap16(tp[1]);

                    ++j;
                    tp += 2;
                }
            }
            else
                ftLogger::logF("Max members exceeded(%d).", FT_MAX_MEMBERS);
        }
        else
        {
            if (tp[1] < FT_MAX_MEMBERS)
            {
                m_types[tp[0]].m_strcId = m_strcCount - 1;
                m_typeFinder.insert(m_types[tp[0]].m_name, m_types[tp[0]]);

                tp += (2 * tp[1]) + 2;
            }
            else
                ftLogger::logF("Max members exceeded(%d).", FT_MAX_MEMBERS);
        }
        ++i;
    }

    if (m_strcCount == 0)
    {
        ::free(m_names);
        ::free(m_types);
        ::free(m_tlens);
        ::free(m_strcs);

        m_names = 0;
        m_types = 0;
        m_tlens = 0;
        m_strcs = 0;

        return false;
    }

    compile();
    return true;
}


void ftTables::compile(FBTtype    i,
                       FBTtype    nr,
                       ftStruct*  off,
                       FBTuint32& cof,
                       FBTuint32  depth)
{
    FBTuint32 e, l, a, oof, ol;
    FBTuint16 f = m_strcs[0][0];

    if (i > m_strcCount)
    {
        printf("Missing recursive type\n");
        return;
    }


    for (a = 0; a < nr; ++a)
    {
        FBTtype* strc = m_strcs[i];

        oof = cof;
        ol  = m_tlens[strc[0]];

        l = strc[1];
        strc += 2;

        for (e = 0; e < l; e++, strc += 2)
        {
            if (strc[0] >= f && m_names[strc[1]].m_ptrCount == 0)
            {
                compile(m_types[strc[0]].m_strcId,
                        m_names[strc[1]].m_arraySize,
                        off,
                        cof,
                        depth + 1);
            }
            else
                putMember(strc, off, a, cof, depth);
        }

        if ((cof - oof) != ol)
            printf("Build ==> invalid offset (%i)(%i:%i)\n", a, (cof - oof), ol);
    }
}


bool ftTables::testDuplicateKeys()
{
    bool TODO = false;
    return TODO;
}

void ftTables::compile(void)
{
    m_structures.reserve(FT_MAX_TABLE);

    if (!m_strcs || m_strcCount <= 0)
    {
        printf("No structures to compile.");
        return;
    }

    FBTuint32 i, cof = 0, depth;
    FBTuint16 e, memberCount;

    m_firstStruct = m_strcs[0][0];

    for (i = 0; i < m_strcCount; i++)
    {
        FBTtype* strc     = m_strcs[i];
        FBTtype  strcType = strc[0];

        depth = 0;
        cof   = 0;

        ftStruct* nstrc;
        nstrc                = new ftStruct(this);
        nstrc->m_type        = strcType;
        nstrc->m_hashedType  = m_types[strcType].m_hash;
        nstrc->m_strcId      = i;
        nstrc->m_sizeInBytes = m_tlens[strcType];
        nstrc->m_link        = 0;
        nstrc->m_flag        = ftStruct::CAN_LINK;
        m_structures.push_back(nstrc);

        memberCount = strc[1];

        strc += 2;
        nstrc->m_members.reserve(FT_MEMBERS_RESERVE);

        for (e = 0; e < memberCount; ++e, strc += 2)
        {
            const short& type = strc[0];
            const short& name = strc[1];

            if (type >= m_firstStruct && m_names[name].m_ptrCount == 0)
            {
                compile(m_types[type].m_strcId,
                        m_names[name].m_arraySize,
                        nstrc,
                        cof,
                        depth + 1);
            }
            else
                putMember(strc, nstrc, 0, cof, 0);
        }

        if (cof != nstrc->m_sizeInBytes)
        {
            nstrc->m_flag |= ftStruct::MISALIGNED;
            ftLogger::logF("Misaligned struct %s:%i:%i:%i\n",
                           m_types[nstrc->m_type].m_name,
                           i,
                           cof,
                           nstrc->m_sizeInBytes);
        }
    }
}


void ftTables::putMember(FBTtype*   cp,
                         ftStruct*  parent,
                         FBTtype    nr,
                         FBTuint32& cof,
                         FBTuint32  depth)
{
    const FBTuint16& type = cp[0];
    const FBTuint16& name = cp[1];

    if (type < 0 || type >= m_typeCount)
    {
        ftLogger::logF("Invalid type index");
        return;
    }

    if (name < 0 || name >= m_nameCount)
    {
        ftLogger::logF("Invalid name index");
        return;
    }



    ftMember* member = parent->createMember();
    member->setTypeIndex(type);
    member->setNameIndex(name);

    member->m_offset         = cof;
    member->m_location       = nr;
    member->m_recursiveDepth = depth;
    member->m_link           = nullptr;

    if (m_names[name].m_ptrCount > 0)
        member->m_sizeInBytes = m_ptrLength * m_names[name].m_arraySize;
    else
        member->m_sizeInBytes = m_tlens[type] * m_names[name].m_arraySize;

    cof += member->m_sizeInBytes;
}


ftStruct* ftTables::findStructByType(const FBTuint16& type)
{
    if (type < m_structures.size())
    {
        ftStruct* strc = m_structures.at(type);

        if (type != strc->m_strcId)
            ftLogger::logF("Type mismatch!");
        return strc;
    }
    return nullptr;
}


bool ftTables::isLinkedToMemory(const FBTuint16& type)
{
    if (type < m_structures.size())
        return m_structures.at(type)->m_link != 0;
    return false;
}



FBTuint32 ftTables::findTypeId(const ftCharHashKey& cp)
{
    FBTsize pos = m_typeFinder.find(cp);
    if (pos != m_typeFinder.npos)
        return m_typeFinder.at(pos).m_strcId;
    return SK_NPOS32;
}

FBThash ftTables::getTypeHash(const FBTuint16& type) const
{
    if (type < m_typeCount)
        return m_types[type].m_hash;
    return SK_NPOS;
}

FBTuint32 ftTables::findStructIdByType(const FBTuint16& type)
{
    if (type < m_typeCount)
        return m_types[type].m_strcId;
    return SK_NPOS;
}




const ftName& ftTables::getStructNameByIdx(const FBTuint16& idx) const
{
    if (idx < m_nameCount)
        return m_names[idx];
    return INVALID_NAME;
}


ftFixedString<4> ftByteToString(FBTuint32 i)
{
    union {
        char      ids[4];
        FBTuint32 idi;
    } IDU;
    IDU.idi = i;

    ftFixedString<4> cp;
    cp.push_back(IDU.ids[0]);
    cp.push_back(IDU.ids[1]);
    cp.push_back(IDU.ids[2]);
    cp.push_back(IDU.ids[3]);
    return cp;
}
