/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TID = 258,                     /* TID  */
    TINT_CNST = 259,               /* TINT_CNST  */
    TFLOAT_CNST = 260,             /* TFLOAT_CNST  */
    RPACK = 261,                   /* RPACK  */
    RFUNC = 262,                   /* RFUNC  */
    RMAIN = 263,                   /* RMAIN  */
    RVAR = 264,                    /* RVAR  */
    RDEF = 265,                    /* RDEF  */
    RLET = 266,                    /* RLET  */
    RIN = 267,                     /* RIN  */
    RIF = 268,                     /* RIF  */
    RFOV = 269,                    /* RFOV  */
    RDO = 270,                     /* RDO  */
    RUNTIL = 271,                  /* RUNTIL  */
    RELSE = 272,                   /* RELSE  */
    RBREAK = 273,                  /* RBREAK  */
    RNEXT = 274,                   /* RNEXT  */
    RREAD = 275,                   /* RREAD  */
    RPRINT = 276,                  /* RPRINT  */
    RINT = 277,                    /* RINT  */
    RFLOAT = 278,                  /* RFLOAT  */
    RFOR = 279,                    /* RFOR  */
    RTO = 280,                     /* RTO  */
    TRBRACE = 281,                 /* TRBRACE  */
    TLBRACE = 282,                 /* TLBRACE  */
    TASSIG = 283,                  /* TASSIG  */
    TINITASSIG = 284,              /* TINITASSIG  */
    TSEMIC = 285,                  /* TSEMIC  */
    TTWOP = 286,                   /* TTWOP  */
    TAMP = 287,                    /* TAMP  */
    TMUL = 288,                    /* TMUL  */
    TSUB = 289,                    /* TSUB  */
    TCEQ = 290,                    /* TCEQ  */
    TCGE = 291,                    /* TCGE  */
    TCGT = 292,                    /* TCGT  */
    TCLE = 293,                    /* TCLE  */
    TCLT = 294,                    /* TCLT  */
    TCNE = 295,                    /* TCNE  */
    TCOMMA = 296,                  /* TCOMMA  */
    TDIVE = 297,                   /* TDIVE  */
    TDIVO = 298,                   /* TDIVO  */
    TLPAR = 299,                   /* TLPAR  */
    TRPAR = 300,                   /* TRPAR  */
    TSUM = 301                     /* TSUM  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "parser.y"

    string *izena ; 
    adi *e;
    int erref;
    ErrefLista *next;
    IdLista *izenak;
    intLista *s;

#line 119 "parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_H_INCLUDED  */
