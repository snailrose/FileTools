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
#ifndef _ftStreams_h_
#define _ftStreams_h_

#include "ftTypes.h"
#include "Utils/skStreams.h"
#include "Utils/skFileStream.h"
#include "Utils/skMemoryStream.h"


#if FT_USE_ZLIB == 1

class ftGzStream : public skStream
{
public:
    ftGzStream();
    virtual ~ftGzStream();


    void open(const char* path, int mode);

    FBTsize read(void* dest, FBTsize nr) const;
    FBTsize write(const void* src, FBTsize nr);
    FBTsize writef(const char* buf, ...);
    FBTsize position(void) const;
    FBTsize size(void) const;
    void    close(void);
    bool    eof(void) const;
    bool    seek(SKint64 offset, SKsize dir);


    inline bool isOpen(void) const
    {
        return m_handle != 0;
    }

protected:
    void* m_handle;
};


typedef skMemoryStream ftMemoryStream;

#else

typedef skFileStream   ftGzStream;
typedef skMemoryStream ftMemoryStream;

#endif


#endif//_ftStreams_h_
