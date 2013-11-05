/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "parser.y"

#include <stdio.h>
#include <string.h>
#include "compile.h"
#include "jv_alloc.h"
#define YYMALLOC jv_mem_alloc
#define YYFREE jv_mem_free

struct lexer_param;



/* Line 268 of yacc.c  */
#line 84 "parser.c"

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

/* "%code requires" blocks.  */

/* Line 288 of yacc.c  */
#line 12 "parser.y"

#include "locfile.h"
#define YYLTYPE location
#define YYLLOC_DEFAULT(Loc, Rhs, N)             \
  do {                                          \
    if (N) {                                    \
      (Loc).start = YYRHSLOC(Rhs, 1).start;     \
      (Loc).end = YYRHSLOC(Rhs, N).end;         \
    } else {                                    \
      (Loc).start = YYRHSLOC(Rhs, 0).end;       \
      (Loc).end = YYRHSLOC(Rhs, 0).end;         \
    }                                           \
  } while (0)
 


/* Line 288 of yacc.c  */
#line 125 "parser.c"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INVALID_CHARACTER = 258,
     IDENT = 259,
     LITERAL = 260,
     FORMAT = 261,
     EQ = 262,
     NEQ = 263,
     DEFINEDOR = 264,
     AS = 265,
     DEF = 266,
     IF = 267,
     THEN = 268,
     ELSE = 269,
     ELSE_IF = 270,
     REDUCE = 271,
     END = 272,
     AND = 273,
     OR = 274,
     SETPIPE = 275,
     SETPLUS = 276,
     SETMINUS = 277,
     SETMULT = 278,
     SETDIV = 279,
     SETDEFINEDOR = 280,
     LESSEQ = 281,
     GREATEREQ = 282,
     QQSTRING_START = 283,
     QQSTRING_TEXT = 284,
     QQSTRING_INTERP_START = 285,
     QQSTRING_INTERP_END = 286,
     QQSTRING_END = 287
   };
#endif
/* Tokens.  */
#define INVALID_CHARACTER 258
#define IDENT 259
#define LITERAL 260
#define FORMAT 261
#define EQ 262
#define NEQ 263
#define DEFINEDOR 264
#define AS 265
#define DEF 266
#define IF 267
#define THEN 268
#define ELSE 269
#define ELSE_IF 270
#define REDUCE 271
#define END 272
#define AND 273
#define OR 274
#define SETPIPE 275
#define SETPLUS 276
#define SETMINUS 277
#define SETMULT 278
#define SETDIV 279
#define SETDEFINEDOR 280
#define LESSEQ 281
#define GREATEREQ 282
#define QQSTRING_START 283
#define QQSTRING_TEXT 284
#define QQSTRING_INTERP_START 285
#define QQSTRING_INTERP_END 286
#define QQSTRING_END 287




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 30 "parser.y"

  jv literal;
  block blk;



/* Line 293 of yacc.c  */
#line 213 "parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */

/* Line 343 of yacc.c  */
#line 94 "parser.y"

#include "lexer.h"
struct lexer_param {
  yyscan_t lexer;
};
#define FAIL(loc, msg)                                             \
  do {                                                             \
    location l = loc;                                              \
    yyerror(&l, answer, errors, locations, lexer_param_ptr, msg);  \
    /*YYERROR*/;                                                   \
  } while (0)

void yyerror(YYLTYPE* loc, block* answer, int* errors, 
             struct locfile* locations, struct lexer_param* lexer_param_ptr, const char *s){
  (*errors)++;
  locfile_locate(locations, *loc, "error: %s", s);
}

int yylex(YYSTYPE* yylval, YYLTYPE* yylloc, block* answer, int* errors, 
          struct locfile* locations, struct lexer_param* lexer_param_ptr) {
  yyscan_t lexer = lexer_param_ptr->lexer;
  while (1) {
    int tok = jq_yylex(yylval, yylloc, lexer);
    if (tok == INVALID_CHARACTER) {
      FAIL(*yylloc, "Invalid character");
    } else {
      if ((tok == LITERAL || tok == QQSTRING_TEXT) && !jv_is_valid(yylval->literal)) {
        jv msg = jv_invalid_get_msg(jv_copy(yylval->literal));
        if (jv_get_kind(msg) == JV_KIND_STRING) {
          FAIL(*yylloc, jv_string_value(msg));
        } else {
          FAIL(*yylloc, "Invalid literal");
        }
        jv_free(msg);
        jv_free(yylval->literal);
        yylval->literal = jv_null();
      }
      return tok;
    }
  }
}

static block gen_dictpair(block k, block v) {
  return BLOCK(gen_subexp(k), gen_subexp(v), gen_op_simple(INSERT));
}

static block gen_index(block obj, block key) {
  return BLOCK(gen_subexp(key), obj, gen_op_simple(INDEX));
}

static block gen_slice_index(block obj, block start, block end) {
  block key = BLOCK(gen_subexp(gen_const(jv_object())),
                    gen_subexp(gen_const(jv_string("start"))),
                    gen_subexp(start),
                    gen_op_simple(INSERT),
                    gen_subexp(gen_const(jv_string("end"))),
                    gen_subexp(end),
                    gen_op_simple(INSERT));
  return BLOCK(key, obj, gen_op_simple(INDEX));
}

