
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "project.y"


	#include<stdio.h>
	#include<math.h>
	#include <string.h>
	int sym[26],check[26];
        int u=0;
        extern FILE *yyin;
	extern FILE *yyout;


/* Line 189 of yacc.c  */
#line 85 "project.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 173 "project.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   633

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNRULES -- Number of states.  */
#define YYNSTATES  159

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    17,    18,    21,    22,    25,    27,
      31,    33,    35,    37,    41,    43,    45,    48,    53,    60,
      70,    86,    91,    98,   105,   112,   119,   127,   132,   137,
     142,   147,   153,   162,   168,   171,   175,   180,   185,   187,
     190,   191,   194,   200,   205,   207,   209,   213,   217,   221,
     225,   229,   233,   237,   241,   245,   249,   253
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    23,    21,    22,    17,    49,    18,    -1,
       6,    21,    22,    17,    49,    18,    -1,    -1,    49,    50,
      -1,    -1,    50,    54,    -1,    51,    -1,    52,    53,    29,
      -1,     5,    -1,     7,    -1,    13,    -1,    53,    24,     4,
      -1,     4,    -1,    29,    -1,    61,    29,    -1,     4,    32,
      61,    29,    -1,    15,    21,    61,    22,    61,    29,    -1,
      15,    21,    61,    22,    61,    29,    16,    61,    29,    -1,
      15,    21,    61,    22,    61,    29,     8,    21,    61,    22,
      61,    29,    16,    61,    29,    -1,    43,    21,    61,    22,
      -1,    45,    21,    61,    37,    61,    22,    -1,    45,    21,
      61,    38,    61,    22,    -1,    45,    21,    61,    39,    61,
      22,    -1,    45,    21,    61,    40,    61,    22,    -1,    42,
      21,    61,    22,    17,    57,    18,    -1,    25,    21,    61,
      22,    -1,    26,    21,    61,    22,    -1,    27,    21,    61,
      22,    -1,    28,    21,    61,    22,    -1,    10,    21,    61,
      22,    29,    -1,    14,     4,    52,    21,    22,    17,    55,
      18,    -1,    14,     4,    21,    22,    29,    -1,    55,    56,
      -1,     5,     4,    29,    -1,     5,     4,    24,     4,    -1,
       4,    32,    61,    29,    -1,    58,    -1,    58,    60,    -1,
      -1,    58,    59,    -1,    11,     3,    20,    61,    29,    -1,
      12,     9,     3,    29,    -1,     3,    -1,     4,    -1,    61,
      30,    61,    -1,    61,    31,    61,    -1,    61,    35,    61,
      -1,    61,    36,    61,    -1,    61,    44,    61,    -1,    61,
      19,    61,    -1,    61,    37,    61,    -1,    61,    38,    61,
      -1,    61,    39,    61,    -1,    61,    40,    61,    -1,    61,
      41,    61,    -1,    21,    61,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    29,    32,    33,    37,    39,    41,    45,
      48,    50,    52,    56,    67,    80,    82,    84,    98,   109,
     119,   136,   145,   154,   164,   173,   182,   184,   191,   198,
     205,   213,   227,   229,   237,   238,   239,   241,   249,   250,
     253,   254,   257,   267,   276,   278,   291,   293,   295,   297,
     307,   309,   311,   313,   315,   317,   319,   321
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "ID", "INT", "INTMAIN", "FLOAT",
  "ELIF", "CASEE", "LEAPYEAR", "CASE", "DEFAULT", "CHAR", "AT", "IF",
  "ELSE", "LEFT_BRACKET", "RIGHT_BRACKET", "POWER", "COL",
  "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "VOIDMAIN", "COMMA", "SIN",
  "COS", "TAN", "FACTORIAL", "SEME", "PLUS", "MINUS", "ASSIGN", "EQUAL",
  "RETURN", "MULT", "DIV", "LESS", "GREATER", "LE", "GE", "NE", "SWITCH",
  "WHILE", "MODULAR", "FOR", "IFX", "$accept", "program", "stat",
  "cstatement", "cdeclaration", "TYPE", "ID1", "statement", "func",
  "funcs", "swit", "first", "second", "OTHER", "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    50,    50,    50,    51,
      52,    52,    52,    53,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    55,    55,    55,    56,    57,    57,
      58,    58,    59,    60,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     6,     0,     2,     0,     2,     1,     3,
       1,     1,     1,     3,     1,     1,     2,     4,     6,     9,
      15,     4,     6,     6,     6,     6,     7,     4,     4,     4,
       4,     5,     8,     5,     2,     3,     4,     4,     1,     2,
       0,     2,     5,     4,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     1,     0,     0,     4,
       4,     6,     6,    10,    11,    12,     3,     5,     8,     0,
       2,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     7,     0,    14,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,    51,
      46,    47,    48,    49,    52,    53,    54,    55,    56,    50,
      13,    17,     0,     0,     0,     0,    27,    28,    29,    30,
       0,    21,     0,     0,     0,     0,    31,    33,     0,     0,
      40,    52,    53,     0,     0,     0,    18,     0,    38,    22,
      23,    24,    25,     0,     0,     0,     0,    26,     0,     0,
      41,    39,     0,     0,    32,    34,     0,     0,     0,     0,
       0,    35,     0,     0,    19,     0,     0,    36,     0,     0,
       0,    43,    37,     0,    42,     0,     0,     0,    20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,    17,    18,    19,    38,    35,   124,   135,
     117,   118,   130,   131,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -27
