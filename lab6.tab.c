/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_NUM = 258,
     T_STRING = 259,
     T_ID = 260,
     T_INT = 261,
     T_VOID = 262,
     T_BOOLEAN = 263,
     T_BEGIN = 264,
     T_END = 265,
     T_IF = 266,
     T_THEN = 267,
     T_ELSE = 268,
     T_ENDIF = 269,
     T_WHILE = 270,
     T_DO = 271,
     T_RETURN = 272,
     T_WRITE = 273,
     T_LE = 274,
     T_GE = 275,
     T_EQ = 276,
     T_NE = 277,
     T_AND = 278,
     T_OR = 279,
     T_TRUE = 280,
     T_FALSE = 281,
     T_NOT = 282,
     T_READ = 283
   };
#endif
/* Tokens.  */
#define T_NUM 258
#define T_STRING 259
#define T_ID 260
#define T_INT 261
#define T_VOID 262
#define T_BOOLEAN 263
#define T_BEGIN 264
#define T_END 265
#define T_IF 266
#define T_THEN 267
#define T_ELSE 268
#define T_ENDIF 269
#define T_WHILE 270
#define T_DO 271
#define T_RETURN 272
#define T_WRITE 273
#define T_LE 274
#define T_GE 275
#define T_EQ 276
#define T_NE 277
#define T_AND 278
#define T_OR 279
#define T_TRUE 280
#define T_FALSE 281
#define T_NOT 282
#define T_READ 283




/* Copy the first part of user declarations.  */
#line 1 "lab6.y"


/*

	Austin Matthys
	October 2025

	YACC File that takes tokens from lab6.l and parses them into grammar according to the definition of ALGOL_C


*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "ast.h"

extern int mydebug;
extern int linecount;

extern int yylex(); // Needed to get rid of implicit use of yylex

void yyerror (char * s)  /* Called by yyparse on error */
 