static block gen_binop(block a, block b, int op) {
  const char* funcname = 0;
  switch (op) {
  case '+': funcname = "_plus"; break;
  case '-': funcname = "_minus"; break;
  case '*': funcname = "_multiply"; break;
  case '/': funcname = "_divide"; break;
  case EQ: funcname = "_equal"; break;
  case NEQ: funcname = "_notequal"; break;
  case '<': funcname = "_less"; break;
  case '>': funcname = "_greater"; break;
  case LESSEQ: funcname = "_lesseq"; break;
  case GREATEREQ: funcname = "_greatereq"; break;
  }
  assert(funcname);

  return gen_call(funcname, BLOCK(gen_lambda(a), gen_lambda(b)));
}

static block gen_format(block a, jv fmt) {
  return BLOCK(a, gen_call("format", BLOCK(gen_lambda(gen_const(fmt)))));
}

static block gen_definedor_assign(block object, block val) {
  block tmp = block_bind(gen_op_var_unbound(STOREV, "tmp"),
                         gen_noop(), OP_HAS_VARIABLE);
  return BLOCK(gen_op_simple(DUP),
               val, tmp,
               gen_call("_modify", BLOCK(gen_lambda(object),
                                         gen_lambda(gen_definedor(gen_noop(), 
                                                                  gen_op_var_bound(LOADV, tmp))))));
}
 
static block gen_update(block object, block val, int optype) {
  block tmp = block_bind(gen_op_var_unbound(STOREV, "tmp"),
                         gen_noop(), OP_HAS_VARIABLE);
  return BLOCK(gen_op_simple(DUP),
               val,
               tmp,
               gen_call("_modify", BLOCK(gen_lambda(object), 
                                         gen_lambda(gen_binop(gen_noop(),
                                                              gen_op_var_bound(LOADV, tmp),
                                                              optype)))));
}



