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
#ifndef _ftLogger_h_
#define _ftLogger_h_

#include "ftFile.h"

class ftLogger
{
public:
    static void log(int status);
    static void log(int status, const char *msg, ...);
    static void logF(const char *msg, ...);

    static void seperator();
    static void divider();
    static void newline();
    static void width(FBTsize w);

    static void log(const ftChunk &chunk);
    static void log(void *ptr, FBTsize len);
    static void log(ftStruct *strc);
    static void log(ftMember *strc);
    static void log(ftStruct *fstrc, ftStruct *mstrc);
};


#endif  //_ftLogger_h_