{
  printf ("%s on line %d\n", s, linecount);
}



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 33 "lab6.y"
{
int value;
char* string;
ASTnode * node;
enum DataTypes datatype;
enum OPERATORS operator;
}
/* Line 193 of yacc.c.  */
#line 189 "lab6.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 202 "lab6.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   134

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNRULES -- Number of states.  */
#define YYNSTATES  128

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,    34,    40,    38,    32,    39,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    29,
      36,    35,    37,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    30,     2,    31,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    18,    20,
      25,    29,    36,    38,    40,    42,    49,    51,    53,    55,
      59,    62,    67,    72,    73,    76,    77,    80,    82,    84,
      86,    88,    90,    92,    94,    96,    99,   101,   107,   115,
     120,   123,   127,   131,   135,   139,   144,   146,   148,   153,
     155,   159,   161,   163,   165,   167,   169,   171,   173,   177,
     179,   181,   183,   187,   189,   191,   193,   195,   199,   201,
     203,   205,   207,   209,   212,   217,   219,   220,   222
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    44,    -1,    45,    -1,    45,    44,    -1,
      46,    -1,    49,    -1,    48,    47,    29,    -1,     5,    -1,
       5,    30,     3,    31,    -1,     5,    32,    47,    -1,     5,
      30,     3,    31,    32,    47,    -1,     6,    -1,     7,    -1,
       8,    -1,    48,     5,    33,    50,    34,    53,    -1,     7,
      -1,    51,    -1,    52,    -1,    52,    32,    51,    -1,    48,
       5,    -1,    48,     5,    30,    31,    -1,     9,    54,    55,
      10,    -1,    -1,    46,    54,    -1,    -1,    56,    55,    -1,
      61,    -1,    62,    -1,    53,    -1,    60,    -1,    63,    -1,
      57,    -1,    58,    -1,    59,    -1,    64,    29,    -1,    29,
      -1,    11,    64,    12,    56,    14,    -1,    11,    64,    12,
      56,    13,    56,    14,    -1,    15,    64,    16,    56,    -1,
      17,    29,    -1,    17,    64,    29,    -1,    28,    65,    29,
      -1,    18,     4,    29,    -1,    18,    64,    29,    -1,    65,
      35,    66,    29,    -1,    66,    -1,     5,    -1,     5,    30,
      64,    31,    -1,    68,    -1,    68,    67,    68,    -1,    19,
      -1,    36,    -1,    37,    -1,    20,    -1,    21,    -1,    22,
      -1,    70,    -1,    68,    69,    70,    -1,    38,    -1,    39,
      -1,    72,    -1,    70,    71,    72,    -1,    40,    -1,    41,
      -1,    23,    -1,    24,    -1,    33,    64,    34,    -1,     3,
      -1,    65,    -1,    73,    -1,    25,    -1,    26,    -1,    27,
      72,    -1,     5,    33,    74,    34,    -1,    75,    -1,    -1,
      64,    -1,    64,    32,    75,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    57,    60,    66,    67,    70,    81,    85,
      90,    95,   103,   106,   109,   114,   123,   124,   127,   128,
     131,   132,   135,   143,   144,   151,   153,   160,   161,   162,
     163,   164,   165,   166,   167,   170,   174,   179,   186,   195,
     202,   205,   211,   217,   222,   228,   235,   240,   244,   251,
     254,   262,   263,   264,   265,   266,   267,   270,   273,   281,
     282,   285,   287,   295,   296,   297,   298,   301,   304,   308,
     311,   314,   318,   322,   329,   335,   336,   339,   343
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_NUM", "T_STRING", "T_ID", "T_INT",
  "T_VOID", "T_BOOLEAN", "T_BEGIN", "T_END", "T_IF", "T_THEN", "T_ELSE",
  "T_ENDIF", "T_WHILE", "T_DO", "T_RETURN", "T_WRITE", "T_LE", "T_GE",
  "T_EQ", "T_NE", "T_AND", "T_OR", "T_TRUE", "T_FALSE", "T_NOT", "T_READ",
  "';'", "'['", "']'", "','", "'('", "')'", "'='", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "$accept", "Program", "DecList", "Decl", "VarDec",
  "VarList", "TypeSpec", "FunDecl", "Params", "ParamList", "Param",
  "CompStat", "LocalDec", "StatList", "Statement", "ExpressionStat",
  "SelectStat", "IterationStat", "ReturnStat", "ReadStat", "WriteStat",
  "AssignStat", "Expression", "Var", "SimpleExpression", "RelOp",
  "AddExpr", "AddOp", "Term", "MultOp", "Factor", "Call", "Args",
  "ArgList", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    59,
      91,    93,    44,    40,    41,    61,    60,    62,    43,    45,
      42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    46,    47,    47,
      47,    47,    48,    48,    48,    49,    50,    50,    51,    51,
      52,    52,    53,    54,    54,    55,    55,    56,    56,    56,
      56,    56,    56,    56,    56,    57,    57,    58,    58,    59,
      60,    60,    61,    62,    62,    63,    64,    65,    65,    66,
      66,    67,    67,    67,    67,    67,    67,    68,    68,    69,
      69,    70,    70,    71,    71,    71,    71,    72,    72,    72,
      72,    72,    72,    72,    73,    74,    74,    75,    75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     1,     4,
       3,     6,     1,     1,     1,     6,     1,     1,     1,     3,
       2,     4,     4,     0,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     5,     7,     4,
       2,     3,     3,     3,     3,     4,     1,     1,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     2,     4,     1,     0,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    13,    14,     0,     2,     3,     5,     0,     6,
       1,     4,     8,     0,     0,     0,     0,     7,     0,     8,
      10,    13,     0,     0,    17,    18,     9,    20,     0,     0,
       0,     0,    23,    15,    19,    11,    21,    23,     0,    25,
      24,    68,    47,     0,     0,     0,     0,    71,    72,     0,
       0,    36,     0,    29,     0,    25,    32,    33,    34,    30,
      27,    28,    31,     0,    69,    46,    49,    57,    61,    70,
       0,    76,     0,    69,     0,    40,     0,     0,     0,    73,
      47,     0,     0,    22,    26,    35,     0,    51,    54,    55,
      56,    52,    53,    59,    60,     0,     0,    65,    66,    63,
      64,     0,     0,    77,     0,    75,     0,     0,    41,    43,
      44,    42,    67,     0,    50,    58,    62,    48,     0,    74,
       0,    39,    45,    78,     0,    37,     0,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    13,     8,     9,    23,    24,
      25,    53,    39,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    73,    65,    95,    66,    96,    67,   101,
      68,    69,   104,   105
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -100
static const yytype_int8 yypact[] =
{
      86,  -100,  -100,  -100,    33,  -100,    86,  -100,     4,  -100,
    -100,  -100,    54,    17,    48,    64,    89,  -100,    24,   -17,
    -100,    41,    72,    49,  -100,    66,    67,    70,    92,    86,
      64,    71,    86,  -100,  -100,  -100,  -100,    86,    64,     9,
    -100,  -100,    26,    45,    45,    14,    27,  -100,  -100,    45,
      98,  -100,    45,  -100,    94,     9,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,    76,    73,  -100,    43,    50,  -100,  -100,
      45,    45,    95,  -100,    90,  -100,    80,    81,    82,  -100,
      83,    85,    78,  -100,  -100,  -100,    45,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,    45,    45,  -100,  -100,  -100,
    -100,    45,    84,    87,    88,  -100,     9,     9,  -100,  -100,
    -100,  -100,  -100,    91,   -16,    50,  -100,  -100,    45,  -100,
      75,  -100,  -100,  -100,     9,  -100,   102,  -100
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -100,  -100,   111,  -100,    12,    -9,    29,  -100,  -100,    96,
    -100,    93,    97,    63,   -99,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,   -42,   -39,    37,  -100,    31,  -100,    28,  -100,
     -44,  -100,  -100,    10
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -17
static const yytype_int8 yytable[] =
{
      64,    72,    74,    76,    78,    79,    20,   120,   121,    12,
      82,    81,    41,    14,    42,    15,    64,    41,    32,    42,
      43,    35,    93,    94,    44,   126,    45,    46,   102,   103,
      41,    77,    42,    10,    47,    48,    49,    50,    51,    47,
      48,    49,    52,    75,    37,    22,    17,    52,    41,    37,
      42,    18,    47,    48,    49,    26,    70,   116,    22,    71,
      52,    38,    87,    88,    89,    90,    38,    64,    64,    19,
      47,    48,    49,    97,    98,   -16,   103,    27,    52,    91,
      92,    93,    94,    28,    14,    64,    15,    16,   124,   125,
      99,   100,     1,     2,     3,     1,    21,     3,    29,    30,
      31,    32,    36,    80,    83,    85,   107,   106,    86,   108,
     109,   110,   112,    70,   111,   117,   127,    11,    84,   118,
     122,    33,   119,   113,   115,    34,   114,     0,   123,     0,
       0,     0,     0,     0,    40
};

static const yytype_int8 yycheck[] =
{
      39,    43,    44,    45,    46,    49,    15,   106,   107,     5,
      52,    50,     3,    30,     5,    32,    55,     3,     9,     5,
      11,    30,    38,    39,    15,   124,    17,    18,    70,    71,
       3,     4,     5,     0,    25,    26,    27,    28,    29,    25,
      26,    27,    33,    29,    32,    16,    29,    33,     3,    37,
       5,     3,    25,    26,    27,    31,    30,   101,    29,    33,
      33,    32,    19,    20,    21,    22,    37,   106,   107,     5,
      25,    26,    27,    23,    24,    34,   118,     5,    33,    36,
      37,    38,    39,    34,    30,   124,    32,    33,    13,    14,
      40,    41,     6,     7,     8,     6,     7,     8,    32,    32,
      30,     9,    31,     5,    10,    29,    16,    12,    35,    29,
      29,    29,    34,    30,    29,    31,    14,     6,    55,    32,
      29,    28,    34,    86,    96,    29,    95,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    37
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,     8,    43,    44,    45,    46,    48,    49,
       0,    44,     5,    47,    30,    32,    33,    29,     3,     5,
      47,     7,    48,    50,    51,    52,    31,     5,    34,    32,
      32,    30,     9,    53,    51,    47,    31,    46,    48,    54,
      54,     3,     5,    11,    15,    17,    18,    25,    26,    27,
      28,    29,    33,    53,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    68,    70,    72,    73,
      30,    33,    64,    65,    64,    29,    64,     4,    64,    72,
       5,    65,    64,    10,    55,    29,    35,    19,    20,    21,
      22,    36,    37,    38,    39,    67,    69,    23,    24,    40,
      41,    71,    64,    64,    74,    75,    12,    16,    29,    29,
      29,    29,    34,    66,    68,    70,    72,    31,    32,    34,
      56,    56,    29,    75,    13,    14,    56,    14
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 53 "lab6.y"
    { program = (yyvsp[(1) - (1)].node);
				;}
    break;

  case 3:
#line 57 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_DEC_LIST);
		  					 (yyval.node)->s1 = (yyvsp[(1) - (1)].node);
		  				 ;}
    break;

  case 4:
#line 60 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_DEC_LIST);
												 (yyval.node)->s1 = (yyvsp[(1) - (2)].node);
												 (yyval.node)->s2 = (yyvsp[(2) - (2)].node);
		  								 ;}
    break;

  case 5:
#line 66 "lab6.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 6:
#line 67 "lab6.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 7:
#line 71 "lab6.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node);
						ASTnode *p;
						p = (yyvsp[(2) - (3)].node);
						while (p!= NULL){
							p->datatype = (yyvsp[(1) - (3)].datatype);
							p = p->s1;
						} // of while
					;}
    break;

  case 8:
#line 82 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_VARDEC);
		  		(yyval.node)->name = (yyvsp[(1) - (1)].string);
		  	;}
    break;

  case 9:
#line 86 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_VARDEC);
		  		(yyval.node)->name = (yyvsp[(1) - (4)].string);
		  		(yyval.node)->value = (yyvsp[(3) - (4)].value);
		  	;}
    break;

  case 10:
#line 91 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_VARDEC);
		  		(yyval.node)->name = (yyvsp[(1) - (3)].string);
		  		(yyval.node)->s1 = (yyvsp[(3) - (3)].node);
		  	;}
    break;

  case 11:
#line 96 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_VARDEC);
		  		(yyval.node)->name = (yyvsp[(1) - (6)].string);
		  		(yyval.node)->value = (yyvsp[(3) - (6)].value);
		  		(yyval.node)->s1 = (yyvsp[(6) - (6)].node);
		  	;}
    break;

  case 12:
#line 104 "lab6.y"
    { (yyval.datatype) = A_INTTYPE;
		  	 ;}
    break;

  case 13:
#line 107 "lab6.y"
    { (yyval.datatype) = A_VOIDTYPE;
		  	 ;}
    break;

  case 14:
#line 110 "lab6.y"
    { (yyval.datatype) = A_BOOLEANTYPE;
		  	 ;}
    break;

  case 15:
#line 115 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_FUNDEC);
					(yyval.node)->name = (yyvsp[(2) - (6)].string);
					(yyval.node)->datatype = (yyvsp[(1) - (6)].datatype);
					(yyval.node)->s1 = NULL; // FIX Later	
					(yyval.node)->s2 = (yyvsp[(6) - (6)].node);
				;}
    break;

  case 20:
#line 131 "lab6.y"
    {printf("found ID in PARAM->TID %s %d\n", (yyvsp[(2) - (2)].string), linecount);;}
    break;

  case 21:
#line 132 "lab6.y"
    {printf("found ID in PARAM ->TID %s %d\n", (yyvsp[(2) - (4)].string), linecount);;}
    break;

  case 22:
#line 136 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_COMPOUND);
				 	 (yyval.node)->s1 = (yyvsp[(2) - (4)].node);
				 	 (yyval.node)->s2 = (yyvsp[(3) - (4)].node);
				 ;}
    break;

  case 23:
#line 143 "lab6.y"
    { (yyval.node) = NULL;;}
    break;

  case 24:
#line 145 "lab6.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node);
		 		 	 (yyval.node)->s2 = (yyvsp[(2) - (2)].node);
		 		 ;}
    break;

  case 25:
#line 151 "lab6.y"
    {(yyval.node) = ASTCreateNode(A_STMT_LIST);
				 ;}
    break;

  case 26:
#line 154 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_STMT_LIST);
				 	 (yyval.node)->s1 = (yyvsp[(1) - (2)].node);
				 	 (yyval.node)->s2 = (yyvsp[(2) - (2)].node);
				 ;}
    break;

  case 27:
#line 160 "lab6.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 28:
#line 161 "lab6.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 29:
#line 162 "lab6.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 30:
#line 163 "lab6.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 31:
#line 164 "lab6.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 32:
#line 165 "lab6.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 33:
#line 166 "lab6.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 34:
#line 167 "lab6.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 35:
#line 171 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_EXPRSTAT);
							 	 (yyval.node)->s1 = (yyvsp[(1) - (2)].node);
							 ;}
    break;

  case 36:
#line 175 "lab6.y"
    { (yyval.node) = NULL;
			   			 ;}
    break;

  case 37:
#line 180 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_SELECT);
						 (yyval.node)->s1 = (yyvsp[(2) - (5)].node);
						 (yyval.node)->s2 = ASTCreateNode(A_SELECTBODY);
						 (yyval.node)->s2->s1 = (yyvsp[(4) - (5)].node);
						 (yyval.node)->s2->s2 = NULL;
					 ;}
    break;

  case 38:
#line 187 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_SELECT);
						 (yyval.node)->s1 = (yyvsp[(2) - (7)].node);
						 (yyval.node)->s2 = ASTCreateNode(A_SELECTBODY);
						 (yyval.node)->s2->s1 = (yyvsp[(4) - (7)].node);
						 (yyval.node)->s2->s2 = (yyvsp[(6) - (7)].node);
					 ;}
    break;

  case 39:
#line 196 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_ITERATION);
								(yyval.node)->s1 = (yyvsp[(2) - (4)].node);
								(yyval.node)->s2 = (yyvsp[(4) - (4)].node);
					 		;}
    break;

  case 40:
#line 203 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_RETURN);
					 ;}
    break;

  case 41:
#line 206 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_RETURN);
		   		 	 (yyval.node)->s1 = (yyvsp[(2) - (3)].node);
					 ;}
    break;

  case 42:
#line 212 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_READ);
				 	 (yyval.node)->s1 = (yyvsp[(2) - (3)].node);
				 ;}
    break;

  case 43:
#line 218 "lab6.y"
    {
						(yyval.node) = ASTCreateNode(A_WRITE);
						(yyval.node)->name = (yyvsp[(2) - (3)].string);
					;}
    break;

  case 44:
#line 223 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_WRITE);
						(yyval.node)->s1 = (yyvsp[(2) - (3)].node);
		  		;}
    break;

  case 45:
#line 229 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_ASSIGN);
					 	 (yyval.node)->s1 = (yyvsp[(1) - (4)].node);
					 	 (yyval.node)->s2 = (yyvsp[(3) - (4)].node);
					 ;}
    break;

  case 46:
#line 236 "lab6.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node);
					 ;}
    break;

  case 47:
#line 241 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_VAR);
			(yyval.node)->name = (yyvsp[(1) - (1)].string);
		;}
    break;

  case 48:
#line 245 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_VAR);
			(yyval.node)->name = (yyvsp[(1) - (4)].string);
			(yyval.node)->s1 = (yyvsp[(3) - (4)].node);
		;}
    break;

  case 49:
#line 252 "lab6.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node);
					 			 ;}
    break;

  case 50:
#line 255 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_EXPR);
									 (yyval.node)->s1 = (yyvsp[(1) - (3)].node);
									 (yyval.node)->s2 = (yyvsp[(3) - (3)].node);
									 (yyval.node)->operator = (yyvsp[(2) - (3)].operator);
				 				 ;}
    break;

  case 51:
#line 262 "lab6.y"
    { (yyval.operator) = A_LE;;}
    break;

  case 52:
#line 263 "lab6.y"
    { (yyval.operator) = A_LT;;}
    break;

  case 53:
#line 264 "lab6.y"
    { (yyval.operator) = A_GT;;}
    break;

  case 54:
#line 265 "lab6.y"
    { (yyval.operator) = A_GE;;}
    break;

  case 55:
#line 266 "lab6.y"
    { (yyval.operator) = A_EQ;;}
    break;

  case 56:
#line 267 "lab6.y"
    { (yyval.operator) = A_NE;;}
    break;

  case 57:
#line 271 "lab6.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node);
				;}
    break;

  case 58:
#line 274 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_EXPR);
					(yyval.node)->s1 = (yyvsp[(1) - (3)].node);
					(yyval.node)->s2 = (yyvsp[(3) - (3)].node);
					(yyval.node)->operator = (yyvsp[(2) - (3)].operator);
				;}
    break;

  case 59:
#line 281 "lab6.y"
    { (yyval.operator) = A_PLUS;;}
    break;

  case 60:
#line 282 "lab6.y"
    { (yyval.operator) = A_MINUS;;}
    break;

  case 61:
#line 285 "lab6.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node);
		 ;}
    break;

  case 62:
#line 288 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_EXPR);
					(yyval.node)->s1 = (yyvsp[(1) - (3)].node);
					(yyval.node)->s2 = (yyvsp[(3) - (3)].node);
					(yyval.node)->operator = (yyvsp[(2) - (3)].operator);
		 ;}
    break;

  case 63:
#line 295 "lab6.y"
    { (yyval.operator) = A_TIMES;;}
    break;

  case 64:
#line 296 "lab6.y"
    { (yyval.operator) = A_DIVIDE;;}
    break;

  case 65:
#line 297 "lab6.y"
    { (yyval.operator) = A_AND;;}
    break;

  case 66:
#line 298 "lab6.y"
    { (yyval.operator) = A_OR;;}
    break;

  case 67:
#line 302 "lab6.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); 
		 	 ;}
    break;

  case 68:
#line 305 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_NUM);
	   	 	 (yyval.node) ->value = (yyvsp[(1) - (1)].value);
		 	 ;}
    break;

  case 69:
#line 309 "lab6.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node);
		 	 ;}
    break;

  case 70:
#line 312 "lab6.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node);
		 	 ;}
    break;

  case 71:
#line 315 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_TRUE);
	   	 	 (yyval.node) ->value = 1;
		 	 ;}
    break;

  case 72:
#line 319 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_FALSE);
	   	 	 (yyval.node) ->value = 0;
		 	 ;}
    break;

  case 73:
#line 323 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_EXPR);
	   	 	 (yyval.node)->operator = A_NOT;
	   	 	 (yyval.node)->s1 = (yyvsp[(2) - (2)].node);
		 	 ;}
    break;

  case 74:
#line 330 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_CALL);
		   (yyval.node)->s1 = (yyvsp[(3) - (4)].node);
		 ;}
    break;

  case 75:
#line 335 "lab6.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 76:
#line 336 "lab6.y"
    { (yyval.node) = NULL;;}
    break;

  case 77:
#line 340 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_ALIST);
			  	(yyval.node)->s1 = (yyvsp[(1) - (1)].node);
			  ;}
    break;

  case 78:
#line 344 "lab6.y"
    { (yyval.node) = ASTCreateNode(A_ALIST);
			  	(yyval.node)->s1 = (yyvsp[(1) - (3)].node);
			  	(yyval.node)->s2 = (yyvsp[(3) - (3)].node);
			  ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1992 "lab6.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 351 "lab6.y"


int main()
{ yyparse();
fprintf(stderr, "the input is syntactically correct\n");
// we know that variable "program" has been set to an AST

ASTprint(0,program);

}

