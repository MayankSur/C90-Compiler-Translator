/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "src/maths_parser.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "maths_parser.tab.hpp".  */
#ifndef YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/maths_parser.y" /* yacc.c:355  */

  #include "ast.hpp"

  #include <cassert>
  extern const Ast_Node *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);


#line 111 "src/maths_parser.tab.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_INT = 258,
    T_VOID = 259,
    T_RETURN = 260,
    I_INT = 261,
    I_FLOAT = 262,
    I_CHAR = 263,
    T_IF = 264,
    T_ELSE = 265,
    T_WHILE = 266,
    T_FOR = 267,
    T_REM = 268,
    T_DO = 269,
    T_TIMES = 270,
    T_DIVIDE = 271,
    T_PLUS = 272,
    T_MINUS = 273,
    T_EXPONENT = 274,
    T_EQUAL = 275,
    T_LEXCLAIM = 276,
    T_LBRACKET = 277,
    T_RBRACKET = 278,
    T_LCBRACKET = 279,
    T_RCBRACKET = 280,
    T_LSBRACKET = 281,
    T_RSBRACKET = 282,
    T_LOG = 283,
    T_EXP = 284,
    T_SQRT = 285,
    T_LSHIFT = 286,
    T_RSHIFT = 287,
    T_XOR = 288,
    T_NUMBER = 289,
    T_VARIABLE = 290,
    T_COMM = 291,
    T_SEMI_COLON = 292,
    T_COLON = 293,
    T_GO_TO = 294,
    T_CONTINUE = 295,
    T_LE = 296,
    T_GE = 297,
    T_EQ = 298,
    T_NEQ = 299,
    T_LT = 300,
    T_GT = 301,
    T_BREAK = 302,
    T_LAND = 303,
    T_LOR = 304,
    T_AND = 305,
    T_OR = 306,
    T_NOT = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "src/maths_parser.y" /* yacc.c:355  */

  const Ast_Node *node;
  const Expression *expr;
  double Float;
  int number;
  std::string *string;

#line 184 "src/maths_parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 201 "src/maths_parser.tab.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   507

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    53,    53,    55,    56,    59,    60,    62,    63,    64,
      65,    66,    67,    68,    69,    71,    72,    73,    75,    76,
      79,    81,    82,    83,    84,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   106,   107,
     108,   111,   116,   117,   118,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   135,   136,
     137,   138,   139,   141,   143,   145,   148,   149,   150,   151,
     153,   154,   155,   158,   159,   160,   163,   163,   164,   165,
     166,   168,   168,   169,   170,   171,   173,   174,   175,   179,
     180,   181,   182,   183,   185,   185,   186,   187,   189,   190,
     192,   193,   195,   196,   199,   200,   202,   203,   207,   208,
     209,   210
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_INT", "T_VOID", "T_RETURN", "I_INT",
  "I_FLOAT", "I_CHAR", "T_IF", "T_ELSE", "T_WHILE", "T_FOR", "T_REM",
  "T_DO", "T_TIMES", "T_DIVIDE", "T_PLUS", "T_MINUS", "T_EXPONENT",
  "T_EQUAL", "T_LEXCLAIM", "T_LBRACKET", "T_RBRACKET", "T_LCBRACKET",
  "T_RCBRACKET", "T_LSBRACKET", "T_RSBRACKET", "T_LOG", "T_EXP", "T_SQRT",
  "T_LSHIFT", "T_RSHIFT", "T_XOR", "T_NUMBER", "T_VARIABLE", "T_COMM",
  "T_SEMI_COLON", "T_COLON", "T_GO_TO", "T_CONTINUE", "T_LE", "T_GE",
  "T_EQ", "T_NEQ", "T_LT", "T_GT", "T_BREAK", "T_LAND", "T_LOR", "T_AND",
  "T_OR", "T_NOT", "$accept", "ROOT", "PROGRAM_LIST", "PROGRAM",
  "FUNCTION_DECLARATION", "PARAMETER_LIST", "PARAMETER", "SCOPE",
  "STATEMENT_LIST", "STATEMENT", "VARIABLE_DECLARATION_FUNCTION",
  "ARRAY_DECLARATION", "VARIABLE_DECLARATION", "ASSIGNMENT_STATEMENT",
  "IF_CONDITION_STATEMENT", "IF_ELSE_CONDITION_STATEMENT",
  "WHILE_CONDITION_STATEMENT", "FOR_STATEMENT", "DO_WHILE_STATEMENT",
  "RETURN_STATEMENT", "RETURN_LIST", "RETURN_VALUE", "EXPR", "EXPR3",
  "EXPR4", "EXPR5", "EXPR6", "EXPR7", "EXPR8", "EXPR9", "EXPR10", "EXPR11",
  "EXPR12", "EXPR13", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

