
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     ID = 259,
     INT = 260,
     INTMAIN = 261,
     FLOAT = 262,
     ELIF = 263,
     CASEE = 264,
     LEAPYEAR = 265,
     CASE = 266,
     DEFAULT = 267,
     CHAR = 268,
     AT = 269,
     IF = 270,
     ELSE = 271,
     LEFT_BRACKET = 272,
     RIGHT_BRACKET = 273,
     POWER = 274,
     COL = 275,
     LEFT_PARENTHESIS = 276,
     RIGHT_PARENTHESIS = 277,
     VOIDMAIN = 278,
     COMMA = 279,
     SIN = 280,
     COS = 281,
     TAN = 282,
     FACTORIAL = 283,
     SEME = 284,
     PLUS = 285,
     MINUS = 286,
     ASSIGN = 287,
     EQUAL = 288,
     RETURN = 289,
     MULT = 290,
     DIV = 291,
     LESS = 292,
     GREATER = 293,
     LE = 294,
     GE = 295,
     NE = 296,
     SWITCH = 297,
     WHILE = 298,
     MODULAR = 299,
     FOR = 300,
     IFX = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


