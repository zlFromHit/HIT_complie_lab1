/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntax.y"

#include "lex.yy.c"
#include "stdarg.h"
void print_point(struct node*);
void yyerror();
struct node* create_null_unit();
struct node* create_gram_unit(char* name,int num,...);
void preorder_tra(struct node* root,int depth);
int has_error = 0;


#line 83 "syntax.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_SEMI = 6,                       /* SEMI  */
  YYSYMBOL_COMMA = 7,                      /* COMMA  */
  YYSYMBOL_ASSIGNOP = 8,                   /* ASSIGNOP  */
  YYSYMBOL_RELOP = 9,                      /* RELOP  */
  YYSYMBOL_PLUS = 10,                      /* PLUS  */
  YYSYMBOL_MINUS = 11,                     /* MINUS  */
  YYSYMBOL_STAR = 12,                      /* STAR  */
  YYSYMBOL_DIV = 13,                       /* DIV  */
  YYSYMBOL_AND = 14,                       /* AND  */
  YYSYMBOL_OR = 15,                        /* OR  */
  YYSYMBOL_DOT = 16,                       /* DOT  */
  YYSYMBOL_NOT = 17,                       /* NOT  */
  YYSYMBOL_TYPE = 18,                      /* TYPE  */
  YYSYMBOL_LP = 19,                        /* LP  */
  YYSYMBOL_RP = 20,                        /* RP  */
  YYSYMBOL_LB = 21,                        /* LB  */
  YYSYMBOL_RB = 22,                        /* RB  */
  YYSYMBOL_LC = 23,                        /* LC  */
  YYSYMBOL_RC = 24,                        /* RC  */
  YYSYMBOL_STRUCT = 25,                    /* STRUCT  */
  YYSYMBOL_RETURN = 26,                    /* RETURN  */
  YYSYMBOL_IF = 27,                        /* IF  */
  YYSYMBOL_ELSE = 28,                      /* ELSE  */
  YYSYMBOL_WHILE = 29,                     /* WHILE  */
  YYSYMBOL_LOWER_THAN_ELSE = 30,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 31,                  /* $accept  */
  YYSYMBOL_Program = 32,                   /* Program  */
  YYSYMBOL_ExtDefList = 33,                /* ExtDefList  */
  YYSYMBOL_ExtDef = 34,                    /* ExtDef  */
  YYSYMBOL_ExtDecList = 35,                /* ExtDecList  */
  YYSYMBOL_Specifier = 36,                 /* Specifier  */
  YYSYMBOL_StructSpecifier = 37,           /* StructSpecifier  */
  YYSYMBOL_OptTag = 38,                    /* OptTag  */
  YYSYMBOL_Tag = 39,                       /* Tag  */
  YYSYMBOL_VarDec = 40,                    /* VarDec  */
  YYSYMBOL_FunDec = 41,                    /* FunDec  */
  YYSYMBOL_VarList = 42,                   /* VarList  */
  YYSYMBOL_ParamDec = 43,                  /* ParamDec  */
  YYSYMBOL_CompSt = 44,                    /* CompSt  */
  YYSYMBOL_StmtList = 45,                  /* StmtList  */
  YYSYMBOL_Stmt = 46,                      /* Stmt  */
  YYSYMBOL_DefList = 47,                   /* DefList  */
  YYSYMBOL_Def = 48,                       /* Def  */
  YYSYMBOL_DecList = 49,                   /* DecList  */
  YYSYMBOL_Dec = 50,                       /* Dec  */
  YYSYMBOL_Exp = 51,                       /* Exp  */
  YYSYMBOL_Args = 52                       /* Args  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   257

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  147

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   285


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    54,    54,    56,    57,    59,    60,    61,    62,    63,
      65,    66,    69,    70,    72,    73,    74,    76,    77,    79,
      82,    83,    84,    86,    87,    88,    89,    91,    92,    94,
      97,    98,   100,   101,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   116,   117,   119,   120,   122,
     123,   125,   126,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   152,   153
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT", "ID",
  "SEMI", "COMMA", "ASSIGNOP", "RELOP", "PLUS", "MINUS", "STAR", "DIV",
  "AND", "OR", "DOT", "NOT", "TYPE", "LP", "RP", "LB", "RB", "LC", "RC",
  "STRUCT", "RETURN", "IF", "ELSE", "WHILE", "LOWER_THAN_ELSE", "$accept",
  "Program", "ExtDefList", "ExtDef", "ExtDecList", "Specifier",
  "StructSpecifier", "OptTag", "Tag", "VarDec", "FunDec", "VarList",
  "ParamDec", "CompSt", "StmtList", "Stmt", "DefList", "Def", "DecList",
  "Dec", "Exp", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-58)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-18)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,   -58,    15,    29,   -58,    -4,   105,   -58,    20,    30,
     -58,   -58,   -58,    56,    40,   -58,    55,    -2,    52,    -4,
     -58,    53,    70,   -58,    72,    85,    -4,   -58,    72,    14,
      -4,    75,   -58,    72,     7,    83,   -58,   -58,   -58,     6,
      41,     5,    68,    84,    98,   -58,   -58,   -58,    86,   103,
     -58,    -4,   116,   -58,   -58,   -58,    89,    46,    46,    46,
      46,   108,   121,   -58,    16,    41,    88,    46,   133,   -58,
      72,   -58,   -58,   -58,   -58,   173,   236,    26,   104,   120,
      46,    46,   118,   -58,   -58,   137,   -58,    46,    46,    46,
      46,    46,    46,    46,    46,   149,    46,   210,   -58,   -58,
     135,   -58,   196,    21,   138,   -58,   153,   -58,   136,   152,
     -58,   -58,   210,   230,   236,   236,    26,    26,   170,   223,
     -58,    71,   -58,    46,   150,   -58,   -58,   -58,   151,    41,
     155,    41,   147,   -58,   -58,   -58,    41,   157,    41,   -58,
     -58,   160,    41,   -58,    41,   -58,   -58
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,    12,    18,     0,     2,     4,     0,    13,    19,     0,
      15,     1,     3,     0,    20,     9,     0,    10,     0,    46,
       6,     0,     0,     8,     0,     0,    46,     7,     0,     0,
      46,     0,    26,     0,     0,    28,     5,    20,    11,     0,
      33,    51,     0,    49,     0,    16,    45,    24,    29,     0,
      25,     0,     0,    22,    69,    70,    68,     0,     0,     0,
       0,     0,     0,    35,     0,    33,     0,     0,     0,    48,
       0,    14,    23,    27,    21,     0,    62,    63,     0,     0,
       0,     0,     0,    31,    32,     0,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    47,    50,
       0,    73,    76,     0,     0,    71,     0,    41,     0,     0,
      30,    34,    53,    56,    57,    58,    59,    60,    54,    55,
      67,     0,    65,     0,     0,    72,    61,    36,     0,     0,
       0,     0,     0,    74,    75,    64,     0,    42,     0,    44,
      66,    37,     0,    39,     0,    43,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -58,   -58,   190,   -58,   174,     4,   -58,   -58,   -58,   -22,
     -58,   146,   -58,   181,   148,    58,   -14,   -58,   131,   -58,
     -57,    91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    16,    28,     7,     9,    10,    17,
      18,    34,    35,    63,    64,    65,    29,    30,    42,    43,
      66,   103
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      76,    77,    78,    79,     6,    24,    41,    52,    49,     6,
      97,    48,    40,    67,     1,    44,    46,    82,   102,    25,
       8,     2,   124,   108,   109,    33,    25,    50,    53,    11,
     112,   113,   114,   115,   116,   117,   118,   119,    45,   121,
      83,   125,    95,   -17,    54,    55,    56,    96,    41,    54,
      55,    56,    57,    19,    31,    33,    22,    57,    58,    21,
      59,    23,    20,    58,    26,    59,   102,    60,    61,    68,
      62,     1,   132,    32,    69,    26,    36,    37,     2,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    39,    85,
      51,    70,    96,   133,    86,    47,    87,    88,    89,    90,
      91,    92,    93,    94,    95,   104,    13,    25,    75,    96,
      14,    15,    87,    88,    89,    90,    91,    92,    93,    94,
      95,   106,    71,    72,   105,    96,   107,    80,    87,    88,
      89,    90,    91,    92,    93,    94,    95,   128,    74,    98,
      81,    96,   110,   111,    87,    88,    89,    90,    91,    92,
      93,    94,    95,   130,   120,   122,   129,    96,   126,   127,
      87,    88,    89,    90,    91,    92,    93,    94,    95,   140,
     135,   136,   131,    96,   100,   138,    54,    55,    56,    88,
      89,    90,    91,    92,    57,   142,    95,   137,   144,   139,
      58,    96,    59,   101,   141,    12,   143,    73,    38,    27,
     145,    99,   146,   123,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    84,   134,     0,     0,    96,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     0,     0,     0,
       0,    96,    88,    89,    90,    91,    92,    93,     0,    95,
      89,    90,    91,    92,    96,     0,    95,     0,    91,    92,
       0,    96,    95,     0,     0,     0,     0,    96
};

static const yytype_int16 yycheck[] =
{
      57,    58,    59,    60,     0,     7,    28,     1,     1,     5,
      67,    33,    26,     8,    18,     1,    30,     1,    75,    21,
       5,    25,     1,    80,    81,    21,    21,    20,    22,     0,
      87,    88,    89,    90,    91,    92,    93,    94,    24,    96,
      24,    20,    16,    23,     3,     4,     5,    21,    70,     3,
       4,     5,    11,    23,     1,    51,     1,    11,    17,    19,
      19,     6,     6,    17,    23,    19,   123,    26,    27,     1,
      29,    18,     1,    20,     6,    23,     6,     5,    25,     8,
       9,    10,    11,    12,    13,    14,    15,    16,     3,     1,
       7,     7,    21,    22,     6,    20,     8,     9,    10,    11,
      12,    13,    14,    15,    16,     1,     1,    21,    19,    21,
       5,     6,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     1,    24,    20,    20,    21,     6,    19,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     1,    22,     6,
      19,    21,    24,     6,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     1,     5,    20,    20,    21,    20,     6,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    22,
      20,    20,    20,    21,     1,    20,     3,     4,     5,     9,
      10,    11,    12,    13,    11,    28,    16,   129,    28,   131,
      17,    21,    19,    20,   136,     5,   138,    51,    24,    18,
     142,    70,   144,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    65,   123,    -1,    -1,    21,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    21,     9,    10,    11,    12,    13,    14,    -1,    16,
      10,    11,    12,    13,    21,    -1,    16,    -1,    12,    13,
      -1,    21,    16,    -1,    -1,    -1,    -1,    21
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    25,    32,    33,    34,    36,    37,     5,    38,
      39,     0,    33,     1,     5,     6,    35,    40,    41,    23,
       6,    19,     1,     6,     7,    21,    23,    44,    36,    47,
      48,     1,    20,    36,    42,    43,     6,     5,    35,     3,
      47,    40,    49,    50,     1,    24,    47,    20,    40,     1,
      20,     7,     1,    22,     3,     4,     5,    11,    17,    19,
      26,    27,    29,    44,    45,    46,    51,     8,     1,     6,
       7,    24,    20,    42,    22,    19,    51,    51,    51,    51,
      19,    19,     1,    24,    45,     1,     6,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    21,    51,     6,    49,
       1,    20,    51,    52,     1,    20,     1,     6,    51,    51,
      24,     6,    51,    51,    51,    51,    51,    51,    51,    51,
       5,    51,    20,     7,     1,    20,    20,     6,     1,    20,
       1,    20,     1,    22,    52,    20,    20,    46,    20,    46,
      22,    46,    28,    46,    28,    46,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    34,    34,    34,
      35,    35,    36,    36,    37,    37,    37,    38,    38,    39,
      40,    40,    40,    41,    41,    41,    41,    42,    42,    43,
      44,    44,    45,    45,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    47,    47,    48,    48,    49,
      49,    50,    50,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    52,    52
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     4,     3,     3,     3,     2,
       1,     3,     1,     1,     6,     2,     5,     1,     0,     1,
       1,     5,     4,     5,     4,     4,     3,     3,     1,     2,
       5,     4,     2,     0,     3,     1,     4,     6,     8,     6,
       2,     3,     5,     7,     5,     2,     0,     4,     3,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     2,     2,     5,     4,     5,     3,     1,     1,
       1,     3,     4,     3,     4,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* Program: ExtDefList  */