static const yytype_int16 yypact[] =
{
      39,   -15,   -13,    44,    24,    29,   -27,    37,    40,   -27,
     -27,    42,   134,   -27,   -27,   -27,   -27,    38,   -27,    52,
     -27,   -27,    26,    47,    57,    54,     6,    61,    67,    76,
      77,   -27,    80,    81,    84,   -27,    55,   -27,   -22,     6,
       6,   610,     6,   -27,    96,     6,     6,     6,     6,     6,
       6,     6,     6,   -27,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,    69,   -27,   119,   142,    89,    85,
     165,   -27,   188,   211,   234,   257,   280,   303,   525,    31,
      68,    68,    -1,    -1,   589,   589,   540,   540,   540,    31,
     -27,   -27,    60,    88,    91,     6,   -27,   -27,   -27,   -27,
      97,   -27,     6,     6,     6,     6,   -27,   -27,   103,   326,
     -27,   563,   570,   349,   372,   116,    -5,   104,    -7,   -27,
     -27,   -27,   -27,   120,    -3,   107,     6,   -27,   122,   133,
     -27,   -27,   -12,   111,   -27,   -27,     6,   395,   109,   141,
     147,   -27,     6,   418,   -27,     6,   117,   -27,   441,     6,
     464,   -27,   -27,   487,   -27,   129,     6,   510,   -27
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -27,   -27,   143,   -27,   -27,   121,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -26
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      44,   133,    64,   125,   128,   129,     4,    65,     5,    21,
      43,   126,   140,    66,    67,   134,    70,   141,    52,    72,
      73,    74,    75,    76,    77,    78,    79,    26,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    60,    61,
      62,    21,    22,    63,     6,     1,     7,    13,    23,    14,
      52,     8,    24,    25,     9,    15,    37,    10,    39,    26,
      16,    41,     2,    27,    28,    29,    30,    31,    40,   109,
      60,    61,    62,    90,    52,    42,   111,   112,   113,   114,
      32,    33,    45,    34,    53,    54,    55,    52,    46,   106,
      56,    57,    58,    59,    60,    61,    62,    47,    48,    63,
     137,    49,    50,    56,    57,    51,    94,    60,    61,    62,
     143,    93,    63,   108,   110,    52,   148,   107,    71,   150,
     115,   123,   127,   153,   132,   138,    54,    55,   136,   145,
     157,    56,    57,    58,    59,    60,    61,    62,    52,    13,
      63,    14,   139,   142,   146,   156,   151,    15,    91,    54,
      55,   147,    20,    12,    56,    57,    58,    59,    60,    61,
      62,    52,    69,    63,    92,     0,     0,     0,     0,     0,
       0,     0,    54,    55,     0,     0,     0,    56,    57,    58,
      59,    60,    61,    62,    52,     0,    63,    95,     0,     0,
       0,     0,     0,     0,     0,    54,    55,     0,     0,     0,
      56,    57,    58,    59,    60,    61,    62,    52,     0,    63,
      96,     0,     0,     0,     0,     0,     0,     0,    54,    55,
       0,     0,     0,    56,    57,    58,    59,    60,    61,    62,
      52,     0,    63,    97,     0,     0,     0,     0,     0,     0,
       0,    54,    55,     0,     0,     0,    56,    57,    58,    59,
      60,    61,    62,    52,     0,    63,    98,     0,     0,     0,
       0,     0,     0,     0,    54,    55,     0,     0,     0,    56,
      57,    58,    59,    60,    61,    62,    52,     0,    63,    99,
       0,     0,     0,     0,     0,     0,     0,    54,    55,     0,
       0,     0,    56,    57,    58,    59,    60,    61,    62,    52,
       0,    63,   100,     0,     0,     0,     0,     0,     0,     0,
      54,    55,     0,     0,     0,    56,    57,    58,    59,    60,
      61,    62,    52,     0,    63,   101,     0,     0,     0,     0,
       0,     0,     0,    54,    55,     0,     0,     0,    56,    57,
      58,    59,    60,    61,    62,    52,     0,    63,     0,     0,
       0,     0,     0,     0,     0,   116,    54,    55,     0,     0,
       0,    56,    57,    58,    59,    60,    61,    62,    52,     0,
      63,   121,     0,     0,     0,     0,     0,     0,     0,    54,
      55,     0,     0,     0,    56,    57,    58,    59,    60,    61,
      62,    52,     0,    63,   122,     0,     0,     0,     0,     0,
       0,     0,    54,    55,     0,     0,     0,    56,    57,    58,
      59,    60,    61,    62,    52,     0,    63,     0,     0,     0,
       0,     0,     0,     0,   144,    54,    55,     0,     0,     0,
      56,    57,    58,    59,    60,    61,    62,    52,     0,    63,
     149,     0,     0,     0,     0,     0,     0,     0,    54,    55,
       0,     0,     0,    56,    57,    58,    59,    60,    61,    62,
      52,     0,    63,     0,     0,     0,     0,     0,     0,     0,
     152,    54,    55,     0,     0,     0,    56,    57,    58,    59,
      60,    61,    62,    52,     0,    63,     0,     0,     0,     0,
       0,     0,     0,   154,    54,    55,     0,     0,     0,    56,
      57,    58,    59,    60,    61,    62,    52,     0,    63,     0,
       0,     0,     0,     0,     0,     0,   155,    54,    55,     0,
       0,     0,    56,    57,    58,    59,    60,    61,    62,    52,
       0,    63,     0,     0,     0,     0,     0,     0,     0,   158,
      54,    55,     0,     0,    52,    56,    57,    58,    59,    60,
      61,    62,     0,     0,    63,    54,    55,     0,     0,    52,
      56,    57,   102,   103,   104,   105,    62,     0,     0,    63,
      54,    55,     0,     0,     0,    56,    57,    58,    59,    60,
      61,    62,    52,     0,    63,   119,     0,     0,     0,    52,
       0,     0,   120,    54,    55,     0,     0,     0,    56,    57,
      54,    55,    60,    61,    62,    56,    57,    63,    52,    60,
      61,    62,     0,     0,    63,    13,     0,    14,     0,    54,
      55,     0,     0,    15,    56,    57,     0,     0,    60,    61,
      62,    68,     0,    63
};

