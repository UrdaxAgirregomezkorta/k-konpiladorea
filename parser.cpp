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
#line 1 "parser.y"

   #include <stdio.h>
   #include <iostream>
   #include <vector>
   #include <string>

   #include "Lag.h"
   #include "Kodea.h"
   Kodea kodea;

   using namespace std; 
   extern int yyerrornum;
   extern int yylex();
   extern int yylineno;
   extern char *yytext;
   void yyerror (const char *msg) {
     printf("line %d: %s at '%s'\n", yylineno, msg, yytext) ;
     yyerrornum++;
   }


#line 93 "parser.cpp"

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

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TID = 3,                        /* TID  */
  YYSYMBOL_TINT_CNST = 4,                  /* TINT_CNST  */
  YYSYMBOL_TFLOAT_CNST = 5,                /* TFLOAT_CNST  */
  YYSYMBOL_RPACK = 6,                      /* RPACK  */
  YYSYMBOL_RFUNC = 7,                      /* RFUNC  */
  YYSYMBOL_RMAIN = 8,                      /* RMAIN  */
  YYSYMBOL_RVAR = 9,                       /* RVAR  */
  YYSYMBOL_RDEF = 10,                      /* RDEF  */
  YYSYMBOL_RLET = 11,                      /* RLET  */
  YYSYMBOL_RIN = 12,                       /* RIN  */
  YYSYMBOL_RIF = 13,                       /* RIF  */
  YYSYMBOL_RFOV = 14,                      /* RFOV  */
  YYSYMBOL_RDO = 15,                       /* RDO  */
  YYSYMBOL_RUNTIL = 16,                    /* RUNTIL  */
  YYSYMBOL_RELSE = 17,                     /* RELSE  */
  YYSYMBOL_RBREAK = 18,                    /* RBREAK  */
  YYSYMBOL_RNEXT = 19,                     /* RNEXT  */
  YYSYMBOL_RREAD = 20,                     /* RREAD  */
  YYSYMBOL_RPRINT = 21,                    /* RPRINT  */
  YYSYMBOL_RINT = 22,                      /* RINT  */
  YYSYMBOL_RFLOAT = 23,                    /* RFLOAT  */
  YYSYMBOL_RFOR = 24,                      /* RFOR  */
  YYSYMBOL_RTO = 25,                       /* RTO  */
  YYSYMBOL_TRBRACE = 26,                   /* TRBRACE  */
  YYSYMBOL_TLBRACE = 27,                   /* TLBRACE  */
  YYSYMBOL_TASSIG = 28,                    /* TASSIG  */
  YYSYMBOL_TINITASSIG = 29,                /* TINITASSIG  */
  YYSYMBOL_TSEMIC = 30,                    /* TSEMIC  */
  YYSYMBOL_TTWOP = 31,                     /* TTWOP  */
  YYSYMBOL_TAMP = 32,                      /* TAMP  */
  YYSYMBOL_TMUL = 33,                      /* TMUL  */
  YYSYMBOL_TSUB = 34,                      /* TSUB  */
  YYSYMBOL_TCEQ = 35,                      /* TCEQ  */
  YYSYMBOL_TCGE = 36,                      /* TCGE  */
  YYSYMBOL_TCGT = 37,                      /* TCGT  */
  YYSYMBOL_TCLE = 38,                      /* TCLE  */
  YYSYMBOL_TCLT = 39,                      /* TCLT  */
  YYSYMBOL_TCNE = 40,                      /* TCNE  */
  YYSYMBOL_TCOMMA = 41,                    /* TCOMMA  */
  YYSYMBOL_TDIVE = 42,                     /* TDIVE  */
  YYSYMBOL_TDIVO = 43,                     /* TDIVO  */
  YYSYMBOL_TLPAR = 44,                     /* TLPAR  */
  YYSYMBOL_TRPAR = 45,                     /* TRPAR  */
  YYSYMBOL_TSUM = 46,                      /* TSUM  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_start = 48,                     /* start  */
  YYSYMBOL_49_1 = 49,                      /* $@1  */
  YYSYMBOL_mblock = 50,                    /* mblock  */
  YYSYMBOL_block = 51,                     /* block  */
  YYSYMBOL_bl_decl = 52,                   /* bl_decl  */
  YYSYMBOL_decl = 53,                      /* decl  */
  YYSYMBOL_id_list = 54,                   /* id_list  */
  YYSYMBOL_type = 55,                      /* type  */
  YYSYMBOL_subprogs = 56,                  /* subprogs  */
  YYSYMBOL_subprog = 57,                   /* subprog  */
  YYSYMBOL_58_2 = 58,                      /* $@2  */
  YYSYMBOL_arguments = 59,                 /* arguments  */
  YYSYMBOL_par_list = 60,                  /* par_list  */
  YYSYMBOL_61_3 = 61,                      /* $@3  */
  YYSYMBOL_par_list_r = 62,                /* par_list_r  */
  YYSYMBOL_63_4 = 63,                      /* $@4  */
  YYSYMBOL_par_class = 64,                 /* par_class  */
  YYSYMBOL_statements = 65,                /* statements  */
  YYSYMBOL_statement = 66,                 /* statement  */
  YYSYMBOL_var_id_array = 67,              /* var_id_array  */
  YYSYMBOL_expression = 68,                /* expression  */
  YYSYMBOL_M = 69,                         /* M  */
  YYSYMBOL_N = 70                          /* N  */
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  141

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    77,    77,    77,    85,    94,   103,   104,   107,   108,
     110,   111,   113,   114,   116,   117,   119,   119,   121,   122,
     124,   124,   126,   126,   127,   129,   130,   132,   137,   139,
     144,   152,   158,   168,   172,   177,   182,   188,   202,   207,
     217,   226,   235,   244,   254,   264,   271,   278,   285,   292,
     299,   304,   309,   314,   323,   324
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
  "\"end of file\"", "error", "\"invalid token\"", "TID", "TINT_CNST",
  "TFLOAT_CNST", "RPACK", "RFUNC", "RMAIN", "RVAR", "RDEF", "RLET", "RIN",
  "RIF", "RFOV", "RDO", "RUNTIL", "RELSE", "RBREAK", "RNEXT", "RREAD",
  "RPRINT", "RINT", "RFLOAT", "RFOR", "RTO", "TRBRACE", "TLBRACE",
  "TASSIG", "TINITASSIG", "TSEMIC", "TTWOP", "TAMP", "TMUL", "TSUB",
  "TCEQ", "TCGE", "TCGT", "TCLE", "TCLT", "TCNE", "TCOMMA", "TDIVE",
  "TDIVO", "TLPAR", "TRPAR", "TSUM", "$accept", "start", "$@1", "mblock",
  "block", "bl_decl", "decl", "id_list", "type", "subprogs", "subprog",
  "$@2", "arguments", "par_list", "$@3", "par_list_r", "$@4", "par_class",
  "statements", "statement", "var_id_array", "expression", "M", "N", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-54)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,     6,    16,   -54,   -54,   -26,   -23,    33,    20,   -54,
     -54,   -54,    -4,    12,    19,   -54,    20,   -12,    44,   -54,
     -54,    21,   -54,   -54,   -54,   -54,    45,   -12,    47,   -54,
     -54,   -54,   -54,    46,    25,   -54,     1,   -54,   -54,    50,
     -54,    30,    31,    73,   -54,   -54,    54,    20,    33,   -54,
     -54,   -54,     1,   140,    33,    33,     1,    48,    80,     1,
      74,   -54,     1,    27,    42,   -54,   112,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,    33,   -54,
      62,   -54,   140,   -54,    49,   126,     1,    98,    58,   -54,
     -54,   -54,   -13,   168,   154,   154,   154,   154,   168,   -54,
     -54,   -13,   -54,   -54,   -54,    75,    63,    69,    77,    84,
     -54,   -54,   -12,   -54,    82,     1,   -54,   -54,   -54,     1,
     -54,   -54,   140,   140,    83,    97,    33,    20,   -54,   -54,
     -54,    40,    33,   -54,    58,   -54,   -12,   -54,   -54,    83,
     -54
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     0,     7,     0,     3,
      55,    11,     0,     0,     0,    54,     0,     0,     0,    15,
       6,     0,    12,    13,     9,    10,    54,     0,     0,    14,
      28,     8,    16,     0,    19,    38,     0,    54,    54,     0,
      54,     0,     0,     0,    54,    27,     0,     0,     7,    50,
      51,    52,     0,    54,     7,     7,     0,     0,     0,     0,
       0,     4,     0,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,    54,
       0,    54,    54,    34,     0,     0,     0,     0,    26,    18,
      53,    47,    46,    39,    42,    40,    43,    41,    44,    48,
      49,    45,    54,    31,    28,     0,     0,     0,     0,     0,
      29,    25,     0,    30,     0,     0,    33,    35,    36,     0,
      20,     5,    55,    54,    24,     0,     7,     0,    21,    54,
      54,     0,     7,    37,    26,    54,     0,    32,    22,    24,
      23
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -54,   -54,   -54,    67,   -53,     0,   -54,   -16,   -24,   -54,
     -54,   -54,   -54,   -54,   -54,   -47,   -54,   -18,    35,   -54,
      71,   -35,   -25,     3
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     5,     9,    79,    80,    12,    13,    24,    26,
      29,    34,    48,    64,   124,   128,   139,   112,    33,    45,
      46,    53,    20,    14
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    30,    81,    31,    49,    50,    51,    10,    15,     1,
      22,    23,    54,    55,     3,    57,     4,    66,     6,    61,
      67,    82,     7,    11,    85,   102,    16,    87,    78,    75,
      76,    63,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    17,     8,    52,    19,    25,    10,    35,
      32,   109,    27,    18,   103,    28,   105,   106,    88,    36,
      37,    38,    18,    56,    39,    40,    41,    42,    18,    47,
      43,   134,    44,   130,    58,    59,    60,   113,    83,   135,
     122,    18,    62,    35,   123,    35,    86,    89,   120,   104,
     111,   115,   140,   116,   107,    36,    37,    38,   126,   117,
      39,    40,    41,    42,   132,   133,    43,   118,   121,   119,
     137,   131,   138,   127,   129,    65,   136,    67,    68,    69,
      70,    71,    72,    73,    74,   125,    75,    76,   110,    84,
      77,    67,    68,    69,    70,    71,    72,    73,    74,   114,
      75,    76,     0,     0,    77,    67,    68,    69,    70,    71,
      72,    73,    74,     0,    75,    76,     0,    90,    77,    67,
      68,    69,    70,    71,    72,    73,    74,     0,    75,    76,
       0,   108,    77,    67,    68,    69,    70,    71,    72,    73,
      74,     0,    75,    76,     0,     0,    77,    67,    68,    69,
      -1,    -1,    -1,    -1,    74,     0,    75,    76,     0,     0,
      77,    67,    68,    -1,     0,     0,     0,     0,    -1,     0,
      75,    76,     0,     0,    77
};

