%option yylineno 

%{
 #include <iostream>
 using namespace std ;
 #include "Lag.h"
 #include "parser.h"
 extern void yyerror (const char *msg);
 
 #define TOKEN(t) return t

 #define ATTRIBUTE(t) yylval.izena = new std::string(yytext)
%}

%%
main		   TOKEN(RMAIN) ;
var             TOKEN(RVAR);
def             TOKEN(RDEF);
let             TOKEN(RLET);
in              TOKEN(RIN);
if              TOKEN(RIF);
forever         TOKEN(RFOV);
do              TOKEN(RDO);
until           TOKEN(RUNTIL);
else            TOKEN(RELSE);
break           TOKEN(RBREAK);
next            TOKEN(RNEXT);
read            TOKEN(RREAD);
print           TOKEN(RPRINT); 
int             TOKEN(RINT);
float           TOKEN(RFLOAT);  
for             TOKEN(RFOR);   
to              TOKEN(RTO);


=                       TOKEN(TASSIG);
\{                      TOKEN(TLBRACE);
\}                      TOKEN(TRBRACE);
\;			            TOKEN(TSEMIC);
==                      TOKEN(TCEQ);
\/=                     TOKEN(TCNE);
>=                      TOKEN(TCGE);
\<=                     TOKEN(TCLE);
>                       TOKEN(TCGT);
\<                      TOKEN(TCLT);
\&                      TOKEN(TAMP);
-                       TOKEN(TSUB);
\/                      TOKEN(TDIVE);
\/\/                    TOKEN(TDIVO);
,                       TOKEN(TCOMMA);
\*                      TOKEN(TMUL);
\+                      TOKEN(TSUM);
\(                      TOKEN(TLPAR);
\)                      TOKEN(TRPAR);
\:                      TOKEN(TTWOP);


[ \t\n]                 ;

[$a-zA-Z](_?_?[a-zA-Z0-9])*_?_?				{ ATTRIBUTE(yytext); TOKEN(TID) ; }
(0|[1-9][0-9]*)\.[0-9]+([eE][-+]?(0|[1-9][0-9]*))?	{ ATTRIBUTE(yytext); TOKEN(TFLOAT_CNST) ; }
0|[1-9][0-9]*						{ ATTRIBUTE(yytext); TOKEN(TINT_CNST) ; }

'''('?'?[^'#])*'?'?'''    ;
#[^\n]*\n                       ;
.                       { yyerror("Token ezezaguna");}
%%

