/*
-------------------------------------------------------------------------------
    Copyright (c) Charles Carley.

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
#ifndef _ftConfig_h_
#define _ftConfig_h_

#define FT_DEBUG 3                    // Detail

#define FileTools_MaxStructMember  65536
#define FT_MAX_MBR_RANGE FileTools_MaxStructMember

#define FileTools_MaxTableSize  5000
#define FT_MAX_TABLE FileTools_MaxTableSize

#define FileTools_MaxCharArray 64
#define FT_MAX_ID FileTools_MaxCharArray


#define FileTools_MaxMember 256
#define FT_MAX_MEMBERS FileTools_MaxMember          

#define FileTools_DefaultAllocationSize 1024
#define FT_DEF_ALLOC FileTools_DefaultAllocationSize          


#define FileTools_MaxArrayDim 3
#define FT_ARR_DIM_MAX FileTools_MaxArrayDim          


#define FileTools_TypeLengthValidate 
#ifdef  FileTools_TypeLengthValidate
#define FT_TYLE_LEN_VALIDATE 1
#endif


/* #undef FileTools_SwapEndian */
#ifdef FileTools_SwapEndian
#define FT_SWAP_FROM_NATIVE_ENDIAN 1
#endif


#endif  //_ftConfig_h_