static const yytype_int16 yycheck[] =
{
      16,    26,    55,    27,     3,     4,     5,     7,    12,    10,
      22,    23,    37,    38,     8,    40,     0,    52,    44,    44,
      33,    56,    45,     3,    59,    78,    30,    62,    53,    42,
      43,    47,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    31,    11,    44,    27,     3,    48,     3,
       3,    86,    31,    41,    79,    10,    81,    82,    31,    13,
      14,    15,    41,    13,    18,    19,    20,    21,    41,    44,
      24,    31,    26,   126,    44,    44,     3,   102,    30,   132,
     115,    41,    28,     3,   119,     3,    12,    45,   112,    27,
      32,    16,   139,    30,    45,    13,    14,    15,   123,    30,
      18,    19,    20,    21,   129,   130,    24,    30,    26,    25,
     135,   127,   136,    30,    17,    48,   134,    33,    34,    35,
      36,    37,    38,    39,    40,   122,    42,    43,    30,    58,
      46,    33,    34,    35,    36,    37,    38,    39,    40,   104,
      42,    43,    -1,    -1,    46,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    -1,    45,    46,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      -1,    45,    46,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    -1,    -1,    46,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    -1,    -1,
      46,    33,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,
      42,    43,    -1,    -1,    46
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    48,     8,     0,    49,    44,    45,    11,    50,
      52,     3,    53,    54,    70,    12,    30,    31,    41,    27,
      69,    54,    22,    23,    55,     3,    56,    31,    10,    57,
      69,    55,     3,    65,    58,     3,    13,    14,    15,    18,
      19,    20,    21,    24,    26,    66,    67,    44,    59,     3,
       4,     5,    44,    68,    69,    69,    13,    69,    44,    44,
       3,    69,    28,    54,    60,    50,    68,    33,    34,    35,
      36,    37,    38,    39,    40,    42,    43,    46,    69,    51,
      52,    51,    68,    30,    67,    68,    12,    68,    31,    45,
      45,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    51,    69,    27,    69,    69,    45,    45,    68,
      30,    32,    64,    69,    65,    16,    30,    30,    30,    25,
      55,    26,    68,    68,    61,    70,    69,    30,    62,    17,
      51,    54,    69,    69,    31,    51,    64,    69,    55,    63,
      62
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    49,    48,    50,    51,    52,    52,    53,    53,
      54,    54,    55,    55,    56,    56,    58,    57,    59,    59,
      61,    60,    63,    62,    62,    64,    64,    65,    65,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    67,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    69,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     6,     8,     4,     4,     0,     5,     3,
       3,     1,     1,     1,     2,     0,     0,     5,     3,     0,
       0,     6,     0,     7,     0,     1,     0,     2,     0,     4,
       5,     4,    11,     5,     3,     5,     5,     9,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     3,     0,     0
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
  case 2: /* $@1: %empty  */
#line 77 "parser.y"
                   {kodea.agGehitu("prog main"); }
#line 1252 "parser.cpp"
    break;

  case 3: /* start: RDEF RMAIN $@1 TLPAR TRPAR mblock  */
#line 78 "parser.y"
         {
         kodea.agGehitu("halt");
	       kodea.idatzi() ; 
          cout << "Ondo bukatu da" << endl;
        }
#line 1262 "parser.cpp"
    break;

  case 4: /* mblock: bl_decl N TLBRACE subprogs M statements TRBRACE M  */
#line 86 "parser.y"
 {
      kodea.agOsatu(*(yyvsp[-6].next), (yyvsp[-3].erref));
      kodea.agOsatu((yyvsp[-2].s)->exitL, (yyvsp[0].erref));
      delete (yyvsp[-6].next);
      delete (yyvsp[-2].s);
    }
#line 1273 "parser.cpp"
    break;

  case 5: /* block: bl_decl TLBRACE statements TRBRACE  */
#line 95 "parser.y"
         {   (yyval.s) = new intLista();
      (yyval.s)->continueL = (yyvsp[-1].s)->continueL;
      (yyval.s)->exitL = (yyvsp[-1].s)->exitL;  // Aquí estaba el error
      delete (yyvsp[-1].s);

           }
#line 1284 "parser.cpp"
    break;

  case 8: /* decl: decl TSEMIC id_list TTWOP type  */
#line 107 "parser.y"
                                      {kodea.erazagupenakGehitu(*(yyvsp[-2].izenak), *(yyvsp[0].izena)); delete (yyvsp[-2].izenak); delete (yyvsp[0].izena); }
#line 1290 "parser.cpp"
    break;

  case 9: /* decl: id_list TTWOP type  */
#line 108 "parser.y"
                              {kodea.erazagupenakGehitu(*(yyvsp[-2].izenak), *(yyvsp[0].izena)); delete (yyvsp[-2].izenak); delete (yyvsp[0].izena); }
#line 1296 "parser.cpp"
    break;

  case 10: /* id_list: id_list TCOMMA TID  */
#line 110 "parser.y"
                             { (yyval.izenak) = (yyvsp[-2].izenak) ; (yyval.izenak)->push_back(*(yyvsp[0].izena)); }
#line 1302 "parser.cpp"
    break;

  case 11: /* id_list: TID  */
#line 111 "parser.y"
               { (yyval.izenak) = new IdLista; (yyval.izenak)->push_back(*(yyvsp[0].izena)); }
#line 1308 "parser.cpp"
    break;

  case 12: /* type: RINT  */
#line 113 "parser.y"
            { (yyval.izena) = new string("int"); }
#line 1314 "parser.cpp"
    break;

  case 13: /* type: RFLOAT  */
#line 114 "parser.y"
                   { (yyval.izena) = new string("real"); }
#line 1320 "parser.cpp"
    break;

  case 16: /* $@2: %empty  */
#line 119 "parser.y"
                   { kodea.agGehitu("proc " + *(yyvsp[0].izena)); }
#line 1326 "parser.cpp"
    break;

  case 17: /* subprog: RDEF TID $@2 arguments mblock  */
#line 119 "parser.y"
                                                                              {kodea.agGehitu("endproc " + *(yyvsp[-3].izena)); delete (yyvsp[-3].izena); }
#line 1332 "parser.cpp"
    break;

  case 20: /* $@3: %empty  */
#line 124 "parser.y"
                                        { kodea.parametroakGehitu(*(yyvsp[-3].izenak), *(yyvsp[-1].izena), *(yyvsp[0].izena)); delete (yyvsp[-3].izenak); delete (yyvsp[-1].izena); delete (yyvsp[0].izena); }
#line 1338 "parser.cpp"
    break;

  case 22: /* $@4: %empty  */
#line 126 "parser.y"
                                                 {kodea.parametroakGehitu(*(yyvsp[-3].izenak), *(yyvsp[-1].izena), *(yyvsp[0].izena)); delete (yyvsp[-3].izenak); delete (yyvsp[-1].izena); delete (yyvsp[0].izena); }
#line 1344 "parser.cpp"
    break;

  case 25: /* par_class: TAMP  */
#line 129 "parser.y"
                 { (yyval.izena) = new string("ref"); }
#line 1350 "parser.cpp"
    break;

  case 26: /* par_class: %empty  */
#line 130 "parser.y"
           { (yyval.izena) = new string("val"); }
#line 1356 "parser.cpp"
    break;

  case 27: /* statements: statements statement  */
#line 133 "parser.y"
            {(yyval.s) = new intLista;
             (yyval.s)->continueL = bildu((yyvsp[-1].s)->continueL, (yyvsp[0].s)->continueL);
             (yyval.s)->exitL = bildu((yyvsp[-1].s)->exitL, (yyvsp[0].s)->exitL);
             delete (yyvsp[-1].s); delete (yyvsp[0].s);}
#line 1365 "parser.cpp"
    break;

  case 28: /* statements: %empty  */
#line 137 "parser.y"
            {(yyval.s) = new intLista; }
#line 1371 "parser.cpp"
    break;

  case 29: /* statement: var_id_array TASSIG expression TSEMIC  */
#line 140 "parser.y"
         { (yyval.s) = new intLista;
              kodea.agGehitu(*(yyvsp[-3].izena) + ":=" + (yyvsp[-1].e)->izena);
              delete (yyvsp[-3].izena); delete (yyvsp[-1].e);
             }
#line 1380 "parser.cpp"
    break;

  case 30: /* statement: RIF expression M block M  */
#line 145 "parser.y"
         { (yyval.s) = new intLista;
          kodea.agOsatu((yyvsp[-3].e)->trueL, (yyvsp[-2].erref));
          kodea.agOsatu((yyvsp[-3].e)->falseL, (yyvsp[0].erref));
          kodea.agOsatu((yyvsp[-1].s)->continueL, (yyvsp[0].erref));
          kodea.agOsatu((yyvsp[-1].s)->exitL, (yyvsp[0].erref));
          delete (yyvsp[-1].s); delete (yyvsp[-3].e);
          }
#line 1392 "parser.cpp"
    break;

  case 31: /* statement: RFOV M block M  */
#line 153 "parser.y"
         { (yyval.s) = new intLista;
           kodea.agOsatu((yyvsp[-1].s)->continueL, (yyvsp[-2].erref));
           kodea.agOsatu((yyvsp[-1].s)->exitL, (yyvsp[0].erref));
           delete (yyvsp[-1].s);
          }
#line 1402 "parser.cpp"
    break;

  case 32: /* statement: RDO M block M RUNTIL expression N RELSE M block M  */
#line 159 "parser.y"
          {(yyval.s) = new intLista;
            kodea.agOsatu((yyvsp[-5].e)->trueL, (yyvsp[0].erref));
            kodea.agOsatu((yyvsp[-5].e)->falseL, (yyvsp[-9].erref));
            kodea.agOsatu((yyvsp[-4].next)->next, (yyvsp[0].erref));
            (yyvsp[-9].s)->continueL = bildu((yyvsp[-9].s)->continueL, (yyvsp[-1].s)->continueL);
            (yyvsp[-9].s)->exitL = bildu((yyvsp[-9].s)->exitL, (yyvsp[-1].s)->exitL);
            (yyval.s)->continueL = (yyvsp[-5].e)->falseL;
            (yyval.s)->exitL = (yyvsp[-5].e)->trueL;
            }
#line 1416 "parser.cpp"
    break;

  case 33: /* statement: RBREAK RIF expression M TSEMIC  */
#line 169 "parser.y"
         { (yyval.s) = new intLista;
           kodea.agOsatu((yyvsp[-2].e)->falseL, (yyvsp[-1].erref)); 
           delete (yyvsp[-2].e); }
#line 1424 "parser.cpp"
    break;

  case 34: /* statement: RNEXT M TSEMIC  */
#line 173 "parser.y"
         { (yyval.s) = new intLista;
            kodea.agOsatu((yyval.s)->continueL, kodea.lortuErref());
            kodea.agGehitu("goto");
            }
#line 1433 "parser.cpp"
    break;

  case 35: /* statement: RREAD TLPAR var_id_array TRPAR TSEMIC  */
#line 178 "parser.y"
         {
            (yyval.s) = new intLista;
            kodea.agGehitu("read " + *(yyvsp[-2].izena));
            }
#line 1442 "parser.cpp"
    break;

  case 36: /* statement: RPRINT TLPAR expression TRPAR TSEMIC  */
#line 183 "parser.y"
         {
            (yyval.s) = new intLista;
            kodea.agGehitu("write " + *(yyvsp[-2].izena));
           }
#line 1451 "parser.cpp"
    break;

  case 37: /* statement: RFOR TID RIN expression RTO expression M block M  */
#line 189 "parser.y"
             { (yyval.e) = new adi;
               kodea.agGehitu(*(yyvsp[-7].izena) + ":=" + (yyvsp[-5].e)->izena);
               kodea.agGehitu("if " + *(yyvsp[-7].izena) + " > " + (yyvsp[-3].e)->izena + " goto") ;
               (yyval.s) = new intLista;
               (yyval.s)->exitL = (yyvsp[-5].e)->falseL;
               kodea.agOsatu((yyvsp[-1].s)->continueL, (yyvsp[0].erref));
               kodea.agOsatu((yyvsp[-1].s)->exitL, (yyvsp[0].erref));
               kodea.agGehitu(*(yyvsp[-7].izena) + ":=" + to_string(1));
               kodea.agGehitu("goto" + to_string((yyvsp[-2].erref)) );
               kodea.agOsatu((yyval.s)->continueL, (yyvsp[0].erref));
               delete (yyvsp[-5].e); delete (yyvsp[-3].e); delete (yyvsp[-1].s);
             }
#line 1468 "parser.cpp"
    break;

  case 38: /* var_id_array: TID  */
#line 203 "parser.y"
         {
         	(yyval.izena)= (yyvsp[0].izena); 
      	 }
#line 1476 "parser.cpp"
    break;

  case 39: /* expression: expression TCEQ expression  */
#line 208 "parser.y"
         {  
	            (yyval.e) = new adi; 
	            (yyval.e)->trueL.push_back(kodea.lortuErref()) ; 
 	            (yyval.e)->falseL.push_back(kodea.lortuErref()+1) ;
	            kodea.agGehitu("if " + (yyvsp[-2].e)->izena + " == " + (yyvsp[0].e)->izena + " goto") ;
	            kodea.agGehitu("goto") ;
               delete (yyvsp[-2].e); delete (yyvsp[0].e);
   
            }
#line 1490 "parser.cpp"
    break;

  case 40: /* expression: expression TCGT expression  */
#line 218 "parser.y"
         {
	         (yyval.e) = new adi; 
	         (yyval.e)->trueL.push_back(kodea.lortuErref()) ; 
 	         (yyval.e)->falseL.push_back(kodea.lortuErref()+1) ;
	         kodea.agGehitu("if " + (yyvsp[-2].e)->izena + " > " + (yyvsp[0].e)->izena + " goto") ;
	         kodea.agGehitu("goto") ;
            delete (yyvsp[-2].e); delete (yyvsp[0].e); 
          }
#line 1503 "parser.cpp"
    break;

  case 41: /* expression: expression TCLT expression  */
#line 227 "parser.y"
         {
	       (yyval.e) = new adi; 
	       (yyval.e)->trueL.push_back(kodea.lortuErref()) ; 
 	       (yyval.e)->falseL.push_back(kodea.lortuErref()+1) ;
	       kodea.agGehitu("if " + (yyvsp[-2].e)->izena + " < " + (yyvsp[0].e)->izena + " goto") ;
	       kodea.agGehitu("goto") ;
          delete (yyvsp[-2].e); delete (yyvsp[0].e); 
         }
#line 1516 "parser.cpp"
    break;

  case 42: /* expression: expression TCGE expression  */
#line 236 "parser.y"
         {
	         (yyval.e) = new adi; 
	         (yyval.e)->trueL.push_back(kodea.lortuErref()) ; 
 	         (yyval.e)->falseL.push_back(kodea.lortuErref()+1) ;
	         kodea.agGehitu("if " + (yyvsp[-2].e)->izena + " >= " + (yyvsp[0].e)->izena + " goto") ;
	         kodea.agGehitu("goto") ;
            delete (yyvsp[-2].e); delete (yyvsp[0].e); 
          }
#line 1529 "parser.cpp"
    break;

  case 43: /* expression: expression TCLE expression  */
#line 245 "parser.y"
         {
	         (yyval.e) = new adi; 
	         (yyval.e)->trueL.push_back(kodea.lortuErref()) ; 
 	         (yyval.e)->falseL.push_back(kodea.lortuErref()+1) ;
	         kodea.agGehitu("if " + (yyvsp[-2].e)->izena + " <= " + (yyvsp[0].e)->izena + " goto") ;
	         kodea.agGehitu("goto") ;
            delete (yyvsp[-2].e); delete (yyvsp[0].e); 
            
         }
#line 1543 "parser.cpp"
    break;

  case 44: /* expression: expression TCNE expression  */
#line 255 "parser.y"
         {
	         (yyval.e) = new adi; 
	         (yyval.e)->trueL.push_back(kodea.lortuErref()) ; 
 	         (yyval.e)->falseL.push_back(kodea.lortuErref()+1) ;
	         kodea.agGehitu("if " + (yyvsp[-2].e)->izena + " /= " + (yyvsp[0].e)->izena + " goto") ;
	         kodea.agGehitu("goto") ;
            delete (yyvsp[-2].e); delete (yyvsp[0].e); 
            
          }
#line 1557 "parser.cpp"
    break;

  case 45: /* expression: expression TSUM expression  */
#line 265 "parser.y"
         {
 	         (yyval.e) = new adi; 
 	         (yyval.e)->izena = kodea.idBerria() ;
 	         kodea.agGehitu((yyval.e)->izena + " := " + (yyvsp[-2].e)->izena + " + " + (yyvsp[0].e)->izena) ; 
            delete (yyvsp[-2].e); delete (yyvsp[0].e); 
          }
#line 1568 "parser.cpp"
    break;

  case 46: /* expression: expression TSUB expression  */
#line 272 "parser.y"
         {
 	         (yyval.e) = new adi; 
 	         (yyval.e)->izena = kodea.idBerria() ;
 	         kodea.agGehitu((yyval.e)->izena + " := " + (yyvsp[-2].e)->izena + " - " + (yyvsp[0].e)->izena) ; 
           delete (yyvsp[-2].e); delete (yyvsp[0].e); 
      }
#line 1579 "parser.cpp"
    break;

  case 47: /* expression: expression TMUL expression  */
#line 279 "parser.y"
          {
 	         (yyval.e) = new adi; 
 	         (yyval.e)->izena = kodea.idBerria() ;
 	         kodea.agGehitu((yyval.e)->izena + " := " + (yyvsp[-2].e)->izena + " * " + (yyvsp[0].e)->izena) ; 
            delete (yyvsp[-2].e); delete (yyvsp[0].e); 
         }
#line 1590 "parser.cpp"
    break;

  case 48: /* expression: expression TDIVE expression  */
#line 286 "parser.y"
         {
 	         (yyval.e) = new adi; 
 	         (yyval.e)->izena = kodea.idBerria() ;
 	         kodea.agGehitu((yyval.e)->izena + " := " + (yyvsp[-2].e)->izena + " / " + (yyvsp[0].e)->izena) ; 
            delete (yyvsp[-2].e); delete (yyvsp[0].e); 
         }
#line 1601 "parser.cpp"
    break;

  case 49: /* expression: expression TDIVO expression  */
#line 293 "parser.y"
          {
 	         (yyval.e) = new adi; 
      	   (yyval.e)->izena = kodea.idBerria() ;
 	         kodea.agGehitu((yyval.e)->izena + " := " + (yyvsp[-2].e)->izena + " // " + (yyvsp[0].e)->izena) ; 
           delete (yyvsp[-2].e); delete (yyvsp[0].e); 
         }
#line 1612 "parser.cpp"
    break;

  case 50: /* expression: TID  */
#line 300 "parser.y"
          { 
	         (yyval.e) = new adi;
	          (yyval.e)->izena = *(yyvsp[0].izena);
            }
#line 1621 "parser.cpp"
    break;

  case 51: /* expression: TINT_CNST  */
#line 305 "parser.y"
         { 
	         (yyval.e) = new adi;
	         (yyval.e)->izena = *(yyvsp[0].izena);
          }
#line 1630 "parser.cpp"
    break;

  case 52: /* expression: TFLOAT_CNST  */
#line 310 "parser.y"
         { 
	      (yyval.e) = new adi;
	      (yyval.e)->izena = *(yyvsp[0].izena);
         }
#line 1639 "parser.cpp"
    break;

  case 53: /* expression: TLPAR expression TRPAR  */
#line 315 "parser.y"
         { (yyval.e) = new adi;
           (yyval.e)->trueL = (yyvsp[-1].e)->trueL;
           (yyval.e)->falseL = (yyvsp[-1].e)->falseL;
           (yyval.e)->izena = (yyvsp[-1].e)->izena;
            delete (yyvsp[-1].e);
           }
#line 1650 "parser.cpp"
    break;

  case 54: /* M: %empty  */
#line 323 "parser.y"
    { (yyval.erref) = kodea.lortuErref(); }
#line 1656 "parser.cpp"
    break;

  case 55: /* N: %empty  */
#line 324 "parser.y"
    { 
    (yyval.next) = new jauzia; 
    (yyval.next)->next.push_back(kodea.lortuErref()); 
    kodea.agGehitu("goto"); 
    }
#line 1666 "parser.cpp"
    break;


#line 1670 "parser.cpp"

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

#line 329 "parser.y"