/* Line 343 of yacc.c  */
#line 347 "parser.c"

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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1121

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNRULES -- Number of states.  */
#define YYNSTATES  184

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    43,     2,     2,     2,
      44,    45,    41,    39,    35,    40,    47,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    33,
      37,    36,    38,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,    34,    51,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     8,    11,    14,    21,    32,
      38,    42,    46,    50,    54,    58,    62,    66,    70,    74,
      78,    82,    85,    89,    93,    97,   101,   105,   109,   113,
     117,   121,   125,   129,   133,   135,   141,   150,   161,   162,
     167,   168,   174,   175,   178,   183,   189,   193,   197,   199,
     201,   205,   208,   213,   217,   224,   230,   236,   238,   240,
     242,   246,   250,   253,   257,   260,   262,   267,   274,   278,
     282,   287,   291,   292,   294,   298,   302,   306,   310,   312,
     314,   320
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    55,    -1,    54,    -1,    -1,    56,    54,
      -1,    56,    55,    -1,    63,    10,    43,     4,    34,    55,
      -1,    16,    63,    10,    43,     4,    44,    55,    33,    55,
      45,    -1,    12,    55,    13,    55,    61,    -1,    12,    55,
       1,    -1,    55,    36,    55,    -1,    55,    19,    55,    -1,
      55,    18,    55,    -1,    55,     9,    55,    -1,    55,    25,
      55,    -1,    55,    20,    55,    -1,    55,    34,    55,    -1,
      55,    35,    55,    -1,    55,    39,    55,    -1,    55,    21,
      55,    -1,    40,    55,    -1,    55,    40,    55,    -1,    55,
      22,    55,    -1,    55,    41,    55,    -1,    55,    23,    55,
      -1,    55,    42,    55,    -1,    55,    24,    55,    -1,    55,
       7,    55,    -1,    55,     8,    55,    -1,    55,    37,    55,
      -1,    55,    38,    55,    -1,    55,    26,    55,    -1,    55,
      27,    55,    -1,    63,    -1,    11,     4,    46,    55,    33,
      -1,    11,     4,    44,     4,    45,    46,    55,    33,    -1,
      11,     4,    44,     4,    33,     4,    45,    46,    55,    33,
      -1,    -1,    28,    58,    60,    32,    -1,    -1,     6,    28,
      59,    60,    32,    -1,    -1,    60,    29,    -1,    60,    30,
      55,    31,    -1,    15,    55,    13,    55,    61,    -1,    14,
      55,    17,    -1,    62,    34,    62,    -1,    63,    -1,    47,
      -1,    63,    47,     4,    -1,    47,     4,    -1,    63,    48,
      55,    49,    -1,    63,    48,    49,    -1,    63,    48,    55,
      46,    55,    49,    -1,    63,    48,    55,    46,    49,    -1,
      63,    48,    46,    55,    49,    -1,     5,    -1,    57,    -1,
       6,    -1,    44,    55,    45,    -1,    48,    55,    49,    -1,
      48,    49,    -1,    50,    64,    51,    -1,    43,     4,    -1,
       4,    -1,     4,    44,    55,    45,    -1,     4,    44,    55,
      33,    55,    45,    -1,    44,     1,    45,    -1,    48,     1,
      49,    -1,    63,    48,     1,    49,    -1,    50,     1,    51,
      -1,    -1,    65,    -1,    65,    35,    64,    -1,     1,    35,
      64,    -1,     4,    46,    62,    -1,    57,    46,    62,    -1,
      57,    -1,     4,    -1,    44,    55,    45,    46,    62,    -1,
      44,     1,    45,    46,    62,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   204,   204,   207,   212,   215,   220,   224,   229,   234,
     237,   242,   246,   250,   254,   258,   262,   266,   270,   274,
     278,   282,   286,   290,   294,   298,   302,   306,   310,   314,
     318,   322,   326,   330,   334,   339,   344,   352,   365,   365,
     369,   369,   376,   379,   382,   388,   391,   396,   400,   406,
     409,   412,   416,   419,   422,   425,   428,   431,   434,   437,
     440,   443,   446,   449,   452,   456,   460,   465,   470,   471,
     472,   473,   476,   479,   480,   481,   484,   487,   490,   494,
     498,   501
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INVALID_CHARACTER", "IDENT", "LITERAL",
  "FORMAT", "\"==\"", "\"!=\"", "\"//\"", "\"as\"", "\"def\"", "\"if\"",
  "\"then\"", "\"else\"", "\"elif\"", "\"reduce\"", "\"end\"", "\"and\"",
  "\"or\"", "\"|=\"", "\"+=\"", "\"-=\"", "\"*=\"", "\"/=\"", "\"//=\"",
  "\"<=\"", "\">=\"", "QQSTRING_START", "QQSTRING_TEXT",
  "QQSTRING_INTERP_START", "QQSTRING_INTERP_END", "QQSTRING_END", "';'",
  "'|'", "','", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'$'",
  "'('", "')'", "':'", "'.'", "'['", "']'", "'{'", "'}'", "$accept",
  "TopLevel", "FuncDefs", "Exp", "FuncDef", "String", "@1", "@2",
  "QQString", "ElseBody", "ExpD", "Term", "MkDict", "MkDictPair", 0
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
     285,   286,   287,    59,   124,    44,    61,    60,    62,    43,
      45,    42,    47,    36,    40,    41,    58,    46,    91,    93,
     123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    54,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    56,    56,    56,    58,    57,
      59,    57,    60,    60,    60,    61,    61,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    64,    64,    64,    64,    65,    65,    65,    65,
      65,    65
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     2,     2,     6,    10,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     5,     8,    10,     0,     4,
       0,     5,     0,     2,     4,     5,     3,     3,     1,     1,
       3,     2,     4,     3,     6,     5,     5,     1,     1,     1,
       3,     3,     2,     3,     2,     1,     4,     6,     3,     3,
       4,     3,     0,     1,     3,     3,     3,     3,     1,     1,
       5,     5
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    65,    57,    59,     0,     0,     0,    38,     0,     0,
       0,    49,     0,     0,     0,     3,     2,     4,    58,    34,
       0,    40,     0,     0,     0,     0,    42,    21,    64,     0,
       0,    51,     0,    62,     0,     0,    79,     0,     0,    78,
       0,    73,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     0,     0,     0,
       0,    42,     0,     0,    10,     0,     0,     0,    68,    60,
      69,    61,     0,    71,     0,     0,     0,     0,    63,     0,
      28,    29,    14,    13,    12,    16,    20,    23,    25,    27,
      15,    32,    33,    17,    18,    11,    30,    31,    19,    22,
      24,    26,     0,    50,     0,     0,    53,     0,     0,    66,
       0,     0,     0,     0,     0,    43,     0,    39,     0,    75,
      76,    48,     0,     0,    77,    74,     0,    70,     0,     0,
      52,     0,    41,     0,     0,    35,     0,     0,     9,     0,
       0,     0,     0,     0,     0,    56,    55,     0,    67,     0,
       0,     0,     0,     0,    44,    47,    81,    80,     7,    54,
       0,     0,    46,     0,     0,     0,    36,     0,     0,     0,
      45,     0,    37,     8
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    66,    24,    18,    26,    71,    77,   148,
     130,    19,    40,    41
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -86
static const yytype_int16 yypact[] =
{
     256,   -37,   -86,     3,    28,   256,   235,   -86,   256,    29,
     178,    30,   160,    70,    35,   -86,   970,   256,   -86,    -6,
     256,   -86,   -31,   451,   256,    55,   -86,   -14,   -86,    -9,
     526,   -86,   -10,   -86,   336,   -26,    26,     3,   226,    32,
     -11,     2,   -86,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   -86,   970,    36,    78,    85,
     487,   -86,    83,   256,   -86,   256,    45,   -13,   -86,   -86,
     -86,   -86,    79,   -86,   235,    47,   565,   235,   -86,    79,
    1073,  1073,  1006,  1079,  1056,  1031,  1031,  1031,  1031,  1031,
    1031,  1073,  1073,   970,  1006,  1031,  1073,  1073,   -14,   -14,
     -86,   -86,    89,   -86,    46,   256,   -86,   300,   256,   -86,
      -8,   -19,   718,   682,    90,   -86,   256,   -86,    64,   -86,
      66,   -18,    58,    59,    66,   -86,    72,   -86,   372,   208,
     -86,   604,   -86,   104,    63,   -86,   256,   256,   -86,    67,
     754,   235,   235,   235,   256,   -86,   -86,   408,   -86,    65,
     256,   790,   826,   256,   -86,    66,    66,    66,   970,   -86,
      71,   862,   -86,   256,   898,   256,   -86,   682,   256,   934,
     -86,   643,   -86,   -86
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -86,   -86,    95,     0,     6,   -12,   -86,   -86,    48,   -61,
     -85,    -3,   -71,   -86
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -73
static const yytype_int16 yytable[] =
{
      16,    39,   134,    25,    67,    23,    17,    20,    27,    82,
      30,   129,    34,    72,   143,    73,   125,   126,   135,   127,
      70,   125,   126,    17,   142,    83,   144,    63,    64,    68,
      69,    21,    22,    28,    31,    42,    78,    89,    86,    80,
      88,    68,    69,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    76,   165,   166,   167,   117,
      39,    35,    84,   122,    36,   123,    37,    39,    87,   112,
     128,   131,   113,    36,   131,    37,   114,   121,   124,     1,
       2,     3,   132,   136,   149,   137,     4,     5,     7,    82,
     151,     6,    68,    69,   152,   153,   154,     7,   159,   160,
     170,   163,    65,     7,    38,   138,   180,   175,   141,   120,
       0,   -72,     0,    38,     0,     8,   150,     0,     9,    10,
     -72,   115,    11,    12,   116,    13,     0,     0,     0,   157,
       0,     0,     0,     0,     0,     0,   161,   162,   131,   131,
     131,     0,     0,     0,   168,     0,     0,     0,     0,     0,
     171,    32,     0,   174,     1,     2,     3,     0,     0,     0,
       0,     4,     5,   177,     0,   179,     6,     0,   181,    29,
       0,     0,     1,     2,     3,     0,     0,     0,     7,     4,
       5,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       8,     0,     0,     9,    10,     0,     7,    11,    12,    33,
      13,     0,     1,     2,     3,     0,     0,     0,     8,     4,
       5,     9,    10,     0,     6,    11,    12,    85,    13,     0,
       1,     2,     3,     0,     0,     0,     7,     4,     5,     1,
       2,     3,     6,     0,     0,     0,     0,     0,     8,     0,
       0,     9,    10,     0,     7,    11,    12,   156,    13,     0,
       1,     2,     3,     7,     0,     0,     8,     4,     5,     9,
      10,     0,     6,    11,    12,     0,    13,     0,     9,    10,
       0,     0,    11,    12,     7,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     9,
      10,     0,     0,    11,    12,     0,    13,    43,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     0,     0,
       0,     0,     0,     0,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    43,    44,    45,   139,     0,     0,   140,
       0,     0,     0,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     0,     0,     0,     0,     0,     0,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    43,
      44,    45,     0,     0,     0,    81,     0,     0,     0,     0,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       0,     0,     0,     0,     0,     0,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    43,    44,    45,     0,     0,
       0,   155,     0,     0,     0,     0,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     0,     0,     0,     0,
       0,     0,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,    74,     0,     0,     0,     0,   169,    43,    44,
      45,     0,     0,     0,    75,     0,     0,     0,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     0,
       0,     0,     0,     0,     0,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    43,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     0,     0,     0,     0,     0,
     118,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,     0,   119,    43,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     0,     0,     0,     0,     0,     0,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       0,    79,    43,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
     133,    43,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,     0,     0,     0,     0,     0,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     0,     0,   158,
      43,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     0,     0,     0,     0,     0,     0,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,   183,    43,
      44,    45,     0,     0,     0,     0,   146,   147,     0,     0,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       0,     0,     0,     0,     0,     0,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    43,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     0,     0,     0,     0,
       0,   145,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    43,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,     0,     0,   164,     0,     0,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    43,    44,    45,
       0,     0,     0,     0,     0,     0,     0,   172,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     0,     0,
       0,     0,     0,     0,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    43,    44,    45,     0,     0,     0,   173,
       0,     0,     0,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     0,     0,     0,     0,     0,     0,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    43,
      44,    45,     0,     0,     0,     0,     0,     0,     0,     0,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       0,     0,     0,     0,     0,   176,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    43,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     0,     0,     0,     0,
       0,   178,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    43,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,     0,     0,     0,     0,   182,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    43,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     0,     0,
       0,     0,     0,     0,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    43,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     0,     0,     0,     0,    43,    44,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    46,
      47,   -73,   -73,   -73,   -73,   -73,   -73,    54,    55,     0,
       0,     0,     0,    43,    44,     0,     0,   -73,    59,    60,
      61,    62,    63,    64,    46,     0,     0,     0,     0,     0,
     -73,   -73,    54,    55,     0,     0,    43,    44,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,    64,   -73,
     -73,     0,     0,     0,     0,    54,    55,     0,     0,     0,
     -73,   -73,    61,    62,    63,    64,    59,    60,    61,    62,
      63,    64
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-86))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-73))

