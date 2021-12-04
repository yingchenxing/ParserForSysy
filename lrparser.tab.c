/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "lrparser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
int yylex(void);
void yyerror (char const *s);


/* Line 371 of yacc.c  */
#line 78 "lrparser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "lrparser.tab.h".  */
#ifndef YY_YY_LRPARSER_TAB_H_INCLUDED
# define YY_YY_LRPARSER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     CMP = 259,
     ASSIGN = 260,
     ID = 261,
     STRING = 262,
     INT = 263,
     STR = 264,
     VOID = 265,
     IF = 266,
     ELSE = 267,
     WHILE = 268,
     RETURN = 269,
     PRINT = 270,
     SCAN = 271
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 13 "lrparser.y"

	int iValue;
	char *sValue;
	past pAst;


/* Line 387 of yacc.c  */
#line 144 "lrparser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_LRPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 172 "lrparser.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   175

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNRULES -- Number of states.  */
#define YYNSTATES  134

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   271

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    30,     2,     2,
      22,    23,    28,    26,    18,    27,     2,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    17,
       2,    19,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    24,     2,    25,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    20,     2,    21,     2,     2,     2,     2,
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
      15,    16
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    16,    20,    22,
      26,    28,    32,    38,    40,    44,    46,    48,    50,    52,
      57,    61,    66,    70,    72,    76,    79,    81,    83,    85,
      87,    89,    91,    93,    95,    97,    99,   101,   104,   108,
     110,   112,   114,   117,   119,   122,   128,   136,   142,   145,
     149,   152,   156,   160,   162,   164,   168,   172,   179,   181,
     185,   187,   191,   195,   197,   201,   205,   209,   212,   217,
     221,   225,   227,   229,   234,   236,   240,   242
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      32,     0,    -1,    33,    -1,    32,    33,    -1,    34,    -1,
      35,    -1,    44,    40,    46,    -1,    44,    36,    17,    -1,
      37,    -1,    36,    18,    37,    -1,    40,    -1,    40,    19,
      59,    -1,    40,    19,    20,    38,    21,    -1,    39,    -1,
      38,    18,    39,    -1,     3,    -1,     7,    -1,    41,    -1,
       6,    -1,    41,    22,    42,    23,    -1,    41,    22,    23,
      -1,     6,    24,    56,    25,    -1,     6,    24,    25,    -1,
      43,    -1,    42,    18,    43,    -1,    44,     6,    -1,     8,
      -1,     9,    -1,    10,    -1,    46,    -1,    50,    -1,    51,
      -1,    52,    -1,    53,    -1,    54,    -1,    55,    -1,    35,
      -1,    47,    48,    -1,    47,    49,    48,    -1,    20,    -1,
      21,    -1,    45,    -1,    49,    45,    -1,    17,    -1,    56,
      17,    -1,    11,    22,    56,    23,    45,    -1,    11,    22,
      56,    23,    45,    12,    45,    -1,    13,    22,    56,    23,
      45,    -1,    14,    17,    -1,    14,    56,    17,    -1,    15,
      17,    -1,    15,    62,    17,    -1,    16,    63,    17,    -1,
      57,    -1,    58,    -1,     6,     5,    57,    -1,     6,    19,
      57,    -1,     6,    24,    56,    25,    19,    57,    -1,    59,
      -1,    58,     4,    59,    -1,    60,    -1,    59,    26,    60,
      -1,    59,    27,    60,    -1,    61,    -1,    60,    28,    61,
      -1,    60,    29,    61,    -1,    60,    30,    61,    -1,    27,
      61,    -1,     6,    22,    62,    23,    -1,     6,    22,    23,
      -1,    22,    56,    23,    -1,     6,    -1,    39,    -1,     6,
      24,    56,    25,    -1,    56,    -1,    62,    18,    56,    -1,
       6,    -1,    63,    18,     6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    34,    34,    35,    38,    39,    42,    45,    48,    49,
      52,    53,    54,    57,    58,    61,    62,    65,    68,    69,
      70,    71,    72,    75,    76,    79,    82,    83,    84,    87,
      88,    89,    90,    91,    92,    93,    94,    97,    98,   101,
     104,   107,   108,   111,   112,   115,   116,   119,   122,   123,
     126,   127,   130,   133,   136,   137,   138,   139,   142,   143,
     146,   147,   148,   151,   152,   153,   154,   155,   158,   159,
     160,   161,   162,   163,   166,   167,   170,   171
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "CMP", "ASSIGN", "ID",
  "STRING", "INT", "STR", "VOID", "IF", "ELSE", "WHILE", "RETURN", "PRINT",
  "SCAN", "';'", "','", "'='", "'{'", "'}'", "'('", "')'", "'['", "']'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "$accept", "program",
  "external_declaration", "function_definition", "declaration",
  "init_declarator_list", "init_declarator", "intstr_list", "initializer",
  "declarator", "direct_declarator", "parameter_list", "parameter", "type",
  "statement", "compound_statement", "begin_scope", "end_scope",
  "statement_list", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "print_statement",
  "scan_statement", "expr", "assign_expr", "cmp_expr", "add_expr",
  "mul_expr", "primary_expr", "expr_list", "id_list", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    59,    44,    61,
     123,   125,    40,    41,    91,    93,    43,    45,    42,    47,
      37
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    31,    32,    32,    33,    33,    34,    35,    36,    36,
      37,    37,    37,    38,    38,    39,    39,    40,    41,    41,
      41,    41,    41,    42,    42,    43,    44,    44,    44,    45,
      45,    45,    45,    45,    45,    45,    45,    46,    46,    47,
      48,    49,    49,    50,    50,    51,    51,    52,    53,    53,
      54,    54,    55,    56,    57,    57,    57,    57,    58,    58,
      59,    59,    59,    60,    60,    60,    60,    60,    61,    61,
      61,    61,    61,    61,    62,    62,    63,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     3,     3,     1,     3,
       1,     3,     5,     1,     3,     1,     1,     1,     1,     4,
       3,     4,     3,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     1,
       1,     1,     2,     1,     2,     5,     7,     5,     2,     3,
       2,     3,     3,     1,     1,     3,     3,     6,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     2,     4,     3,
       3,     1,     1,     4,     1,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    26,    27,    28,     0,     2,     4,     5,     0,     1,
       3,    18,     0,     8,    10,    17,     0,     7,     0,     0,
      39,     6,     0,     0,    15,    71,    16,     0,    22,     0,
      72,     0,    53,    54,    58,    60,    63,     9,    10,    71,
       0,    11,     0,     0,     0,     0,     0,    43,    40,    36,
       0,    41,    29,    37,     0,    30,    31,    32,    33,    34,
      35,     0,    20,     0,    23,     0,     0,     0,     0,     0,
       0,    67,    21,     0,     0,     0,     0,     0,     0,     0,
       0,    13,     0,     0,    48,     0,    50,    74,     0,    76,
       0,    42,    38,    44,     0,    19,    25,    55,    56,    69,
       0,     0,    70,    59,    61,    62,    64,    65,    66,     0,
       0,    12,     0,     0,    49,    51,     0,    52,     0,    24,
      68,    73,    73,    14,     0,     0,    75,    77,     0,    45,
      47,    57,     0,    46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,    49,    12,    13,    80,    30,    38,
      15,    63,    64,    50,    51,    52,    22,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    32,    33,    34,    35,
      36,    88,    90
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -61
static const yytype_int16 yypact[] =
{
      67,   -61,   -61,   -61,    61,   -61,   -61,   -61,    15,   -61,
     -61,    12,     8,   -61,    23,    56,    98,   -61,    15,   104,
     -61,   -61,    24,   146,   -61,    -2,   -61,   137,   -61,   145,
     -61,    63,   -61,    10,    22,   144,   -61,   -61,    62,    75,
       9,    22,    72,    80,   110,   112,   100,   -61,   -61,   -61,
      15,   -61,   -61,   -61,    24,   -61,   -61,   -61,   -61,   -61,
     -61,    91,   -61,    -8,   -61,   103,   137,   137,   135,   137,
      89,   -61,   -61,   143,   143,   143,   145,   145,   145,   137,
      29,   -61,   137,   137,   -61,    97,   -61,   -61,    37,   -61,
      42,   -61,   -61,   -61,    67,   -61,   -61,   -61,   -61,   -61,
      -5,    96,   -61,    22,   144,   144,   -61,   -61,   -61,   105,
       9,   -61,    99,   113,   -61,   -61,   137,   -61,   122,   -61,
     -61,   114,   -61,   -61,    76,    76,   -61,   -61,   137,   123,
     -61,   -61,    76,   -61
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -61,   -61,   141,   -61,    19,   -61,   129,   -61,   -36,   152,
     -61,   -61,    59,     1,   -52,   147,   -61,   109,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -16,   -60,   -61,   -11,   -10,
     -20,   107,   -61
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      31,     8,    91,    66,    81,     8,    97,    98,    41,    71,
      94,    70,    24,   116,    73,    95,    26,    67,   120,     7,
      68,    11,    69,     7,    65,    17,    18,    24,    85,    87,
      25,    26,     1,     2,     3,    42,    16,    43,    44,    45,
      46,    47,    19,    20,    20,    48,    27,   110,    74,    75,
     111,    29,    87,   101,   115,   116,   106,   107,   108,   117,
     118,     9,   103,   109,   104,   105,   112,   113,   131,     1,
       2,     3,   129,   130,   123,     1,     2,     3,    23,    24,
     133,    19,    25,    26,     1,     2,     3,    42,    72,    43,
      44,    45,    46,    47,    82,    65,    20,    68,    27,    79,
     126,    24,    83,    29,    25,    26,    89,    24,    93,    96,
      39,    26,   102,    24,   114,    24,    25,    26,    25,    26,
      27,   121,   124,    28,    40,    29,    27,    84,   127,    86,
     122,    29,    27,   128,    27,   132,   125,    29,    24,    29,
      24,    25,    26,    25,    26,    10,    24,    37,    24,    39,
      26,    39,    26,   119,     1,     2,     3,    27,    99,    27,
      14,    21,    29,    92,    29,    27,     0,    27,     0,    62,
      29,     0,    76,    77,    78,   100
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-61)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      16,     0,    54,     5,    40,     4,    66,    67,    19,    29,
      18,    27,     3,    18,     4,    23,     7,    19,    23,     0,
      22,     6,    24,     4,    23,    17,    18,     3,    44,    45,
       6,     7,     8,     9,    10,    11,    24,    13,    14,    15,
      16,    17,    19,    20,    20,    21,    22,    18,    26,    27,
      21,    27,    68,    69,    17,    18,    76,    77,    78,    17,
      18,     0,    73,    79,    74,    75,    82,    83,   128,     8,
       9,    10,   124,   125,   110,     8,     9,    10,    22,     3,
     132,    19,     6,     7,     8,     9,    10,    11,    25,    13,
      14,    15,    16,    17,    22,    94,    20,    22,    22,    24,
     116,     3,    22,    27,     6,     7,     6,     3,    17,     6,
       6,     7,    23,     3,    17,     3,     6,     7,     6,     7,
      22,    25,    23,    25,    20,    27,    22,    17,     6,    17,
      25,    27,    22,    19,    22,    12,    23,    27,     3,    27,
       3,     6,     7,     6,     7,     4,     3,    18,     3,     6,
       7,     6,     7,    94,     8,     9,    10,    22,    23,    22,
       8,    14,    27,    54,    27,    22,    -1,    22,    -1,    23,
      27,    -1,    28,    29,    30,    68
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,     9,    10,    32,    33,    34,    35,    44,     0,
      33,     6,    36,    37,    40,    41,    24,    17,    18,    19,
      20,    46,    47,    22,     3,     6,     7,    22,    25,    27,
      39,    56,    57,    58,    59,    60,    61,    37,    40,     6,
      20,    59,    11,    13,    14,    15,    16,    17,    21,    35,
      44,    45,    46,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    23,    42,    43,    44,     5,    19,    22,    24,
      56,    61,    25,     4,    26,    27,    28,    29,    30,    24,
      38,    39,    22,    22,    17,    56,    17,    56,    62,     6,
      63,    45,    48,    17,    18,    23,     6,    57,    57,    23,
      62,    56,    23,    59,    60,    60,    61,    61,    61,    56,
      18,    21,    56,    56,    17,    17,    18,    17,    18,    43,
      23,    25,    25,    39,    23,    23,    56,     6,    19,    45,
      45,    57,    12,    45
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1792 of yacc.c  */
#line 34 "lrparser.y"
    {(yyval.pAst) = program(NULL, (yyvsp[(1) - (1)].pAst)); root = (yyval.pAst);}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 35 "lrparser.y"
    {(yyval.pAst) = program((yyvsp[(1) - (2)].pAst), (yyvsp[(2) - (2)].pAst));}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 38 "lrparser.y"
    {(yyval.pAst) = ext_decl((yyvsp[(1) - (1)].pAst));}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 39 "lrparser.y"
    {(yyval.pAst) = ext_decl((yyvsp[(1) - (1)].pAst));}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 42 "lrparser.y"
    {(yyval.pAst) = func_def((yyvsp[(1) - (3)].pAst), (yyvsp[(2) - (3)].pAst), (yyvsp[(3) - (3)].pAst));}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 45 "lrparser.y"
    {(yyval.pAst) = decln((yyvsp[(1) - (3)].pAst), (yyvsp[(2) - (3)].pAst));}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 48 "lrparser.y"
    {(yyval.pAst) = init_declr_list(NULL, (yyvsp[(1) - (1)].pAst));}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 49 "lrparser.y"
    {(yyval.pAst) = init_declr_list((yyvsp[(1) - (3)].pAst), (yyvsp[(3) - (3)].pAst));}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 52 "lrparser.y"
    {(yyval.pAst) = declr((yyvsp[(1) - (1)].pAst), NULL);}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 53 "lrparser.y"
    {(yyval.pAst) = declr((yyvsp[(1) - (3)].pAst), (yyvsp[(3) - (3)].pAst));}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 54 "lrparser.y"
    {(yyval.pAst) = declr((yyvsp[(1) - (5)].pAst), (yyvsp[(4) - (5)].pAst));}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 57 "lrparser.y"
    {(yyval.pAst) = intstr_list(NULL, (yyvsp[(1) - (1)].pAst));}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 58 "lrparser.y"
    {(yyval.pAst) = intstr_list((yyvsp[(1) - (3)].pAst), (yyvsp[(3) - (3)].pAst));}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 61 "lrparser.y"
    {(yyval.pAst) = newNUMBER((yyvsp[(1) - (1)].iValue));}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 62 "lrparser.y"
    {(yyval.pAst) = newSTRING((yyvsp[(1) - (1)].sValue));}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 65 "lrparser.y"
    {(yyval.pAst) = (yyvsp[(1) - (1)].pAst);}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 68 "lrparser.y"
    {(yyval.pAst) = dir_declr(newID((yyvsp[(1) - (1)].sValue)), NULL);}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 69 "lrparser.y"
    {(yyval.pAst) = dir_declr((yyvsp[(1) - (4)].pAst), (yyvsp[(3) - (4)].pAst));}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 70 "lrparser.y"
    {(yyval.pAst) = dir_declr((yyvsp[(1) - (3)].pAst), NULL);}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 71 "lrparser.y"
    {(yyval.pAst) = dir_declr(newID((yyvsp[(1) - (4)].sValue)), (yyvsp[(3) - (4)].pAst));}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 72 "lrparser.y"
    {(yyval.pAst) = dir_declr(newID((yyvsp[(1) - (3)].sValue)), NULL);}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 75 "lrparser.y"
    {(yyval.pAst) = para_list(NULL, (yyvsp[(1) - (1)].pAst));}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 76 "lrparser.y"
    {(yyval.pAst) = para_list((yyvsp[(1) - (3)].pAst), (yyvsp[(3) - (3)].pAst));}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 79 "lrparser.y"
    {(yyval.pAst) = parameter((yyvsp[(1) - (2)].pAst), newID((yyvsp[(2) - (2)].sValue)));}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 82 "lrparser.y"
    {(yyval.pAst) = type((yyvsp[(1) - (1)].sValue));}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 83 "lrparser.y"
    {(yyval.pAst) = type((yyvsp[(1) - (1)].sValue));}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 84 "lrparser.y"
    {(yyval.pAst) = type((yyvsp[(1) - (1)].sValue));}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 87 "lrparser.y"
    {(yyval.pAst) = (yyvsp[(1) - (1)].pAst);}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 88 "lrparser.y"
    {(yyval.pAst) = (yyvsp[(1) - (1)].pAst);}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 89 "lrparser.y"
    {(yyval.pAst) = (yyvsp[(1) - (1)].pAst);}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 90 "lrparser.y"
    {(yyval.pAst) = (yyvsp[(1) - (1)].pAst);}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 91 "lrparser.y"
    {(yyval.pAst) = (yyvsp[(1) - (1)].pAst);}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 92 "lrparser.y"
    {(yyval.pAst) = (yyvsp[(1) - (1)].pAst);}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 93 "lrparser.y"
    {(yyval.pAst) = (yyvsp[(1) - (1)].pAst);}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 94 "lrparser.y"
    {(yyval.pAst) = (yyvsp[(1) - (1)].pAst);}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 97 "lrparser.y"
    {(yyval.pAst) = com_stmt((yyvsp[(1) - (2)].pAst), NULL, (yyvsp[(2) - (2)].pAst));}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 98 "lrparser.y"
    {(yyval.pAst) = com_stmt((yyvsp[(1) - (3)].pAst), (yyvsp[(2) - (3)].pAst), (yyvsp[(3) - (3)].pAst));}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 101 "lrparser.y"
    {(yyval.pAst) = begin_scope();}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 104 "lrparser.y"
    {(yyval.pAst) = end_scope();}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 107 "lrparser.y"
    {(yyval.pAst) = stmt_list(NULL, (yyvsp[(1) - (1)].pAst));}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 108 "lrparser.y"
    {(yyval.pAst) = stmt_list((yyvsp[(1) - (2)].pAst), (yyvsp[(2) - (2)].pAst));}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 111 "lrparser.y"
    {(yyval.pAst) = expr_stmt(NULL);}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 112 "lrparser.y"
    {(yyval.pAst) = expr_stmt((yyvsp[(1) - (2)].pAst));}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 115 "lrparser.y"
    {(yyval.pAst) = if_stmt((yyvsp[(3) - (5)].pAst), (yyvsp[(5) - (5)].pAst), NULL);}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 116 "lrparser.y"
    {(yyval.pAst) = if_stmt((yyvsp[(3) - (7)].pAst), (yyvsp[(5) - (7)].pAst), (yyvsp[(7) - (7)].pAst));}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 119 "lrparser.y"
    {(yyval.pAst) = while_stmt((yyvsp[(3) - (5)].pAst), (yyvsp[(5) - (5)].pAst));}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 122 "lrparser.y"
    {(yyval.pAst) = return_stmt(NULL);}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 123 "lrparser.y"
    {(yyval.pAst) = return_stmt((yyvsp[(2) - (3)].pAst));}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 126 "lrparser.y"
    {(yyval.pAst) = print_stmt(NULL);}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 127 "lrparser.y"
    {(yyval.pAst) = print_stmt((yyvsp[(2) - (3)].pAst));}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 130 "lrparser.y"
    {(yyval.pAst) = scan_stmt((yyvsp[(2) - (3)].pAst));}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 133 "lrparser.y"
    {(yyval.pAst) = (yyvsp[(1) - (1)].pAst);}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 136 "lrparser.y"
    {(yyval.pAst) = (yyvsp[(1) - (1)].pAst);}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 137 "lrparser.y"
    {(yyval.pAst) = assign_expr((yyvsp[(2) - (3)].iValue), newID((yyvsp[(1) - (3)].sValue)), (yyvsp[(3) - (3)].pAst), NULL);}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 138 "lrparser.y"
    {(yyval.pAst) = assign_expr(-1, newID((yyvsp[(1) - (3)].sValue)), (yyvsp[(3) - (3)].pAst), NULL);}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 139 "lrparser.y"
    {(yyval.pAst) = assign_expr(-1, newID((yyvsp[(1) - (6)].sValue)), (yyvsp[(3) - (6)].pAst), (yyvsp[(6) - (6)].pAst));}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 142 "lrparser.y"
    {(yyval.pAst) = (yyvsp[(1) - (1)].pAst);}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 143 "lrparser.y"
    {(yyval.pAst) = cmp_expr((yyvsp[(1) - (3)].pAst), (yyvsp[(2) - (3)].iValue), (yyvsp[(3) - (3)].pAst));}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 146 "lrparser.y"
    {(yyval.pAst) = (yyvsp[(1) - (1)].pAst);}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 147 "lrparser.y"
    {(yyval.pAst) = newExpr((yyvsp[(1) - (3)].pAst), '+', (yyvsp[(3) - (3)].pAst));}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 148 "lrparser.y"
    {(yyval.pAst) = newExpr((yyvsp[(1) - (3)].pAst), '-', (yyvsp[(3) - (3)].pAst));}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 151 "lrparser.y"
    {(yyval.pAst) = (yyvsp[(1) - (1)].pAst);}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 152 "lrparser.y"
    {(yyval.pAst) = newExpr((yyvsp[(1) - (3)].pAst), '*', (yyvsp[(3) - (3)].pAst));}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 153 "lrparser.y"
    {(yyval.pAst) = newExpr((yyvsp[(1) - (3)].pAst), '/', (yyvsp[(3) - (3)].pAst));}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 154 "lrparser.y"
    {(yyval.pAst) = newExpr((yyvsp[(1) - (3)].pAst), '%', (yyvsp[(3) - (3)].pAst));}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 155 "lrparser.y"
    {(yyval.pAst) = newExpr((yyvsp[(2) - (2)].pAst), '-', NULL);}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 158 "lrparser.y"
    {(yyval.pAst) = primary_expr(newID((yyvsp[(1) - (4)].sValue)), (yyvsp[(3) - (4)].pAst));}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 159 "lrparser.y"
    {(yyval.pAst) = primary_expr(newID((yyvsp[(1) - (3)].sValue)), NULL);}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 160 "lrparser.y"
    {(yyval.pAst) = primary_expr(NULL, (yyvsp[(2) - (3)].pAst));}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 161 "lrparser.y"
    {(yyval.pAst) = newID((yyvsp[(1) - (1)].sValue));}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 162 "lrparser.y"
    {(yyval.pAst) = (yyvsp[(1) - (1)].pAst);}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 163 "lrparser.y"
    {(yyval.pAst) = primary_expr(newID((yyvsp[(1) - (4)].sValue)), (yyvsp[(3) - (4)].pAst));}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 166 "lrparser.y"
    {(yyval.pAst) = expr_list(NULL, (yyvsp[(1) - (1)].pAst));}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 167 "lrparser.y"
    {(yyval.pAst) = expr_list((yyvsp[(1) - (3)].pAst), (yyvsp[(3) - (3)].pAst));}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 170 "lrparser.y"
    {(yyval.pAst) = id_list(NULL, newID((yyvsp[(1) - (1)].sValue)));}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 171 "lrparser.y"
    {(yyval.pAst) = id_list((yyvsp[(1) - (3)].pAst), newID((yyvsp[(3) - (3)].sValue)));}
    break;


/* Line 1792 of yacc.c  */
#line 1949 "lrparser.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 174 "lrparser.y"


void yyerror(char const *s){
	fprintf (stderr, "%s/n", s);
} 