#line 54 "syntax.y"
                      {int depth=0;(yyval.type_node) = create_gram_unit("Program",1,(yyvsp[0].type_node));if(has_error==0)preorder_tra((yyval.type_node),depth);}
#line 1234 "syntax.tab.c"
    break;

  case 3: /* ExtDefList: ExtDef ExtDefList  */
#line 56 "syntax.y"
                                {(yyval.type_node) = create_gram_unit("ExtDefList",2,(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1240 "syntax.tab.c"
    break;

  case 4: /* ExtDefList: %empty  */
#line 57 "syntax.y"
     {(yyval.type_node) = create_null_unit();}
#line 1246 "syntax.tab.c"
    break;

  case 5: /* ExtDef: Specifier ExtDecList error SEMI  */
#line 59 "syntax.y"
                                          {has_error = 1;}
#line 1252 "syntax.tab.c"
    break;

  case 6: /* ExtDef: Specifier error SEMI  */
#line 60 "syntax.y"
                          {has_error = 1;}
#line 1258 "syntax.tab.c"
    break;

  case 7: /* ExtDef: Specifier FunDec CompSt  */
#line 61 "syntax.y"
                             {(yyval.type_node) = create_gram_unit("ExtDef",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1264 "syntax.tab.c"
    break;

  case 8: /* ExtDef: Specifier ExtDecList SEMI  */
#line 62 "syntax.y"
                               {(yyval.type_node) = create_gram_unit("ExtDef",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1270 "syntax.tab.c"
    break;

  case 9: /* ExtDef: Specifier SEMI  */
#line 63 "syntax.y"
                    {(yyval.type_node) = create_gram_unit("ExtDef",2,(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1276 "syntax.tab.c"
    break;

  case 10: /* ExtDecList: VarDec  */
#line 65 "syntax.y"
                     {(yyval.type_node) = create_gram_unit("ExtDecList",1,(yyvsp[0].type_node));}
#line 1282 "syntax.tab.c"
    break;

  case 11: /* ExtDecList: VarDec COMMA ExtDecList  */
#line 66 "syntax.y"
                             {(yyval.type_node) = create_gram_unit("ExtDecList",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1288 "syntax.tab.c"
    break;

  case 12: /* Specifier: TYPE  */
#line 69 "syntax.y"
                  {(yyval.type_node) = create_gram_unit("Specifier",1,(yyvsp[0].type_node));}
#line 1294 "syntax.tab.c"
    break;

  case 13: /* Specifier: StructSpecifier  */
#line 70 "syntax.y"
                     {(yyval.type_node) = create_gram_unit("Specifier",1,(yyvsp[0].type_node));}
#line 1300 "syntax.tab.c"
    break;

  case 14: /* StructSpecifier: STRUCT OptTag LC DefList error RC  */
#line 72 "syntax.y"
                                                     {has_error = 1;}
#line 1306 "syntax.tab.c"
    break;

  case 15: /* StructSpecifier: STRUCT Tag  */
#line 73 "syntax.y"
                {(yyval.type_node) = create_gram_unit("StructSpecifier",2,(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1312 "syntax.tab.c"
    break;

  case 16: /* StructSpecifier: STRUCT OptTag LC DefList RC  */
#line 74 "syntax.y"
                                 {(yyval.type_node) = create_gram_unit("StructSpecifier",5,(yyvsp[-4].type_node),(yyvsp[-3].type_node),(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1318 "syntax.tab.c"
    break;

  case 17: /* OptTag: ID  */
#line 76 "syntax.y"
             {(yyval.type_node) = create_gram_unit("OptTag", 1, (yyvsp[0].type_node));}
#line 1324 "syntax.tab.c"
    break;

  case 18: /* OptTag: %empty  */
#line 77 "syntax.y"
     {(yyval.type_node) = create_null_unit();}
#line 1330 "syntax.tab.c"
    break;

  case 19: /* Tag: ID  */
#line 79 "syntax.y"
          {(yyval.type_node) = create_gram_unit("Tag",1,(yyvsp[0].type_node));}
#line 1336 "syntax.tab.c"
    break;

  case 20: /* VarDec: ID  */
#line 82 "syntax.y"
             {(yyval.type_node) = create_gram_unit("VarDec",1,(yyvsp[0].type_node));}
#line 1342 "syntax.tab.c"
    break;

  case 21: /* VarDec: VarDec LB INT error RB  */
#line 83 "syntax.y"
                            {has_error = 1;}
#line 1348 "syntax.tab.c"
    break;

  case 22: /* VarDec: VarDec LB INT RB  */
#line 84 "syntax.y"
                      {(yyval.type_node) = create_gram_unit("VarDec",4,(yyvsp[-3].type_node),(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1354 "syntax.tab.c"
    break;

  case 23: /* FunDec: ID LP VarList error RP  */
#line 86 "syntax.y"
                                 {has_error = 1;}
#line 1360 "syntax.tab.c"
    break;

  case 24: /* FunDec: ID LP error RP  */
#line 87 "syntax.y"
                    {has_error = 1;}
#line 1366 "syntax.tab.c"
    break;

  case 25: /* FunDec: ID LP VarList RP  */
#line 88 "syntax.y"
                      {(yyval.type_node) = create_gram_unit("FunDec",4,(yyvsp[-3].type_node),(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1372 "syntax.tab.c"
    break;

  case 26: /* FunDec: ID LP RP  */
#line 89 "syntax.y"
              {(yyval.type_node) = create_gram_unit("FunDec",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1378 "syntax.tab.c"
    break;

  case 27: /* VarList: ParamDec COMMA VarList  */
#line 91 "syntax.y"
                                  {(yyval.type_node) = create_gram_unit("VarList",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1384 "syntax.tab.c"
    break;

  case 28: /* VarList: ParamDec  */
#line 92 "syntax.y"
              {(yyval.type_node) = create_gram_unit("VarList",1,(yyvsp[0].type_node));}
#line 1390 "syntax.tab.c"
    break;

  case 29: /* ParamDec: Specifier VarDec  */
#line 94 "syntax.y"
                             {(yyval.type_node) = create_gram_unit("ParamDec",2,(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1396 "syntax.tab.c"
    break;

  case 30: /* CompSt: LC DefList StmtList error RC  */
#line 97 "syntax.y"
                                       {has_error = 1;}
#line 1402 "syntax.tab.c"
    break;

  case 31: /* CompSt: LC DefList StmtList RC  */
#line 98 "syntax.y"
                            {(yyval.type_node) = create_gram_unit("CompSt",4,(yyvsp[-3].type_node),(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1408 "syntax.tab.c"
    break;

  case 32: /* StmtList: Stmt StmtList  */
#line 100 "syntax.y"
                          {(yyval.type_node) = create_gram_unit("StmtList",2,(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1414 "syntax.tab.c"
    break;

  case 33: /* StmtList: %empty  */
#line 101 "syntax.y"
     {(yyval.type_node) = create_null_unit();}
#line 1420 "syntax.tab.c"
    break;

  case 34: /* Stmt: Exp error SEMI  */
#line 103 "syntax.y"
                       {has_error = 1;}
#line 1426 "syntax.tab.c"
    break;

  case 35: /* Stmt: CompSt  */
#line 104 "syntax.y"
            {(yyval.type_node) = create_gram_unit("Stmt",1,(yyvsp[0].type_node));}
#line 1432 "syntax.tab.c"
    break;

  case 36: /* Stmt: RETURN Exp error SEMI  */
#line 105 "syntax.y"
                           {has_error = 1;}
#line 1438 "syntax.tab.c"
    break;

  case 37: /* Stmt: IF LP Exp error RP Stmt  */
#line 106 "syntax.y"
                                                   {has_error = 1;}
#line 1444 "syntax.tab.c"
    break;

  case 38: /* Stmt: IF LP Exp error RP Stmt ELSE Stmt  */
#line 107 "syntax.y"
                                       {has_error = 1;}
#line 1450 "syntax.tab.c"
    break;

  case 39: /* Stmt: WHILE LP Exp error RP Stmt  */
#line 108 "syntax.y"
                                {has_error = 1;}
#line 1456 "syntax.tab.c"
    break;

  case 40: /* Stmt: Exp SEMI  */
#line 109 "syntax.y"
              {(yyval.type_node) = create_gram_unit("Stmt",2,(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1462 "syntax.tab.c"
    break;

  case 41: /* Stmt: RETURN Exp SEMI  */
#line 110 "syntax.y"
                     {(yyval.type_node) = create_gram_unit("Stmt",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1468 "syntax.tab.c"
    break;

  case 42: /* Stmt: IF LP Exp RP Stmt  */
#line 111 "syntax.y"
                                             {(yyval.type_node) = create_gram_unit("Stmt",5,(yyvsp[-4].type_node),(yyvsp[-3].type_node),(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1474 "syntax.tab.c"
    break;

  case 43: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 112 "syntax.y"
                                 {(yyval.type_node) = create_gram_unit("Stmt",7,(yyvsp[-6].type_node),(yyvsp[-5].type_node),(yyvsp[-4].type_node),(yyvsp[-3].type_node),(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1480 "syntax.tab.c"
    break;

  case 44: /* Stmt: WHILE LP Exp RP Stmt  */
#line 113 "syntax.y"
                          {(yyval.type_node) = create_gram_unit("Stmt",5,(yyvsp[-4].type_node),(yyvsp[-3].type_node),(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1486 "syntax.tab.c"
    break;

  case 45: /* DefList: Def DefList  */
#line 116 "syntax.y"
                       {(yyval.type_node) = create_gram_unit("DefList",2,(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1492 "syntax.tab.c"
    break;

  case 46: /* DefList: %empty  */
#line 117 "syntax.y"
     {(yyval.type_node) = create_null_unit();}
#line 1498 "syntax.tab.c"
    break;

  case 47: /* Def: Specifier DecList error SEMI  */
#line 119 "syntax.y"
                                    {has_error = 1;}
#line 1504 "syntax.tab.c"
    break;

  case 48: /* Def: Specifier DecList SEMI  */
#line 120 "syntax.y"
                            {(yyval.type_node) = create_gram_unit("Def",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1510 "syntax.tab.c"
    break;

  case 49: /* DecList: Dec  */
#line 122 "syntax.y"
               {(yyval.type_node) = create_gram_unit("DecList",1,(yyvsp[0].type_node));}
#line 1516 "syntax.tab.c"
    break;

  case 50: /* DecList: Dec COMMA DecList  */
#line 123 "syntax.y"
                       {(yyval.type_node) = create_gram_unit("DecList",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1522 "syntax.tab.c"
    break;

  case 51: /* Dec: VarDec  */
#line 125 "syntax.y"
              {(yyval.type_node) = create_gram_unit("Dec",1,(yyvsp[0].type_node));}
#line 1528 "syntax.tab.c"
    break;

  case 52: /* Dec: VarDec ASSIGNOP Exp  */
#line 126 "syntax.y"
                         {(yyval.type_node) = create_gram_unit("Dec",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1534 "syntax.tab.c"
    break;

  case 53: /* Exp: Exp ASSIGNOP Exp  */
#line 129 "syntax.y"
                        {(yyval.type_node) = create_gram_unit("Exp",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1540 "syntax.tab.c"
    break;

  case 54: /* Exp: Exp AND Exp  */
#line 130 "syntax.y"
                 {(yyval.type_node) = create_gram_unit("Exp",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1546 "syntax.tab.c"
    break;

  case 55: /* Exp: Exp OR Exp  */
#line 131 "syntax.y"
                {(yyval.type_node) = create_gram_unit("Exp",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1552 "syntax.tab.c"
    break;

  case 56: /* Exp: Exp RELOP Exp  */
#line 132 "syntax.y"
                   {(yyval.type_node) = create_gram_unit("Exp",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1558 "syntax.tab.c"
    break;

  case 57: /* Exp: Exp PLUS Exp  */
#line 133 "syntax.y"
                  {(yyval.type_node) = create_gram_unit("Exp",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1564 "syntax.tab.c"
    break;

  case 58: /* Exp: Exp MINUS Exp  */
#line 134 "syntax.y"
                   {(yyval.type_node) = create_gram_unit("Exp",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1570 "syntax.tab.c"
    break;

  case 59: /* Exp: Exp STAR Exp  */
#line 135 "syntax.y"
                  {(yyval.type_node) = create_gram_unit("Exp",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1576 "syntax.tab.c"
    break;

  case 60: /* Exp: Exp DIV Exp  */
#line 136 "syntax.y"
                 {(yyval.type_node) = create_gram_unit("Exp",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1582 "syntax.tab.c"
    break;

  case 61: /* Exp: LP Exp error RP  */
#line 137 "syntax.y"
                     {has_error = 1;}
#line 1588 "syntax.tab.c"
    break;

  case 62: /* Exp: MINUS Exp  */
#line 138 "syntax.y"
               {(yyval.type_node) = create_gram_unit("Exp",2,(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1594 "syntax.tab.c"
    break;

  case 63: /* Exp: NOT Exp  */
#line 139 "syntax.y"
             {(yyval.type_node) = create_gram_unit("Exp",2,(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1600 "syntax.tab.c"
    break;

  case 64: /* Exp: ID LP Args error RP  */
#line 140 "syntax.y"
                         {has_error = 1;}
#line 1606 "syntax.tab.c"
    break;

  case 65: /* Exp: ID LP error RP  */
#line 141 "syntax.y"
                    {has_error = 1;}
#line 1612 "syntax.tab.c"
    break;

  case 66: /* Exp: Exp LB Exp error RB  */
#line 142 "syntax.y"
                         {has_error = 1;}
#line 1618 "syntax.tab.c"
    break;

  case 67: /* Exp: Exp DOT ID  */
#line 143 "syntax.y"
                {(yyval.type_node) = create_gram_unit("Exp",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1624 "syntax.tab.c"
    break;

  case 68: /* Exp: ID  */
#line 144 "syntax.y"
        {(yyval.type_node) = create_gram_unit("Exp",1,(yyvsp[0].type_node));}
#line 1630 "syntax.tab.c"
    break;

  case 69: /* Exp: INT  */
#line 145 "syntax.y"
         {(yyval.type_node) = create_gram_unit("Exp",1,(yyvsp[0].type_node));}
#line 1636 "syntax.tab.c"
    break;

  case 70: /* Exp: FLOAT  */
#line 146 "syntax.y"
           {(yyval.type_node) = create_gram_unit("Exp",1,(yyvsp[0].type_node));}
#line 1642 "syntax.tab.c"
    break;

  case 71: /* Exp: LP Exp RP  */
#line 147 "syntax.y"
               {(yyval.type_node) = create_gram_unit("Exp",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1648 "syntax.tab.c"
    break;

  case 72: /* Exp: ID LP Args RP  */
#line 148 "syntax.y"
                   {(yyval.type_node) = create_gram_unit("Exp",4,(yyvsp[-3].type_node),(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1654 "syntax.tab.c"
    break;

  case 73: /* Exp: ID LP RP  */
#line 149 "syntax.y"
              {(yyval.type_node) = create_gram_unit("Exp",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1660 "syntax.tab.c"
    break;

  case 74: /* Exp: Exp LB Exp RB  */
#line 150 "syntax.y"
                   {(yyval.type_node) = create_gram_unit("Exp",4,(yyvsp[-3].type_node),(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1666 "syntax.tab.c"
    break;

  case 75: /* Args: Exp COMMA Args  */
#line 152 "syntax.y"
                       {(yyval.type_node) = create_gram_unit("Args",3,(yyvsp[-2].type_node),(yyvsp[-1].type_node),(yyvsp[0].type_node));}
#line 1672 "syntax.tab.c"
    break;

  case 76: /* Args: Exp  */
#line 153 "syntax.y"
         {(yyval.type_node) = create_gram_unit("Args",1,(yyvsp[0].type_node));}
#line 1678 "syntax.tab.c"
    break;


#line 1682 "syntax.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 155 "syntax.y"

void yyerror(){
    printf("Error type B at line %d: syntax error\n",yylineno);
}
/* 空产生式 */
struct node* create_null_unit(){
    struct node* res = (struct node*)malloc(sizeof(struct node));
    res->is_null = 1;
    res->id = "null";
    res->value = NULL;
    res->line_no = 0;
    res->child_nodes = NULL;
    res->right_brother = NULL;
    return res;
}
/* 创建非终结符节点 */
struct node* create_gram_unit(char* name,int num,...){
    struct node* parent = (struct node*)malloc(sizeof(struct node));
    parent->is_null = 1;
    parent->line_no = 0;
    parent->id = name;
    parent->value = NULL;
    parent->right_brother = NULL;
    va_list valist;
    va_start(valist, num);
    struct node* index = va_arg(valist, struct node*);
    struct node* first_child = index;
    if((index->is_null)==0){
        parent->is_null=0;//如果子结点有非空的那么父节点非空
        if(parent->line_no == 0)parent->line_no = index->line_no;
        //父节点首词素行号等于第一个非空节点首词素行号
    }
    for(int i=0;i<num-1;i++){
    	if((index->is_null)==0){
    	    parent->is_null=0;//如果子结点有非空的那么父节点非空
    	    if(parent->line_no == 0)parent->line_no = index->line_no;
    	    //父节点首词素行号等于第一个非空节点首词素行号
    	}
    	index->right_brother = va_arg(valist, struct node*);
    	index = index->right_brother;
    }
    parent->child_nodes = first_child;
    return parent;
}
/* 先序遍历 */
void preorder_tra(struct node* root,int depth){
    if(root==NULL)return;
    int temp = depth;
    if(strcmp(root->id,"null")!=0){
    	for(int i=0;i<temp;i++){
            printf("  ");
    	}
    	printf("%s",root->id);
    	if(strcmp(root->id,"ID")==0||strcmp(root->id,"INT")==0||strcmp(root->id,"FLOAT")==0)printf(": %s",root->value);
    	else printf(" (%d)",root->line_no);
    	printf("\n");
    }
    if(root->child_nodes){
        temp++;
        preorder_tra(root->child_nodes,temp);
        temp--;
    }
    preorder_tra(root->right_brother,temp);
}
