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
#include "catch/Macro.h"
#include "ftScanner.h"
#include "Templates.h"



TEST_CASE("Basic Struct Test")
{
    ftScanner sc((const char*)TEST, TEST_SIZE);

    ftToken tp;
    int     tok;
    tok = sc.lex(tp);
    EXPECT_EQ(tok, FT_STRUCT);

    tok = sc.lex(tp);
    EXPECT_EQ(tok, FT_ID);
    EXPECT_TRUE(strcmp("XYZ", tp.getValue().c_str())==0);


    tok = sc.lex(tp);
    EXPECT_EQ(tok, FT_LBRACKET);

    tok = sc.lex(tp);
    EXPECT_EQ(tok, FT_INTEGER);

    tok = sc.lex(tp);
    EXPECT_EQ(tok, FT_ID);
    EXPECT_TRUE(strcmp("a", tp.getValue().c_str()) == 0);

    tok = sc.lex(tp);
    EXPECT_EQ(tok, FT_COMMA);

    tok = sc.lex(tp);
    EXPECT_EQ(tok, FT_ID);
    EXPECT_TRUE(strcmp("b", tp.getValue().c_str()) == 0);

    tok = sc.lex(tp);
    EXPECT_EQ(tok, FT_COMMA);

    tok = sc.lex(tp);
    EXPECT_EQ(tok, FT_ID);
    EXPECT_TRUE(strcmp("c", tp.getValue().c_str()) == 0);

    tok = sc.lex(tp);
    EXPECT_EQ(tok, FT_TERM);

    tok = sc.lex(tp);
    EXPECT_EQ(tok, FT_RBRACKET);
}