static const yytype_int16 yycheck[] =
{
       0,    13,    87,     6,    10,     5,     0,    44,     8,    35,
      10,    82,    12,    44,    33,    46,    29,    30,    89,    32,
      20,    29,    30,    17,    32,    51,    45,    41,    42,    47,
      48,    28,     4,     4,     4,     0,    45,    35,    38,    49,
      51,    47,    48,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    10,   151,   152,   153,    69,
      82,     1,    46,    73,     4,    75,     6,    89,    46,    43,
       1,    84,     4,     4,    87,     6,     1,     4,    43,     4,
       5,     6,    45,     4,     4,    49,    11,    12,    28,    35,
      34,    16,    47,    48,    46,    46,    34,    28,     4,    46,
      45,    44,    17,    28,    44,   115,   177,    46,   118,    71,
      -1,    51,    -1,    44,    -1,    40,   126,    -1,    43,    44,
      51,    46,    47,    48,    49,    50,    -1,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,   146,   147,   151,   152,
     153,    -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,    -1,
     160,     1,    -1,   163,     4,     5,     6,    -1,    -1,    -1,
      -1,    11,    12,   173,    -1,   175,    16,    -1,   178,     1,
      -1,    -1,     4,     5,     6,    -1,    -1,    -1,    28,    11,
      12,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,    44,    -1,    28,    47,    48,    49,
      50,    -1,     4,     5,     6,    -1,    -1,    -1,    40,    11,
      12,    43,    44,    -1,    16,    47,    48,     1,    50,    -1,
       4,     5,     6,    -1,    -1,    -1,    28,    11,    12,     4,
       5,     6,    16,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    43,    44,    -1,    28,    47,    48,    49,    50,    -1,
       4,     5,     6,    28,    -1,    -1,    40,    11,    12,    43,
      44,    -1,    16,    47,    48,    -1,    50,    -1,    43,    44,
      -1,    -1,    47,    48,    28,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      44,    -1,    -1,    47,    48,    -1,    50,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     7,     8,     9,    46,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     7,
       8,     9,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     7,     8,     9,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,     1,    -1,    -1,    -1,    -1,    49,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    -1,    45,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    45,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      45,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    45,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    45,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     7,     8,     9,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,     7,     8,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,     7,     8,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    18,    -1,    -1,    -1,    -1,    -1,
       7,     8,    26,    27,    -1,    -1,     7,     8,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    26,
      27,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42,    37,    38,    39,    40,
      41,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,    11,    12,    16,    28,    40,    43,
      44,    47,    48,    50,    53,    54,    55,    56,    57,    63,
      44,    28,     4,    55,    56,    63,    58,    55,     4,     1,
      55,     4,     1,    49,    55,     1,     4,     6,    44,    57,
      64,    65,     0,     7,     8,     9,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    54,    55,    10,    47,    48,
      55,    59,    44,    46,     1,    13,    10,    60,    45,    45,
      49,    49,    35,    51,    46,     1,    55,    46,    51,    35,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    43,     4,     1,    46,    49,    55,    33,    45,
      60,     4,    55,    55,    43,    29,    30,    32,     1,    64,
      62,    63,    45,    45,    62,    64,     4,    49,    55,    46,
      49,    55,    32,    33,    45,    33,    14,    15,    61,     4,
      55,    34,    46,    46,    34,    49,    49,    55,    45,     4,
      46,    55,    55,    44,    31,    62,    62,    62,    55,    49,
      45,    55,    17,    13,    55,    46,    33,    55,    33,    55,
      61,    55,    33,    45
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

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (&yylloc, answer, errors, locations, lexer_param_ptr, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc, answer, errors, locations, lexer_param_ptr)
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
		  Type, Value, Location, answer, errors, locations, lexer_param_ptr); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, answer, errors, locations, lexer_param_ptr)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    block* answer;
    int* errors;
    struct locfile* locations;
    struct lexer_param* lexer_param_ptr;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (answer);
  YYUSE (errors);
  YYUSE (locations);
  YYUSE (lexer_param_ptr);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, answer, errors, locations, lexer_param_ptr)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    block* answer;
    int* errors;
    struct locfile* locations;
    struct lexer_param* lexer_param_ptr;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, answer, errors, locations, lexer_param_ptr);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, answer, errors, locations, lexer_param_ptr)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    block* answer;
    int* errors;
    struct locfile* locations;
    struct lexer_param* lexer_param_ptr;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , answer, errors, locations, lexer_param_ptr);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, answer, errors, locations, lexer_param_ptr); \
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, answer, errors, locations, lexer_param_ptr)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    block* answer;
    int* errors;
    struct locfile* locations;
    struct lexer_param* lexer_param_ptr;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (answer);
  YYUSE (errors);
  YYUSE (locations);
  YYUSE (lexer_param_ptr);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {
      case 4: /* "IDENT" */

/* Line 1391 of yacc.c  */
#line 35 "parser.y"
	{ jv_free((yyvaluep->literal)); };

/* Line 1391 of yacc.c  */
#line 1665 "parser.c"
	break;
      case 5: /* "LITERAL" */

/* Line 1391 of yacc.c  */
#line 35 "parser.y"
	{ jv_free((yyvaluep->literal)); };

/* Line 1391 of yacc.c  */
#line 1674 "parser.c"
	break;
      case 6: /* "FORMAT" */

/* Line 1391 of yacc.c  */
#line 35 "parser.y"
	{ jv_free((yyvaluep->literal)); };

/* Line 1391 of yacc.c  */
#line 1683 "parser.c"
	break;
      case 29: /* "QQSTRING_TEXT" */

/* Line 1391 of yacc.c  */
#line 35 "parser.y"
	{ jv_free((yyvaluep->literal)); };

/* Line 1391 of yacc.c  */
#line 1692 "parser.c"
	break;
      case 54: /* "FuncDefs" */

/* Line 1391 of yacc.c  */
#line 36 "parser.y"
	{ block_free((yyvaluep->blk)); };

/* Line 1391 of yacc.c  */
#line 1701 "parser.c"
	break;
      case 55: /* "Exp" */

/* Line 1391 of yacc.c  */
#line 36 "parser.y"
	{ block_free((yyvaluep->blk)); };

/* Line 1391 of yacc.c  */
#line 1710 "parser.c"
	break;
      case 56: /* "FuncDef" */

/* Line 1391 of yacc.c  */
#line 36 "parser.y"
	{ block_free((yyvaluep->blk)); };

/* Line 1391 of yacc.c  */
#line 1719 "parser.c"
	break;
      case 57: /* "String" */

/* Line 1391 of yacc.c  */
#line 36 "parser.y"
	{ block_free((yyvaluep->blk)); };

/* Line 1391 of yacc.c  */
#line 1728 "parser.c"
	break;
      case 60: /* "QQString" */

/* Line 1391 of yacc.c  */
#line 36 "parser.y"
	{ block_free((yyvaluep->blk)); };

/* Line 1391 of yacc.c  */
#line 1737 "parser.c"
	break;
      case 61: /* "ElseBody" */

/* Line 1391 of yacc.c  */
#line 36 "parser.y"
	{ block_free((yyvaluep->blk)); };

/* Line 1391 of yacc.c  */
#line 1746 "parser.c"
	break;
      case 62: /* "ExpD" */

/* Line 1391 of yacc.c  */
#line 36 "parser.y"
	{ block_free((yyvaluep->blk)); };

/* Line 1391 of yacc.c  */
#line 1755 "parser.c"
	break;
      case 63: /* "Term" */

/* Line 1391 of yacc.c  */
#line 36 "parser.y"
	{ block_free((yyvaluep->blk)); };

/* Line 1391 of yacc.c  */
#line 1764 "parser.c"
	break;
      case 64: /* "MkDict" */

/* Line 1391 of yacc.c  */
#line 36 "parser.y"
	{ block_free((yyvaluep->blk)); };

/* Line 1391 of yacc.c  */
#line 1773 "parser.c"
	break;
      case 65: /* "MkDictPair" */

/* Line 1391 of yacc.c  */
#line 36 "parser.y"
	{ block_free((yyvaluep->blk)); };

/* Line 1391 of yacc.c  */
#line 1782 "parser.c"
	break;

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
int yyparse (block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


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
yyparse (block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
#else
int
yyparse (answer, errors, locations, lexer_param_ptr)
    block* answer;
    int* errors;
    struct locfile* locations;
    struct lexer_param* lexer_param_ptr;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
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
  yylsp = yyls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 204 "parser.y"
    {
  *answer = (yyvsp[(1) - (1)].blk);
}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 207 "parser.y"
    {
  *answer = (yyvsp[(1) - (1)].blk);
}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 212 "parser.y"
    {
  (yyval.blk) = gen_noop();
}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 215 "parser.y"
    {
  (yyval.blk) = block_join((yyvsp[(1) - (2)].blk), (yyvsp[(2) - (2)].blk));
}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 220 "parser.y"
    {
  (yyval.blk) = block_bind((yyvsp[(1) - (2)].blk), (yyvsp[(2) - (2)].blk), OP_IS_CALL_PSEUDO);
}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 224 "parser.y"
    {
  (yyval.blk) = gen_var_binding((yyvsp[(1) - (6)].blk), jv_string_value((yyvsp[(4) - (6)].literal)), (yyvsp[(6) - (6)].blk));
  jv_free((yyvsp[(4) - (6)].literal));
}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 229 "parser.y"
    {
  (yyval.blk) = gen_reduce(jv_string_value((yyvsp[(5) - (10)].literal)), (yyvsp[(2) - (10)].blk), (yyvsp[(7) - (10)].blk), (yyvsp[(9) - (10)].blk));
  jv_free((yyvsp[(5) - (10)].literal));
}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 234 "parser.y"
    {
  (yyval.blk) = gen_cond((yyvsp[(2) - (5)].blk), (yyvsp[(4) - (5)].blk), (yyvsp[(5) - (5)].blk));
}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 237 "parser.y"
    {
  FAIL((yyloc), "Possibly unterminated 'if' statment");
  (yyval.blk) = (yyvsp[(2) - (3)].blk);
}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 242 "parser.y"
    {
  (yyval.blk) = gen_call("_assign", BLOCK(gen_lambda((yyvsp[(1) - (3)].blk)), gen_lambda((yyvsp[(3) - (3)].blk))));
}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 246 "parser.y"
    {
  (yyval.blk) = gen_or((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk));
}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 250 "parser.y"
    {
  (yyval.blk) = gen_and((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk));
}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 254 "parser.y"
    {
  (yyval.blk) = gen_definedor((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk));
}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 258 "parser.y"
    {
  (yyval.blk) = gen_definedor_assign((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk));
}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 262 "parser.y"
    {
  (yyval.blk) = gen_call("_modify", BLOCK(gen_lambda((yyvsp[(1) - (3)].blk)), gen_lambda((yyvsp[(3) - (3)].blk))));
}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 266 "parser.y"
    { 
  (yyval.blk) = block_join((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk)); 
}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 270 "parser.y"
    { 
  (yyval.blk) = gen_both((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk)); 
}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 274 "parser.y"
    {
  (yyval.blk) = gen_binop((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk), '+');
}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 278 "parser.y"
    {
  (yyval.blk) = gen_update((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk), '+');
}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 282 "parser.y"
    {
  (yyval.blk) = BLOCK((yyvsp[(2) - (2)].blk), gen_call("_negate", gen_noop()));
}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 286 "parser.y"
    {
  (yyval.blk) = gen_binop((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk), '-');
}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 290 "parser.y"
    {
  (yyval.blk) = gen_update((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk), '-');
}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 294 "parser.y"
    {
  (yyval.blk) = gen_binop((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk), '*');
}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 298 "parser.y"
    {
  (yyval.blk) = gen_update((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk), '*');
}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 302 "parser.y"
    {
  (yyval.blk) = gen_binop((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk), '/');
}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 306 "parser.y"
    {
  (yyval.blk) = gen_update((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk), '/');
}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 310 "parser.y"
    {
  (yyval.blk) = gen_binop((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk), EQ);
}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 314 "parser.y"
    {
  (yyval.blk) = gen_binop((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk), NEQ);
}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 318 "parser.y"
    {
  (yyval.blk) = gen_binop((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk), '<');
}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 322 "parser.y"
    {
  (yyval.blk) = gen_binop((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk), '>');
}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 326 "parser.y"
    {
  (yyval.blk) = gen_binop((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk), LESSEQ);
}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 330 "parser.y"
    {
  (yyval.blk) = gen_binop((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk), GREATEREQ);
}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 334 "parser.y"
    { 
  (yyval.blk) = (yyvsp[(1) - (1)].blk); 
}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 339 "parser.y"
    {
  (yyval.blk) = gen_function(jv_string_value((yyvsp[(2) - (5)].literal)), gen_noop(), (yyvsp[(4) - (5)].blk));
  jv_free((yyvsp[(2) - (5)].literal));
}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 344 "parser.y"
    {
  (yyval.blk) = gen_function(jv_string_value((yyvsp[(2) - (8)].literal)), 
                    gen_op_block_unbound(CLOSURE_PARAM, jv_string_value((yyvsp[(4) - (8)].literal))), 
                    (yyvsp[(7) - (8)].blk));
  jv_free((yyvsp[(2) - (8)].literal));
  jv_free((yyvsp[(4) - (8)].literal));
}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 352 "parser.y"
    {
  (yyval.blk) = gen_function(jv_string_value((yyvsp[(2) - (10)].literal)), 
                    BLOCK(gen_op_block_unbound(CLOSURE_PARAM, jv_string_value((yyvsp[(4) - (10)].literal))), 
                          gen_op_block_unbound(CLOSURE_PARAM, jv_string_value((yyvsp[(6) - (10)].literal)))),
                    (yyvsp[(9) - (10)].blk));
  jv_free((yyvsp[(2) - (10)].literal));
  jv_free((yyvsp[(4) - (10)].literal));
  jv_free((yyvsp[(6) - (10)].literal));
}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 365 "parser.y"
    { (yyval.literal) = jv_string("text"); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 365 "parser.y"
    {
  (yyval.blk) = (yyvsp[(3) - (4)].blk);
  jv_free((yyvsp[(2) - (4)].literal));
}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 369 "parser.y"
    { (yyval.literal) = (yyvsp[(1) - (2)].literal); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 369 "parser.y"
    {
  (yyval.blk) = (yyvsp[(4) - (5)].blk);
  jv_free((yyvsp[(3) - (5)].literal));
}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 376 "parser.y"
    {
  (yyval.blk) = gen_const(jv_string(""));
}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 379 "parser.y"
    {
  (yyval.blk) = gen_binop((yyvsp[(1) - (2)].blk), gen_const((yyvsp[(2) - (2)].literal)), '+');
}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 382 "parser.y"
    {
  (yyval.blk) = gen_binop((yyvsp[(1) - (4)].blk), gen_format((yyvsp[(3) - (4)].blk), jv_copy((yyvsp[(0) - (4)].literal))), '+');
}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 388 "parser.y"
    {
  (yyval.blk) = gen_cond((yyvsp[(2) - (5)].blk), (yyvsp[(4) - (5)].blk), (yyvsp[(5) - (5)].blk));
}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 391 "parser.y"
    {
  (yyval.blk) = (yyvsp[(2) - (3)].blk);
}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 396 "parser.y"
    { 
  (yyval.blk) = block_join((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk));
}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 400 "parser.y"
    {
  (yyval.blk) = (yyvsp[(1) - (1)].blk);
}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 406 "parser.y"
    {
  (yyval.blk) = gen_noop(); 
}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 409 "parser.y"
    {
  (yyval.blk) = gen_index((yyvsp[(1) - (3)].blk), gen_const((yyvsp[(3) - (3)].literal))); 
}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 412 "parser.y"
    { 
  (yyval.blk) = gen_index(gen_noop(), gen_const((yyvsp[(2) - (2)].literal))); 
}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 416 "parser.y"
    {
  (yyval.blk) = gen_index((yyvsp[(1) - (4)].blk), (yyvsp[(3) - (4)].blk)); 
}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 419 "parser.y"
    {
  (yyval.blk) = block_join((yyvsp[(1) - (3)].blk), gen_op_simple(EACH)); 
}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 422 "parser.y"
    {
  (yyval.blk) = gen_slice_index((yyvsp[(1) - (6)].blk), (yyvsp[(3) - (6)].blk), (yyvsp[(5) - (6)].blk));
}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 425 "parser.y"
    {
  (yyval.blk) = gen_slice_index((yyvsp[(1) - (5)].blk), (yyvsp[(3) - (5)].blk), gen_const(jv_null()));
}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 428 "parser.y"
    {
  (yyval.blk) = gen_slice_index((yyvsp[(1) - (5)].blk), gen_const(jv_null()), (yyvsp[(4) - (5)].blk));
}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 431 "parser.y"
    {
  (yyval.blk) = gen_const((yyvsp[(1) - (1)].literal)); 
}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 434 "parser.y"
    {
  (yyval.blk) = (yyvsp[(1) - (1)].blk);
}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 437 "parser.y"
    {
  (yyval.blk) = gen_format(gen_noop(), (yyvsp[(1) - (1)].literal));
}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 440 "parser.y"
    { 
  (yyval.blk) = (yyvsp[(2) - (3)].blk); 
}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 443 "parser.y"
    { 
  (yyval.blk) = gen_collect((yyvsp[(2) - (3)].blk)); 
}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 446 "parser.y"
    { 
  (yyval.blk) = gen_const(jv_array()); 
}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 449 "parser.y"
    { 
  (yyval.blk) = BLOCK(gen_subexp(gen_const(jv_object())), (yyvsp[(2) - (3)].blk), gen_op_simple(POP));
}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 452 "parser.y"
    {
  (yyval.blk) = gen_location((yyloc), gen_op_var_unbound(LOADV, jv_string_value((yyvsp[(2) - (2)].literal))));
  jv_free((yyvsp[(2) - (2)].literal));
}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 456 "parser.y"
    {
  (yyval.blk) = gen_location((yyloc), gen_call(jv_string_value((yyvsp[(1) - (1)].literal)), gen_noop()));
  jv_free((yyvsp[(1) - (1)].literal));
}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 460 "parser.y"
    {
  (yyval.blk) = gen_call(jv_string_value((yyvsp[(1) - (4)].literal)), gen_lambda((yyvsp[(3) - (4)].blk)));
  (yyval.blk) = gen_location((yylsp[(1) - (4)]), (yyval.blk));
  jv_free((yyvsp[(1) - (4)].literal));
}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 465 "parser.y"
    {
  (yyval.blk) = gen_call(jv_string_value((yyvsp[(1) - (6)].literal)), BLOCK(gen_lambda((yyvsp[(3) - (6)].blk)), gen_lambda((yyvsp[(5) - (6)].blk))));
  (yyval.blk) = gen_location((yylsp[(1) - (6)]), (yyval.blk));
  jv_free((yyvsp[(1) - (6)].literal));
}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 470 "parser.y"
    { (yyval.blk) = gen_noop(); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 471 "parser.y"
    { (yyval.blk) = gen_noop(); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 472 "parser.y"
    { (yyval.blk) = (yyvsp[(1) - (4)].blk); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 473 "parser.y"
    { (yyval.blk) = gen_noop(); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 476 "parser.y"
    { 
  (yyval.blk)=gen_noop(); 
}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 479 "parser.y"
    { (yyval.blk) = (yyvsp[(1) - (1)].blk); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 480 "parser.y"
    { (yyval.blk)=block_join((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk)); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 481 "parser.y"
    { (yyval.blk) = (yyvsp[(3) - (3)].blk); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 484 "parser.y"
    { 
  (yyval.blk) = gen_dictpair(gen_const((yyvsp[(1) - (3)].literal)), (yyvsp[(3) - (3)].blk));
 }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 487 "parser.y"
    {
  (yyval.blk) = gen_dictpair((yyvsp[(1) - (3)].blk), (yyvsp[(3) - (3)].blk));
  }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 490 "parser.y"
    {
  (yyval.blk) = gen_dictpair((yyvsp[(1) - (1)].blk), BLOCK(gen_op_simple(POP), gen_op_simple(DUP2),
                              gen_op_simple(DUP2), gen_op_simple(INDEX)));
  }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 494 "parser.y"
    {
  (yyval.blk) = gen_dictpair(gen_const(jv_copy((yyvsp[(1) - (1)].literal))),
                    gen_index(gen_noop(), gen_const((yyvsp[(1) - (1)].literal))));
  }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 498 "parser.y"
    {
  (yyval.blk) = gen_dictpair((yyvsp[(2) - (5)].blk), (yyvsp[(5) - (5)].blk));
  }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 501 "parser.y"
    { (yyval.blk) = (yyvsp[(5) - (5)].blk); }
    break;



/* Line 1806 of yacc.c  */
#line 2838 "parser.c"
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, answer, errors, locations, lexer_param_ptr, YY_("syntax error"));
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
        yyerror (&yylloc, answer, errors, locations, lexer_param_ptr, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
		      yytoken, &yylval, &yylloc, answer, errors, locations, lexer_param_ptr);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, answer, errors, locations, lexer_param_ptr);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, answer, errors, locations, lexer_param_ptr, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, answer, errors, locations, lexer_param_ptr);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, answer, errors, locations, lexer_param_ptr);
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



/* Line 2067 of yacc.c  */
#line 502 "parser.y"


int jq_parse(struct locfile* locations, block* answer) {
  struct lexer_param scanner;
  YY_BUFFER_STATE buf;
  jq_yylex_init_extra(0, &scanner.lexer);
  buf = jq_yy_scan_bytes(locations->data, locations->length, scanner.lexer);
  int errors = 0;
  *answer = gen_noop();
  yyparse(answer, &errors, locations, &scanner);
  jq_yy_delete_buffer(buf, scanner.lexer);
  jq_yylex_destroy(scanner.lexer);
  if (errors > 0) {
    block_free(*answer);
    *answer = gen_noop();
  }
  return errors;
}

int jq_parse_library(struct locfile* locations, block* answer) {
  int errs = jq_parse(locations, answer);
  if (errs) return errs;
  if (!block_has_only_binders(*answer, OP_IS_CALL_PSEUDO)) {
    locfile_locate(locations, UNKNOWN_LOCATION, "error: library should only have function definitions, not a main expression");
    return 1;
  }
  return 0;
}

