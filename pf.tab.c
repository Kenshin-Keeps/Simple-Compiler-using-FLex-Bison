
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
#line 1 "pf.y"

	// Adding all the header files and function definations
	
	#include<stdio.h>
	#include<stdlib.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>
	int yylex(void);
	void yyerror(char *s);
	FILE *yyin;
	
	int no_var = 0;		// This variable will keep track of the total variables used.
	
	// Defining a structure to handle the properties of variables.
	
	struct variable_structure{
		char var_name[20];
		int var_type;
		int ival;
		float fval;
		char *cval;
	}variable[100];
	
	// Function for searching if the present variable name has already been used.
	
	int search_var(char name[20]){
		int i;
		for(i=0; i<no_var; i++){
			if(!strcmp(variable[i].var_name, name)){
				return 1;
			}
		}
		return 0;
	}
	
	// Setting the type of a variable (in integer value)
	
	void set_var_type(int type){
		int i;
		for(i=0; i<no_var; i++){
			if(variable[i].var_type == -1){
				variable[i].var_type = type;
			}
		}
	}
	
	// Finind the index of any variable
	
	int get_var_index(char name[20]){
		int i;
		for(i=0; i<no_var; i++){
			if(!strcmp(variable[i].var_name, name)){
				return i;
			}
		}
		return -1;
	}
	


/* Line 189 of yacc.c  */
#line 135 "pf.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     MAIN = 258,
     INT = 259,
     CHAR = 260,
     FLOAT = 261,
     POWER = 262,
     FACTO = 263,
     PRIME = 264,
     READ = 265,
     PRINT = 266,
     IF = 267,
     ELIF = 268,
     ELSE = 269,
     SWITCH = 270,
     CASE = 271,
     DEFAULT = 272,
     FROM = 273,
     TO = 274,
     INC = 275,
     DEC = 276,
     MAX = 277,
     MIN = 278,
     ID = 279,
     NUM = 280,
     PLUS = 281,
     MINUS = 282,
     MUL = 283,
     DIV = 284,
     EQUAL = 285,
     NOTEQUAL = 286,
     GT = 287,
     GOE = 288,
     LT = 289,
     LOE = 290
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 62 "pf.y"

	float val;
	char* stringValue;