#define YYPACT_NINF -166

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-166)))

#define YYTABLE_NINF -95

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      62,   -30,   -19,    35,  -166,    62,  -166,  -166,     9,     8,
    -166,  -166,   269,     5,  -166,    46,  -166,  -166,   448,   292,
    -166,   448,    10,    63,    27,    72,    71,    67,     6,    56,
      20,    48,    69,  -166,    86,   -20,   123,   114,  -166,   -18,
     131,    63,   136,    63,  -166,   448,   448,   448,  -166,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,  -166,   314,  -166,   137,    84,   353,
    -166,   139,  -166,    27,    27,    27,    72,    72,    71,    71,
      67,    67,    67,    67,     6,     6,    56,    20,    48,    69,
    -166,   125,   174,   146,   151,   152,   153,   159,   160,  -166,
      57,   165,  -166,  -166,   161,  -166,   372,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,   460,  -166,  -166,   162,
     460,    17,   166,  -166,   115,  -166,   292,   292,   199,   460,
     168,   169,   190,   193,   194,    22,    40,   201,  -166,  -166,
    -166,   411,  -166,   196,  -166,   200,   228,   218,   149,   174,
     174,   174,   204,   206,   195,   202,   212,  -166,  -166,   228,
     228,   228,  -166,   228,  -166,   228,   209,  -166,  -166,  -166,
    -166,  -166,   211,  -166,   217,  -166,  -166,  -166,   421,   224,
     221,   269,   240,  -166,  -166,  -166,  -166,  -166,   176,  -166,
    -166,   460,   242,   460,   219,   232,  -166,   234,   230,   460,
     233,    -3,   292,  -166,   251,  -166,  -166,   111,   239,   241,
     243,   244,  -166,   460,   460,   252,   253,  -166,  -166
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      42,     0,     0,     0,     2,     4,     5,     6,     0,     0,
       1,     3,    94,    94,    43,    94,   111,   110,    76,    94,
     109,    76,     0,    75,    80,    85,    88,    93,    97,    99,
     101,   103,   105,   107,     0,     0,     0,    17,    19,     0,
       0,    73,     0,    74,    44,    81,    81,    81,    84,    94,
      94,    94,    94,    94,    94,    94,    94,     0,     0,     0,
       0,     0,     0,     0,    18,    38,     7,     0,    94,    38,
       8,     0,   108,    79,    78,    77,    82,    83,    86,    87,
      89,    90,    91,    92,    95,    96,    98,   100,   102,   104,
     106,     0,    76,     0,     0,     0,     0,     0,     0,    11,
       0,     0,    36,    35,     0,    20,    24,    30,    27,    31,
      26,    28,    29,    32,    33,    25,    38,    16,    12,     0,
      38,    39,   109,    65,    69,    72,    94,    94,    38,    38,
       0,     0,     0,     0,     0,     0,     0,    76,    37,    34,
       9,    22,    23,     0,    10,     0,    76,     0,    94,    76,
      76,    76,     0,     0,     0,     0,     0,    48,    50,    76,
      76,    76,    47,    76,    49,    76,   109,    46,    21,    13,
      14,    40,     0,    71,     0,    68,    66,    67,    38,     0,
      39,    94,     0,    55,    53,    54,    51,    52,    94,    41,
      70,    38,    59,    38,     0,     0,    57,     0,     0,    38,
       0,    45,    94,    56,    58,    61,    62,     0,     0,     0,
       0,     0,    64,    38,    38,     0,     0,    60,    63
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,   260,  -166,  -166,   -13,  -166,   -66,  -105,  -165,
     138,  -166,  -166,    78,  -166,  -166,  -166,  -166,  -166,  -166,
     -57,  -166,   -12,    30,    38,    73,    93,    87,   100,   222,
     223,   227,   231,   226
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    36,    37,   104,   105,   106,
     107,   108,     7,   109,   110,   111,   112,   113,   114,   115,
     123,   124,    38,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   142,    40,   119,    65,     8,    69,    42,    34,    16,
      17,    16,    17,   192,    97,    98,     9,    66,   -76,    70,
     -76,   -76,   -81,   -81,   156,    19,    18,    19,    35,    12,
      15,    13,   207,    48,   205,    10,   168,   146,    20,   162,
      20,   -76,   163,   147,    49,    50,    14,    44,    41,    34,
     143,    43,    16,    17,   145,   117,    59,    21,   164,   -76,
     165,   -76,   -76,   -81,   -81,     1,     2,    18,    19,    39,
     132,    61,   133,   134,   135,   136,    45,   137,    46,    47,
     125,    20,   -76,    73,    74,    75,   198,    34,   200,    60,
      16,    17,   175,   176,   177,   138,    62,   -76,    21,   -76,
     -76,   -81,   -81,    51,    52,    18,    19,   -15,   215,   216,
      57,    58,    53,    54,   152,   153,    55,    56,    63,    20,
     -76,    64,    76,    77,   132,   167,   133,   134,   135,   136,
     149,   137,   150,   151,   171,   174,    21,   125,   125,   125,
      80,    81,    82,    83,    78,    79,    67,   183,   184,   185,
      68,   186,    34,   187,    71,    16,    17,    84,    85,    72,
     121,   116,   -76,   120,   -76,   -76,   -81,   -81,   126,   194,
      18,    19,   173,   127,   128,   197,   130,   129,   131,    34,
      16,    17,    16,    17,    20,   -76,   140,   144,   148,   -76,
     209,   -76,   -76,   -81,   -81,    18,    19,    18,    19,   196,
     139,    21,   154,   157,   158,   -94,   -94,    16,    17,   122,
     159,    20,   -76,   160,   161,   -94,   -94,   -94,   -94,   -94,
     -94,   169,    18,    19,   172,   170,    21,   178,    21,   179,
     180,   188,   -94,   -94,    16,    17,   166,   182,   189,   181,
     190,   146,   -94,   -94,   -94,   -94,   -94,   -94,   193,    18,
      19,   195,   199,    21,   202,   204,   201,   203,   206,   -94,
     -94,   210,   211,    20,   212,    11,   155,   213,   214,   -94,
     -94,   -94,   -94,   -94,   -94,    16,    17,   217,   218,   208,
      21,    86,   -76,    87,   -76,   -76,   -81,   -81,    88,    90,
      18,    19,     0,    89,     0,     0,     0,     0,    16,    17,
       0,     0,     0,     0,    20,   -76,   -76,   -76,   -76,   -81,
     -81,     0,     0,    18,    19,   -76,     0,    91,     0,    92,
       0,    21,     0,    93,     0,    94,    95,    20,    96,     0,
       0,    97,    98,     0,     0,     0,     0,     0,     0,    99,
       0,     0,     0,     0,    21,     0,     0,     0,     0,   100,
       0,     0,     0,   101,   102,     0,    91,     0,    92,     0,
       0,   103,    93,     0,    94,    95,     0,    96,     0,     0,
      97,    98,     0,     0,     0,    91,     0,    92,   118,     0,
       0,    93,     0,    94,    95,     0,    96,     0,   100,    97,
      98,     0,   101,   102,     0,     0,     0,     0,     0,     0,
     103,     0,     0,     0,     0,     0,     0,   100,     0,   141,
       0,   101,   102,     0,    91,     0,    92,     0,     0,   103,
      93,     0,    94,    95,    91,    96,    92,     0,    97,    98,
      93,     0,    94,    95,     0,    96,     0,     0,    97,    98,
       0,     0,     0,     0,     0,   191,   100,     0,   -38,     0,
     101,   102,     0,     0,    16,    17,   100,     0,   103,     0,
     101,   102,     0,    91,     0,    92,     0,     0,   103,    93,
      19,    94,    95,     0,    96,     0,     0,    97,    98,   -94,
     -94,     0,     0,    20,     0,     0,     0,     0,     0,   -94,
     -94,   -94,   -94,   -94,   -94,   100,     0,     0,     0,   101,
     102,     0,     0,     0,     0,     0,     0,   103
};