static const yytype_int16 yycheck[] =
{
      26,     4,    24,     8,    11,    12,    21,    29,    21,     3,
       4,    16,    24,    39,    40,    18,    42,    29,    19,    45,
      46,    47,    48,    49,    50,    51,    52,    21,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    39,    40,
      41,     3,     4,    44,     0,     6,    22,     5,    10,     7,
      19,    22,    14,    15,    17,    13,     4,    17,    32,    21,
      18,     4,    23,    25,    26,    27,    28,    29,    21,    95,
      39,    40,    41,     4,    19,    21,   102,   103,   104,   105,
      42,    43,    21,    45,    29,    30,    31,    19,    21,    29,
      35,    36,    37,    38,    39,    40,    41,    21,    21,    44,
     126,    21,    21,    35,    36,    21,    21,    39,    40,    41,
     136,    22,    44,    22,    17,    19,   142,    29,    22,   145,
      17,     5,    18,   149,     4,     3,    30,    31,    21,    20,
     156,    35,    36,    37,    38,    39,    40,    41,    19,     5,
      44,     7,     9,    32,     3,    16,    29,    13,    29,    30,
      31,     4,    18,    10,    35,    36,    37,    38,    39,    40,
      41,    19,    41,    44,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    19,    -1,    44,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    19,    -1,    44,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      19,    -1,    44,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    19,    -1,    44,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    19,    -1,    44,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    19,
      -1,    44,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    19,    -1,    44,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    19,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    19,    -1,
      44,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    19,    -1,    44,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    19,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    19,    -1,    44,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      19,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    19,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    19,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    19,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    -1,    -1,    19,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    44,    30,    31,    -1,    -1,    19,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    44,
      30,    31,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    19,    -1,    44,    22,    -1,    -1,    -1,    19,
      -1,    -1,    22,    30,    31,    -1,    -1,    -1,    35,    36,
      30,    31,    39,    40,    41,    35,    36,    44,    19,    39,
      40,    41,    -1,    -1,    44,     5,    -1,     7,    -1,    30,
      31,    -1,    -1,    13,    35,    36,    -1,    -1,    39,    40,
      41,    21,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    23,    48,    21,    21,     0,    22,    22,    17,
      17,    49,    49,     5,     7,    13,    18,    50,    51,    52,
      18,     3,     4,    10,    14,    15,    21,    25,    26,    27,
      28,    29,    42,    43,    45,    54,    61,     4,    53,    32,
      21,     4,    21,     4,    61,    21,    21,    21,    21,    21,
      21,    21,    19,    29,    30,    31,    35,    36,    37,    38,
      39,    40,    41,    44,    24,    29,    61,    61,    21,    52,
      61,    22,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
       4,    29,    22,    22,    21,    22,    22,    22,    22,    22,
      22,    22,    37,    38,    39,    40,    29,    29,    22,    61,
      17,    61,    61,    61,    61,    17,    29,    57,    58,    22,
      22,    22,    22,     5,    55,     8,    16,    18,    11,    12,
      59,    60,     4,     4,    18,    56,    21,    61,     3,     9,
      24,    29,    32,    61,    29,    20,     3,     4,    61,    22,
      61,    29,    29,    61,    29,    29,    16,    61,    29
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 28 "project.y"
    { printf("\n<<Compilation Successful!!!>>\n\n"); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 29 "project.y"
    { printf("\n<<Compilation Successful!!!>>\n\n"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 45 "project.y"
    { printf("\nvalid declaration\n"); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 56 "project.y"
    {
						if(check[(yyvsp[(3) - (3)])] == 1)
						{
							printf("\nMultipe variable declaration and %c is already declared here\n", (yyvsp[(3) - (3)])+97);
						}
						else
						{
							check[(yyvsp[(3) - (3)])] = 1;
						}
			;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 67 "project.y"
    {
				if(check[(yyvsp[(1) - (1)])] == 1)
				{
					printf("\n%c is already declared\n", (yyvsp[(1) - (1)])+97);
				}
				else
				{
					check[(yyvsp[(1) - (1)])] = 1;
				}
			;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 82 "project.y"
    { printf("\nvalue of expression: %d\n", (yyvsp[(1) - (2)])); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 84 "project.y"
    { 
		
		               if(check[(yyvsp[(1) - (4)])] == 1)
						{
							sym[(yyvsp[(1) - (4)])] = (yyvsp[(3) - (4)]); 
							printf("\nValue of the variable %c : %d\t\n",(yyvsp[(1) - (4)])+97,(yyvsp[(3) - (4)]));
						}
		               else 
					    {
                        	printf("\n%c is not declared\n", (yyvsp[(1) - (4)]) + 97);				
						}
						
						;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 98 "project.y"
    {
								if((yyvsp[(3) - (6)])) 
								{
									printf("\nvalue of expression in IF: %d\n",(yyvsp[(5) - (6)]));
								}
								else
								{
									printf("\ncondition value zero in IF block\n");
								}
							;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 109 "project.y"
    {
								 	if((yyvsp[(3) - (9)]))
									{
										printf("\nvalue of expression in IF: %d\n",(yyvsp[(5) - (9)]));
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",(yyvsp[(8) - (9)]));
									}
								   ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 121 "project.y"
    {
                                                        if((yyvsp[(3) - (15)]))
                                                        {
                                                            printf("\nValue of expression in IF : %d\n",(yyvsp[(5) - (15)]));
                                                        }
                                                        else if((yyvsp[(9) - (15)]))
                                                        {
                                                            printf("\nValue of expression in ELIF : %d\n",(yyvsp[(11) - (15)]));
                                                        }
                                                        else
                                                        {
                                                            printf("\nValue of expression in ELSE : %d\n",(yyvsp[(14) - (15)]));
                                                        }
                                                    ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 136 "project.y"
    {
										int i;
                                                                                printf("\nValue of while loop: ");
										for(i=1;i<=(yyvsp[(3) - (4)]);i++)
										{
											printf("%d ",i);
										}
										printf("\n");
										;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 145 "project.y"
    {
										int i;
                                                                                printf("\nValue of for loop: ");
										for(i=(yyvsp[(3) - (6)]);i<(yyvsp[(5) - (6)]);i++)
										{
											printf("%d ",i);
										}
										printf("\n");
										;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 154 "project.y"
    {
										int i;
                                                                                printf("\nValue of for loop: ");
										for(i=(yyvsp[(3) - (6)]);i>(yyvsp[(5) - (6)]);i--)
										{
											printf("%d ",i);
										}
										printf("\n");
										;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 164 "project.y"
    {
										int i;
                                                                                 printf("\nValue of for loop: ");
										for(i=(yyvsp[(3) - (6)]);i<=(yyvsp[(5) - (6)]);i++)
										{
											printf("%d ",i);
										}
										printf("\n");
										;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 173 "project.y"
    {
										int i;
                                                                                 printf("\nValue of for loop: ");
										for(i=(yyvsp[(3) - (6)]);i>=(yyvsp[(5) - (6)]);i--)
										{
											printf("%d ",i);
										}
										printf("\n");
										;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 182 "project.y"
    { printf("\nEnd of switch case block\n\n"); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 184 "project.y"
    {
	             double val,PI,RS;
			     PI=3.1418;
				 val = PI/180;
				 RS = sin((yyvsp[(3) - (4)])*val);
				 printf("\n value of sin : %lf\n",RS);
              ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 191 "project.y"
    {
	             double val,PI,RS;
			     PI=3.1418;
				 val = PI/180;
				 RS = cos((yyvsp[(3) - (4)])*val);
				 printf("\n value of cos : %lf\n",RS);
              ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 198 "project.y"
    {
	             double val,PI,RS;
			     PI=3.1418;
				 val = PI/180;
				 RS = tan((yyvsp[(3) - (4)])*val);
				 printf("\n Value of tan : %lf\n",RS);
              ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 205 "project.y"
    {
                                            int i,res = 1;
                                            for(i=1;i<=(yyvsp[(3) - (4)]);i++)
                                            {
                                                res *= i;
                                            }
                                            printf("\n Value of factorial : %d\n",res);
                                        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 214 "project.y"
    {    
                                            if((((yyvsp[(3) - (5)])%4==0) && ((yyvsp[(3) - (5)])%100!=0)) || ((yyvsp[(3) - (5)])%400 ==0))
                                            {
                                                printf("\n%d is leap year\n",(yyvsp[(3) - (5)]));
                                            }
                                            else
                                            {
                                                printf("\n%d is not leap year\n",(yyvsp[(3) - (5)]));
                                            }
                                        ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 227 "project.y"
    { printf("\nFunction declared\n"); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 229 "project.y"
    { printf("\nFunction call\n"); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 238 "project.y"
    { printf("\nVariable declared inside function\n"); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 239 "project.y"
    { printf("\nVariable declared inside function\n"); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 241 "project.y"
    { printf("\nValue assigned in the variable and the result is : %d\n",(yyvsp[(3) - (4)])); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 257 "project.y"
    {
				
						if((yyvsp[(2) - (5)])==2){
							  u=1;
							  printf("\nSWITCH CASE EXECUTION-->\n");
							  printf("\nCASE VALUE : %d  and ANSWER :  %d\n",(yyvsp[(2) - (5)]),(yyvsp[(4) - (5)]));
						}
					;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 267 "project.y"
    {
						if(u==0){
						    printf("\nSWITCH CASE EXECUTION-->\n");
							printf("\nResult in DEFAULT CASE Value is :  %d\n",(yyvsp[(3) - (4)]));
						}
					;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 276 "project.y"
    { (yyval) = (yyvsp[(1) - (1)]); 	;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 278 "project.y"
    { 
	
	        if(check[(yyvsp[(1) - (1)])] == 1)
			{
			    (yyval) = sym[(yyvsp[(1) - (1)])];
			}
		    else 
			{
                printf("\n%c is not declared\n", (yyvsp[(1) - (1)]) + 97);				
			}

         ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 291 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 293 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) - (yyvsp[(3) - (3)]); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 295 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) * (yyvsp[(3) - (3)]); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 297 "project.y"
    { 	if((yyvsp[(3) - (3)])) 
				  		{
				     			(yyval) = (yyvsp[(1) - (3)]) / (yyvsp[(3) - (3)]);
				  		}
				  		else
				  		{
							(yyval) = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 307 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) % (yyvsp[(3) - (3)]); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 309 "project.y"
    { (yyval) = pow((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 311 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) < (yyvsp[(3) - (3)]); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 313 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) > (yyvsp[(3) - (3)]); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 315 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) <= (yyvsp[(3) - (3)]); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 317 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) >= (yyvsp[(3) - (3)]); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 319 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) != (yyvsp[(3) - (3)]); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 321 "project.y"
    { (yyval) = (yyvsp[(2) - (3)]);	;}
    break;



/* Line 1455 of yacc.c  */
#line 2045 "project.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 326 "project.y"


int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}