/* Line 214 of yacc.c  */
#line 213 "pf.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 225 "pf.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   147

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNRULES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      38,    40,     2,     2,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    41,
       2,    42,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     8,    11,    14,    17,    20,    22,    25,
      28,    31,    34,    37,    40,    43,    44,    52,    58,    64,
      72,    80,    86,    92,   100,   103,   110,   111,   116,   126,
     136,   146,   155,   156,   161,   162,   166,   170,   174,   178,
     182,   186,   190,   192,   194,   196,   200,   202,   207,   209,
     213,   217,   219,   223,   227,   229,   233,   235
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,     3,    36,    45,    37,    -1,    62,    45,
      -1,    65,    45,    -1,    58,    45,    -1,    57,    45,    -1,
      53,    -1,    51,    45,    -1,    52,    45,    -1,    46,    45,
      -1,    47,    45,    -1,    48,    45,    -1,    50,    45,    -1,
      49,    45,    -1,    -1,     7,    38,    25,    39,    25,    40,
      41,    -1,     8,    38,    25,    40,    41,    -1,     9,    38,
      25,    40,    41,    -1,    22,    38,    24,    39,    24,    40,
      41,    -1,    23,    38,    24,    39,    24,    40,    41,    -1,
      11,    38,    24,    40,    41,    -1,    10,    38,    24,    40,
      41,    -1,    15,    38,    24,    40,    36,    54,    37,    -1,
      55,    56,    -1,    16,    25,    36,    45,    37,    55,    -1,
      -1,    17,    36,    45,    37,    -1,    18,    24,    19,    25,
      20,    25,    36,    45,    37,    -1,    18,    24,    19,    25,
      21,    25,    36,    45,    37,    -1,    12,    38,    61,    40,
      36,    45,    37,    59,    60,    -1,    13,    38,    61,    40,
      36,    45,    37,    59,    -1,    -1,    14,    36,    45,    37,
      -1,    -1,    66,    30,    66,    -1,    66,    31,    66,    -1,
      66,    32,    66,    -1,    66,    33,    66,    -1,    66,    34,
      66,    -1,    66,    35,    66,    -1,    63,    64,    41,    -1,
       4,    -1,     6,    -1,     5,    -1,    64,    39,    24,    -1,
      24,    -1,    24,    42,    66,    41,    -1,    67,    -1,    67,
      26,    68,    -1,    67,    27,    68,    -1,    68,    -1,    68,
      28,    69,    -1,    68,    29,    69,    -1,    69,    -1,    38,
      67,    40,    -1,    24,    -1,    25,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    82,    82,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   103,   112,   131,   147,
     179,   211,   227,   235,   239,   242,   245,   247,   250,   262,
     289,   300,   310,   312,   315,   320,   328,   336,   344,   352,
     360,   371,   375,   376,   377,   379,   391,   407,   431,   433,
     434,   435,   437,   438,   447,   449,   450,   472
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN", "INT", "CHAR", "FLOAT", "POWER",
  "FACTO", "PRIME", "READ", "PRINT", "IF", "ELIF", "ELSE", "SWITCH",
  "CASE", "DEFAULT", "FROM", "TO", "INC", "DEC", "MAX", "MIN", "ID", "NUM",
  "PLUS", "MINUS", "MUL", "DIV", "EQUAL", "NOTEQUAL", "GT", "GOE", "LT",
  "LOE", "'{'", "'}'", "'('", "','", "')'", "';'", "'='", "$accept",
  "program", "code", "power_code", "factorial_code", "prime_code",
  "max_code", "min_code", "print_code", "read_code", "switch_code",
  "case_code", "casenum_code", "default_code", "for_code", "condition",
  "else_if", "elsee", "bool_expression", "declaration", "TYPE", "ID1",
  "assignment", "expression", "e", "f", "t", 0
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
     285,   286,   287,   288,   289,   290,   123,   125,    40,    44,
      41,    59,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    55,    56,    57,    57,
      58,    59,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    62,    63,    63,    63,    64,    64,    65,    66,    67,
      67,    67,    68,    68,    68,    69,    69,    69
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     2,     2,     2,     1,     2,     2,
       2,     2,     2,     2,     2,     0,     7,     5,     5,     7,
       7,     5,     5,     7,     2,     6,     0,     4,     9,     9,
       9,     8,     0,     4,     0,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     3,     1,     4,     1,     3,
       3,     1,     3,     3,     1,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    15,     1,    42,    44,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    15,    15,    15,    15,    15,    15,     7,    15,    15,
      15,     0,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,    10,    11,    12,    14,    13,
       8,     9,     6,     5,     3,    46,     0,     4,     0,     0,
       0,     0,     0,    56,    57,     0,     0,     0,    48,    51,
      54,     0,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
      45,     0,    17,    18,    22,    21,    55,    15,    35,    36,
      37,    38,    39,    40,    49,    50,    52,    53,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    32,     0,    23,     0,    24,    15,    15,
      19,    20,     0,    34,    15,    15,     0,     0,     0,     0,
      30,     0,     0,    28,    29,     0,    15,    26,    27,     0,
       0,    25,    15,    33,     0,    32,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   126,   127,   137,    28,    29,   143,   150,    66,    30,
      31,    56,    32,    67,    68,    69,    70
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -73
static const yytype_int8 yypact[] =
{
      26,   -25,    48,     9,   -73,   -73,   -73,   -73,    20,    23,
      24,    25,    27,    28,    29,    31,    30,    32,    22,    34,
       9,     9,     9,     9,     9,     9,     9,   -73,     9,     9,
       9,    45,     9,    47,    49,    50,    52,    53,    -2,    54,
      60,    56,    57,    -2,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -11,   -73,    43,    33,
      44,    46,    51,   -73,   -73,    -2,    55,    10,     8,    18,
     -73,    58,    63,    61,    62,    42,    65,   -73,    67,    64,
      66,    68,    69,    -1,    70,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    72,    17,    73,    75,   -73,
     -73,    71,   -73,   -73,   -73,   -73,   -73,     9,   -73,   -73,
     -73,   -73,   -73,   -73,    18,    18,   -73,   -73,    74,    77,
      78,    76,    80,    81,    59,    79,    84,    95,    87,    90,
      86,    88,   -73,   100,    92,   -73,    94,   -73,     9,     9,
     -73,   -73,    93,   101,     9,     9,    96,    97,    -2,    99,
     -73,   102,   103,   -73,   -73,    98,     9,    74,   -73,   105,
     106,   -73,     9,   -73,   107,   100,   -73
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -73,   -73,   -20,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -72,   -73,   -73,   -73,   -71,   -73,   -55,   -73,
     -73,   -73,   -73,   -36,    82,   -35,   -34
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      45,    46,    47,    48,    49,    50,    51,    75,    52,    53,
      54,     3,    57,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    63,    64,    14,    91,    92,    15,    76,     1,
      77,    16,    17,    18,    91,    92,    65,   119,   120,   106,
      85,    86,    87,    88,    89,    90,    93,    94,     4,   108,
     109,   110,   111,   112,   113,    40,   114,   115,    33,   116,
     117,    34,    35,    36,    43,    37,    38,    39,    41,    55,
      42,    44,    58,    79,    59,    60,    61,    62,    71,    72,
      73,    74,    78,    99,    80,   161,    81,   124,    96,   100,
     125,    82,   101,   155,   166,    84,   133,   121,    95,   122,
      97,    98,   128,   129,   134,   102,   107,   103,   118,   104,
     105,   123,   136,   142,     0,   149,   130,     0,   146,   147,
     131,   135,   132,   138,   151,   152,   139,   140,   144,   141,
     145,   148,     0,   153,   154,   156,   160,     0,   159,   157,
     158,   162,   164,   163,   165,     0,     0,    83
};