static const yytype_int16 yycheck[] =
{
      12,   106,    15,    69,    24,    35,    24,    19,     3,     6,
       7,     6,     7,   178,    17,    18,    35,    37,    13,    37,
      15,    16,    17,    18,   129,    22,    21,    22,    23,    20,
      22,    22,    35,     6,   199,     0,   141,    20,    35,    17,
      35,    36,    20,    26,    17,    18,    37,    37,    18,     3,
     116,    21,     6,     7,   120,    68,    50,    52,    18,    13,
      20,    15,    16,    17,    18,     3,     4,    21,    22,    23,
      13,    51,    15,    16,    17,    18,    13,    20,    15,    16,
      92,    35,    36,    45,    46,    47,   191,     3,   193,    33,
       6,     7,   149,   150,   151,    38,    48,    13,    52,    15,
      16,    17,    18,    31,    32,    21,    22,    23,   213,   214,
      43,    44,    41,    42,   126,   127,    45,    46,    49,    35,
      36,    35,    49,    50,    13,   137,    15,    16,    17,    18,
      15,    20,    17,    18,   146,   148,    52,   149,   150,   151,
      53,    54,    55,    56,    51,    52,    23,   159,   160,   161,
      36,   163,     3,   165,    23,     6,     7,    57,    58,    23,
      35,    24,    13,    24,    15,    16,    17,    18,    22,   181,
      21,    22,    23,    22,    22,   188,    17,    24,    18,     3,
       6,     7,     6,     7,    35,    36,    25,    25,    22,    13,
     202,    15,    16,    17,    18,    21,    22,    21,    22,    23,
      35,    52,     3,    35,    35,    31,    32,     6,     7,    35,
      20,    35,    36,    20,    20,    41,    42,    43,    44,    45,
      46,    25,    21,    22,     6,    25,    52,    23,    52,    23,
      35,    22,    31,    32,     6,     7,    35,    25,    27,    37,
      23,    20,    41,    42,    43,    44,    45,    46,    24,    21,
      22,    11,    10,    52,    22,    25,    37,    23,    25,    31,
      32,    10,    23,    35,    23,     5,   128,    24,    24,    41,
      42,    43,    44,    45,    46,     6,     7,    25,    25,   201,
      52,    59,    13,    60,    15,    16,    17,    18,    61,    63,
      21,    22,    -1,    62,    -1,    -1,    -1,    -1,     6,     7,
      -1,    -1,    -1,    -1,    35,    13,    37,    15,    16,    17,
      18,    -1,    -1,    21,    22,    23,    -1,     3,    -1,     5,
      -1,    52,    -1,     9,    -1,    11,    12,    35,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    39,    40,    -1,     3,    -1,     5,    -1,
      -1,    47,     9,    -1,    11,    12,    -1,    14,    -1,    -1,
      17,    18,    -1,    -1,    -1,     3,    -1,     5,    25,    -1,
      -1,     9,    -1,    11,    12,    -1,    14,    -1,    35,    17,
      18,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,
      -1,    39,    40,    -1,     3,    -1,     5,    -1,    -1,    47,
       9,    -1,    11,    12,     3,    14,     5,    -1,    17,    18,
       9,    -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    24,    35,    -1,    37,    -1,
      39,    40,    -1,    -1,     6,     7,    35,    -1,    47,    -1,
      39,    40,    -1,     3,    -1,     5,    -1,    -1,    47,     9,
      22,    11,    12,    -1,    14,    -1,    -1,    17,    18,    31,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    41,
      42,    43,    44,    45,    46,    35,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    54,    55,    56,    57,    65,    35,    35,
       0,    55,    20,    22,    37,    22,     6,     7,    21,    22,
      35,    52,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,     3,    23,    58,    59,    75,    23,
      58,    76,    75,    76,    37,    13,    15,    16,     6,    17,
      18,    31,    32,    41,    42,    45,    46,    43,    44,    50,
      33,    51,    48,    49,    35,    24,    37,    23,    36,    24,
      37,    23,    23,    77,    77,    77,    78,    78,    79,    79,
      80,    80,    80,    80,    81,    81,    82,    83,    84,    85,
      86,     3,     5,     9,    11,    12,    14,    17,    18,    25,
      35,    39,    40,    47,    60,    61,    62,    63,    64,    66,
      67,    68,    69,    70,    71,    72,    24,    58,    25,    60,
      24,    35,    35,    73,    74,    75,    22,    22,    22,    24,
      17,    18,    13,    15,    16,    17,    18,    20,    38,    35,
      25,    37,    61,    60,    25,    60,    20,    26,    22,    15,
      17,    18,    75,    75,     3,    63,    61,    35,    35,    20,
      20,    20,    17,    20,    18,    20,    35,    75,    61,    25,
      25,    75,     6,    23,    58,    73,    73,    73,    23,    23,
      35,    37,    25,    75,    75,    75,    75,    75,    22,    27,
      23,    24,    62,    24,    75,    11,    23,    58,    61,    10,
      61,    37,    22,    23,    25,    62,    25,    35,    66,    75,
      10,    23,    23,    24,    24,    61,    61,    25,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    57,    57,    57,
      57,    57,    57,    57,    57,    58,    58,    58,    59,    59,
      60,    61,    61,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      63,    64,    65,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    67,    67,
      68,    68,    69,    70,    71,    72,    73,    73,    73,    73,
      74,    74,    74,    75,    75,    75,    76,    76,    76,    76,
      76,    77,    77,    77,    77,    77,    78,    78,    78,    79,
      79,    79,    79,    79,    80,    80,    80,    80,    81,    81,
      82,    82,    83,    83,    84,    84,    85,    85,    86,    86,
      86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     5,     5,     7,
       7,     6,     6,     8,     8,     0,     3,     1,     2,     1,
       1,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     0,     2,
       4,     5,     0,     3,     5,     0,     3,     3,     3,     3,
       3,     4,     4,     4,     4,     4,     6,     5,     7,     5,
      11,     7,     7,    11,     8,     2,     3,     3,     3,     1,
       4,     3,     1,     2,     2,     1,     0,     3,     3,     3,
       1,     0,     3,     3,     2,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     0,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 53 "src/maths_parser.y" /* yacc.c:1646  */
    { g_root = (yyvsp[0].node); }
#line 1493 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 55 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ProgramList((yyvsp[-1].node),(yyvsp[0].node));}
#line 1499 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 56 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new Program((yyvsp[0].node));}
#line 1505 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 59 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1511 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 60 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1517 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 62 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new FunctionDefinition(*(yyvsp[-4].string),*(yyvsp[-3].string)); }
#line 1523 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 63 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new FunctionDefinition(*(yyvsp[-4].string),*(yyvsp[-3].string)); }
#line 1529 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 64 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = new FunctionDeclaration(*(yyvsp[-6].string),*(yyvsp[-5].string),NULL,(yyvsp[-1].node));}
#line 1535 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 65 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = new FunctionDeclaration(*(yyvsp[-6].string),*(yyvsp[-5].string),NULL,(yyvsp[-1].node));}
#line 1541 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 66 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = new FunctionDeclaration(*(yyvsp[-5].string),*(yyvsp[-4].string),NULL,NULL);}
#line 1547 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 67 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = new FunctionDeclaration(*(yyvsp[-5].string),*(yyvsp[-4].string),NULL,NULL);}
#line 1553 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 68 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = new FunctionDeclaration(*(yyvsp[-7].string),*(yyvsp[-6].string),(yyvsp[-4].node),(yyvsp[-1].node));}
#line 1559 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 69 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = new FunctionDeclaration(*(yyvsp[-7].string),*(yyvsp[-6].string),(yyvsp[-4].node),(yyvsp[-1].node));}
#line 1565 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 72 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = new ParameterList((yyvsp[-2].node), (yyvsp[0].node));}
#line 1571 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 73 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 1577 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 75 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new VariableDeclaration2(*(yyvsp[-1].string),*(yyvsp[0].string), NULL, true);}
#line 1583 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 76 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = new ParameterDef((yyvsp[0].expr));}
#line 1589 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 79 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1595 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 81 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = new StatementList((yyvsp[-2].node), (yyvsp[0].node));}
#line 1601 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 82 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1607 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 83 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = new StatementList((yyvsp[-1].node), (yyvsp[0].node));}
#line 1613 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 84 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1619 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 88 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1625 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 89 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1631 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 90 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 1637 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 91 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1643 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 92 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1649 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 93 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node)  = (yyvsp[0].node); }
#line 1655 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 94 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node)  = (yyvsp[0].node); }
#line 1661 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 95 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 1667 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 96 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 1673 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 97 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new Jump(*(yyvsp[0].string));}
#line 1679 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 98 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new Break();}
#line 1685 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 99 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new Continue();}
#line 1691 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 100 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new Label(*(yyvsp[-1].string));}
#line 1697 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 107 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new VariableDeclaration2(*(yyvsp[-1].string),*(yyvsp[0].string), NULL, false);}
#line 1703 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 108 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new VariableDeclaration2(*(yyvsp[-3].string),*(yyvsp[-2].string),(yyvsp[0].expr), false); }
#line 1709 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 111 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ArrayDeclaration(*(yyvsp[-3].string), (yyvsp[-1].number));}
#line 1715 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 117 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new VariableDeclaration(*(yyvsp[-2].string),*(yyvsp[-1].string), NULL);}
#line 1721 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 118 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new VariableDeclaration(*(yyvsp[-4].string),*(yyvsp[-3].string),(yyvsp[-1].expr)); }
#line 1727 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 121 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new AssignmentStatement(*(yyvsp[-2].string),(yyvsp[0].expr));}
#line 1733 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 122 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = new PostIncrement(*(yyvsp[-2].string));}
#line 1739 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 123 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new PreIncrement(*(yyvsp[0].string));}
#line 1745 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 124 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = new PostDecrement(*(yyvsp[-2].string));}
#line 1751 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 125 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new PreDecrement(*(yyvsp[0].string));}
#line 1757 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 126 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) =  new AddAssign(*(yyvsp[-3].string),(yyvsp[0].expr));}
#line 1763 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 127 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) =  new SubAssign(*(yyvsp[-3].string),(yyvsp[0].expr));}
#line 1769 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 128 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) =  new MulAssign(*(yyvsp[-3].string),(yyvsp[0].expr));}
#line 1775 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 129 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) =  new DivAssign(*(yyvsp[-3].string),(yyvsp[0].expr));}
#line 1781 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 130 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) =  new RemAssign(*(yyvsp[-3].string),(yyvsp[0].expr));}
#line 1787 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 131 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new FunctionCallStatement2(*(yyvsp[-5].string),*(yyvsp[-3].string),(yyvsp[-1].node)); }
#line 1793 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 132 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new FunctionCallStatement2(*(yyvsp[-4].string),*(yyvsp[-2].string),NULL); }
#line 1799 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 135 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new IfStatement((yyvsp[-4].expr),(yyvsp[-1].node));}
#line 1805 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 136 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new IfStatement((yyvsp[-2].expr),(yyvsp[0].node));}
#line 1811 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 137 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new IfElseStatement((yyvsp[-8].expr),(yyvsp[-5].node),(yyvsp[-1].node));}
#line 1817 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 138 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new IfElseStatement((yyvsp[-4].expr),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1823 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 139 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new WhileStatement((yyvsp[-4].expr),(yyvsp[-1].node));}
#line 1829 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 141 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ForStatement((yyvsp[-8].node),(yyvsp[-6].expr),(yyvsp[-4].node),(yyvsp[-1].node));}
#line 1835 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 143 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new DoWhileStatement((yyvsp[-1].expr), (yyvsp[-5].node));}
#line 1841 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 145 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = new ReturnStatement(NULL, (yyvsp[0].node));}
#line 1847 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 148 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = new ReturnList((yyvsp[-2].node),(yyvsp[0].node));}
#line 1853 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 149 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = new MinReturnList((yyvsp[-2].node),(yyvsp[0].node));}
#line 1859 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 150 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = new MulReturnList((yyvsp[-2].node),(yyvsp[0].node));}
#line 1865 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 151 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = new ReturnList((yyvsp[0].node),NULL); }
#line 1871 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 153 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new FunctionCallStatement(*(yyvsp[-3].string),(yyvsp[-1].node)); }
#line 1877 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 154 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new FunctionCallStatement(*(yyvsp[-2].string),NULL); }
#line 1883 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 155 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].expr);}
#line 1889 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 158 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new  ExclamationNot(NULL,(yyvsp[0].expr));}
#line 1895 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 159 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new  LogicalNot(NULL,(yyvsp[0].expr));}
#line 1901 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 160 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1907 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 163 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new DivOperator((yyvsp[-2].expr),(yyvsp[0].expr));}
#line 1913 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 164 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new MulOperator((yyvsp[-2].expr),(yyvsp[0].expr));}
#line 1919 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 165 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new RemOperator((yyvsp[-2].expr),(yyvsp[0].expr));}
#line 1925 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 166 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1931 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 168 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new AddOperator((yyvsp[-2].expr),(yyvsp[0].expr)); }
#line 1937 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 169 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new SubOperator((yyvsp[-2].expr),(yyvsp[0].expr)); }
#line 1943 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 170 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new SpecialSubOperator((yyvsp[-1].expr),(yyvsp[0].number)); }
#line 1949 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 171 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1955 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 173 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new LeftShift((yyvsp[-2].expr),(yyvsp[0].expr));}
#line 1961 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 174 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new RightShift((yyvsp[-2].expr),(yyvsp[0].expr));}
#line 1967 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 175 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1973 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 179 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new LessThanEqualOperator((yyvsp[-2].expr),(yyvsp[0].expr)); }
#line 1979 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 180 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new MoreThanEqualOperator ((yyvsp[-2].expr),(yyvsp[0].expr)); }
#line 1985 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 181 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new LessThanOperator((yyvsp[-2].expr),(yyvsp[0].expr));}
#line 1991 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 182 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new MoreThanOperator ((yyvsp[-2].expr),(yyvsp[0].expr)); }
#line 1997 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 183 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 2003 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 185 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new EqualToOperator((yyvsp[-2].expr),(yyvsp[0].expr)); }
#line 2009 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 186 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new NotEqualToOperator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2015 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 187 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 2021 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 189 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BitwiseAndOperator((yyvsp[-2].expr),(yyvsp[0].expr)); }
#line 2027 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 190 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 2033 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 192 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BitwiseXorOperator((yyvsp[-2].expr),(yyvsp[0].expr)); }
#line 2039 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 193 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 2045 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 195 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BitwiseOrOperator((yyvsp[-2].expr),(yyvsp[0].expr)); }
#line 2051 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 196 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 2057 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 199 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new LogicalAndOperator((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2063 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 200 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 2069 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 202 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new LogicalOrOperator((yyvsp[-2].expr), (yyvsp[0].expr));  }
#line 2075 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 203 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 2081 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 207 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 2087 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 208 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new Variable( *(yyvsp[0].string) ); }
#line 2093 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 209 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Float( (yyvsp[0].Float) ); }
#line 2099 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 210 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Number( (yyvsp[0].number)); }
#line 2105 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2109 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 212 "src/maths_parser.y" /* yacc.c:1906  */


const Ast_Node *g_root; // Definition of variable (to match declaration earlier)

const Ast_Node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
