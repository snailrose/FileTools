/*
-------------------------------------------------------------------------------
    Copyright (c) 2010 Charlie C & Erwin Coumans.

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
#ifndef _ftPlatformHeaders_h_
#define _ftPlatformHeaders_h_

#ifndef ftIN_SOURCE
    #error source include only!
#endif

#if ftPLATFORM == ftPLATFORM_WIN32
    #if ftCOMPILER == ftCOMPILER_MSVC
        #define _WIN32_WINNT 0x403
    #endif
    #ifndef WIN32_LEAN_AND_MEAN
        #define WIN32_LEAN_AND_MEAN 1
    #endif
    #include <windows.h>
    #include <io.h>
#else
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <memory.h>

#ifdef _MSC_VER
    #pragma warning(disable : 4996)
#endif

#if ftCOMPILER == ftCOMPILER_MSVC
    #define ftp_printf(ptr, size, fmt, lst) _vsnprintf_s(ptr, size, fmt, lst)
#else
    #define ftp_printf vsnprintf
#endif

#endif//_ftPlatformHeaders_h_