static const yytype_int16 yycheck[] =
{
      20,    21,    22,    23,    24,    25,    26,    43,    28,    29,
      30,    36,    32,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    24,    25,    15,    26,    27,    18,    39,     3,
      41,    22,    23,    24,    26,    27,    38,    20,    21,    40,
      30,    31,    32,    33,    34,    35,    28,    29,     0,    85,
      86,    87,    88,    89,    90,    24,    91,    92,    38,    93,
      94,    38,    38,    38,    42,    38,    38,    38,    38,    24,
      38,    37,    25,    40,    25,    25,    24,    24,    24,    19,
      24,    24,    39,    41,    40,   157,    40,   107,    25,    24,
      16,    40,    25,   148,   165,    40,    37,    24,    40,    24,
      39,    39,    25,    25,    25,    41,    36,    41,    36,    41,
      41,    40,    17,    13,    -1,    14,    40,    -1,   138,   139,
      40,    37,    41,    36,   144,   145,    36,    41,    36,    41,
      36,    38,    -1,    37,    37,    36,   156,    -1,    40,    37,
      37,    36,   162,    37,    37,    -1,    -1,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    44,    36,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    15,    18,    22,    23,    24,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    57,    58,
      62,    63,    65,    38,    38,    38,    38,    38,    38,    38,
      24,    38,    38,    42,    37,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    24,    64,    45,    25,    25,
      25,    24,    24,    24,    25,    38,    61,    66,    67,    68,
      69,    24,    19,    24,    24,    66,    39,    41,    39,    40,
      40,    40,    40,    67,    40,    30,    31,    32,    33,    34,
      35,    26,    27,    28,    29,    40,    25,    39,    39,    41,
      24,    25,    41,    41,    41,    41,    40,    36,    66,    66,
      66,    66,    66,    66,    68,    68,    69,    69,    36,    20,
      21,    24,    24,    40,    45,    16,    54,    55,    25,    25,
      40,    40,    41,    37,    25,    37,    17,    56,    36,    36,
      41,    41,    13,    59,    36,    36,    45,    45,    38,    14,
      60,    45,    45,    37,    37,    61,    36,    37,    37,    40,
      45,    55,    36,    37,    45,    37,    59
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
#line 82 "pf.y"
    {printf("\nValid code\n");
							printf("\nNo of variables--> %d", no_var);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 103 "pf.y"
    {		
	int i;
	i = pow((yyvsp[(3) - (7)].val), (yyvsp[(5) - (7)].val));
	printf("\nPower function value--> %d ", i);
;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 112 "pf.y"
    {
	int j = (yyvsp[(3) - (5)].val);
	int i, result;
	result = 1;
	if(j==0){
		printf("\nFactorial of %d is %d", j, result);
	}
	else{
		for(i = 1; i <= j; i++){
			result = result*i;
		}
		printf("\nFactorial of %d is %d", j, result);
	}
	
;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 131 "pf.y"
    {
	int n, i, flag = 0;
	n = (yyvsp[(3) - (5)].val);
	for (i = 2; i <= n / 2; ++i) {
		if (n % i == 0) {
			flag = 1;
			break;
		}
	}
    printf("\n%d", flag);

;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 147 "pf.y"
    {
	int i = get_var_index((yyvsp[(3) - (7)].stringValue));
	int j = get_var_index((yyvsp[(5) - (7)].stringValue));
	int k,l;
	if((variable[i].var_type == 1) &&(variable[j].var_type == 1) ){
		k = variable[i].ival;
		l = variable[j].ival;
		if(l>k){
			printf("\nMax value is--> %d", l);
		}
		else{
			printf("\nMax value is--> %d", k);
		}
	}
	else if((variable[i].var_type == 2) &&(variable[j].var_type == 2) ){
		k = variable[i].fval;
		l = variable[j].fval;
		if(l>k){
			printf("\nMax value is--> %f", l);
		}
		else{
			printf("\nMax value is--> %f", k);
		}
	}
	else{
		printf("\nNot integer or float variable");
	}
;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 179 "pf.y"
    {
	int i = get_var_index((yyvsp[(3) - (7)].stringValue));
	int j = get_var_index((yyvsp[(5) - (7)].stringValue));
	int k,l;
	if((variable[i].var_type == 1) &&(variable[j].var_type == 1) ){
		k = variable[i].ival;
		l = variable[j].ival;
		if(l<k){
			printf("\nMin value is--> %d", l);
		}
		else{
			printf("\nMin value is--> %d", k);
		}
	}
	else if((variable[i].var_type == 2) &&(variable[j].var_type == 2) ){
		k = variable[i].fval;
		l = variable[j].fval;
		if(l<k){
			printf("\nMin value is--> %f", l);
		}
		else{
			printf("\nMin value is--> %f", k);
		}
	}
	else{
		printf("\nNot integer or float variable");
	}
;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 211 "pf.y"
    {
	int i = get_var_index((yyvsp[(3) - (5)].stringValue));
	if(variable[i].var_type == 1){
		printf("\nVariable name--> %s, Value--> %d", variable[i].var_name, variable[i].ival);
	}
	else if(variable[i].var_type == 2){
		printf("\nVariable name--> %s, Value--> %f", variable[i].var_name, variable[i].fval);
	}
	else{
		printf("\nVariable name--> %s, Value--> %c", variable[i].var_name, variable[i].cval);
	}
;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 227 "pf.y"
    {
	int i = get_var_index((yyvsp[(3) - (5)].stringValue));
	printf("\nRead command found for variabale--> %s, but no further implementaion\n",variable[i].var_name);
;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 235 "pf.y"
    {
	printf("\nSwitch-case structure detected.");
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 242 "pf.y"
    {
	printf("\nCase no--> %d", (yyvsp[(2) - (6)].val));
;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 250 "pf.y"
    {
	printf("\nFor loop detected");
	int ii = get_var_index((yyvsp[(2) - (9)].stringValue));
	int i = variable[ii].ival;
	int j = (yyvsp[(4) - (9)].val);
	int inc = (yyvsp[(6) - (9)].val);
	int k;
	for(k=i; k<j; k=k+inc){
		printf("\nFrom-To Loop running-->");
	}
		
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 262 "pf.y"
    {
	printf("\nFor loop detected");
	int ii = get_var_index((yyvsp[(2) - (9)].stringValue));
	int i = variable[ii].ival;
	int j = (yyvsp[(4) - (9)].val);
	int dec = (yyvsp[(6) - (9)].val);
	int k;
	for(k=i; k<j; k=k-dec){
		printf("\nFrom-To Loop running-->");
	}
;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 289 "pf.y"
    {
	printf("\nIF condition detected");
	int i = (yyvsp[(3) - (9)].val);
	if(i==1){
		printf("\nIF condition is true");
	}
	else{
		printf("\nIF condition false");
	}
;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 300 "pf.y"
    {
	printf("\nELIF condition detected");
	int i = (yyvsp[(3) - (8)].val);
	if(i==1){
		printf("\nELIF condition true");
	}
	else{
		printf("\nELIF condition false");
	}
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 312 "pf.y"
    {
	printf("\nELSE condition is detected");
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 320 "pf.y"
    {
	if((yyvsp[(1) - (3)].val)==(yyvsp[(3) - (3)].val)){
		(yyval.val) = 1;
	}
	else{
		(yyval.val) = 0;
	}
;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 328 "pf.y"
    {
	if((yyvsp[(1) - (3)].val)!=(yyvsp[(3) - (3)].val)){
		(yyval.val) = 1;
	}
	else{
		(yyval.val) = 0;
	}
;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 336 "pf.y"
    {
	if((yyvsp[(1) - (3)].val)>(yyvsp[(3) - (3)].val)){
		(yyval.val) = 1;
	}
	else{
		(yyval.val) = 0;
	}
;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 344 "pf.y"
    {
	if((yyvsp[(1) - (3)].val)>=(yyvsp[(3) - (3)].val)){
		(yyval.val) = 1;
	}
	else{
		(yyval.val) = 0;
	}
;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 352 "pf.y"
    {
	if((yyvsp[(1) - (3)].val)<(yyvsp[(3) - (3)].val)){
		(yyval.val) = 1;
	}
	else{
		(yyval.val) = 0;
	}
;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 360 "pf.y"
    {
	if((yyvsp[(1) - (3)].val)<=(yyvsp[(3) - (3)].val)){
		(yyval.val) = 1;
	}
	else{
		(yyval.val) = 0;
	}
;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 371 "pf.y"
    {
	set_var_type((yyvsp[(1) - (3)].val));
;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 375 "pf.y"
    {(yyval.val) = 1; printf("\nVariable type--> Integer");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 376 "pf.y"
    {(yyval.val) = 2; printf("\nVariable type--> Float");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 377 "pf.y"
    {(yyval.val) = 0; printf("\nVariable type--> Character");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 379 "pf.y"
    {
	if(search_var((yyvsp[(3) - (3)].stringValue))==0){
		printf("\nValid declaration");
		strcpy(variable[no_var].var_name, (yyvsp[(3) - (3)].stringValue));
		printf("\nVariable name--> %s", (yyvsp[(3) - (3)].stringValue));
		variable[no_var].var_type =  -1;
		no_var = no_var + 1;
	}
	else{
		printf("\nVariable is already used");
	}
;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 391 "pf.y"
    {
	if(search_var((yyvsp[(1) - (1)].stringValue))==0){
		printf("\nValid declaration");
		strcpy(variable[no_var].var_name, (yyvsp[(1) - (1)].stringValue));
		printf("\nVariable name--> %s", (yyvsp[(1) - (1)].stringValue));
		variable[no_var].var_type =  -1;
		no_var = no_var + 1;
	}
	else{
		printf("\nVariable is already used");
	}
	strcpy((yyval.stringValue), (yyvsp[(1) - (1)].stringValue));
;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 407 "pf.y"
    {
	(yyval.val) = (yyvsp[(3) - (4)].val);
	if(search_var((yyvsp[(1) - (4)].stringValue))==1){
		int i = get_var_index((yyvsp[(1) - (4)].stringValue));
		if(variable[i].var_type==0){
			//variable[i].cval = (char)$3;
			variable[i].cval = (char*)&(yyvsp[(3) - (4)].val);
			printf("\nVariable value--> %s", variable[i].cval);
		}
		else if(variable[i].var_type==1){
			variable[i].ival = (yyvsp[(3) - (4)].val);
			printf("\nVariable value--> %d", variable[i].ival);
		}
		else if(variable[i].var_type==2){
			variable[i].fval = (float)(yyvsp[(3) - (4)].val);
			printf("\nVariable value--> %f", variable[i].fval);
		}
	}
	else{
		printf("\nVariable is not declared\n");
	}
;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 431 "pf.y"
    {(yyval.val) = (yyvsp[(1) - (1)].val);;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 433 "pf.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) + (yyvsp[(3) - (3)].val); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 434 "pf.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) - (yyvsp[(3) - (3)].val);;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 435 "pf.y"
    {(yyval.val) = (yyvsp[(1) - (1)].val);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 437 "pf.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) * (yyvsp[(3) - (3)].val);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 439 "pf.y"
    {if((yyvsp[(3) - (3)].val) != 0)
	{
		(yyval.val) = (yyvsp[(1) - (3)].val) / (yyvsp[(3) - (3)].val);
	}
	else{
		printf("\nMathematically invalid expression");
	}
;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 447 "pf.y"
    {(yyval.val) = (yyvsp[(1) - (1)].val);;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 449 "pf.y"
    {(yyval.val) = (yyvsp[(2) - (3)].val);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 450 "pf.y"
    {
	int id_index = get_var_index((yyvsp[(1) - (1)].stringValue));
	if(id_index == -1)
	{
		yyerror("VARIABLE DOESN'T EXIST");
	}
	else
	{
		/*if(variable[id_index].var_type == 0)
		{
			$$ = variable[id_index].cval;
		}*/
		if(variable[id_index].var_type == 1)
		{
			(yyval.val) = variable[id_index].ival;
		}
		else if(variable[id_index].var_type == 2)
		{
			(yyval.val) = variable[id_index].fval;
		}
	}
;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 472 "pf.y"
    {(yyval.val) = (yyvsp[(1) - (1)].val);;}
    break;



/* Line 1455 of yacc.c  */
#line 2066 "pf.tab.c"
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
#line 475 "pf.y"


void yyerror(char *s)
{
	fprintf(stderr, "\n%s", s);
}

int main(){
	yyin = fopen("test.txt", "r");
	//yyout = freopen("testout.txt", "w", stdout);
	yyparse();
	return 0;
}
