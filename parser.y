%{
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

%}

/*
   Ikurrek izan ditzaketen atributu-mota guztiak hemen zehaztu.
   Oharra: union egiturak bakarrik onartzen ditu oinarrizko datu-motak,
   osoko, erreal, karaktere eta erakusleak. 
*/
%union {
    string *izena ; 
    adi *e;
    int erref;
    ErrefLista *next;
    IdLista *izenak;
    intLista *s;
}


/* 
   Tokenak erazagutu. Honek tokens.l fitxategiarekin 
   bat etorri behar du.
   Tokenek atributuak badituzte, hemen zehaztu behar da.
   Adibidez, identifikadoreek izena atributua izango balute:
%token <izena> TID
   Analisi lexiko eta sintaktikorako atributurik ez.
*/

%token <izena> TID TINT_CNST TFLOAT_CNST
%token RPACK RFUNC RMAIN RVAR RDEF RLET RIN RIF RFOV RDO RUNTIL RELSE RBREAK RNEXT RREAD RPRINT RINT RFLOAT RFOR RTO
%token TRBRACE TLBRACE TASSIG TINITASSIG TSEMIC TTWOP TAMP
%token TMUL TSUB TCEQ TCGE TCGT TCLE TCLT TCNE TCOMMA TDIVE TDIVO TLPAR TRPAR 



/* Hemen erazagutu atributuak dauzkaten ez-bukaerakoak. 
   Adibidez, aldagaia ez-bukaerakoak izena atributua izango balu:
%type <izena> aldagaia
   Analisi lexiko eta sintaktikorako atributurik ez.
*/
%type <e> expression
%type <izena> type var_id_array par_class
%type <izenak> id_list
%type <erref> M 
%type <next> N
%type <s> statement statements block



%nonassoc TCLT TCLE TCGT TCGE     
%nonassoc TCEQ TCNE                        
%left TSUM TSUB                   
%left TMUL TDIVE TDIVO               

%%

%start start;

start : RDEF RMAIN {kodea.agGehitu("prog main"); } TLPAR TRPAR mblock
         {
         kodea.agGehitu("halt");
	       kodea.idatzi() ; 
          cout << "Ondo bukatu da" << endl;
        }
         ;

mblock : bl_decl N TLBRACE subprogs M statements TRBRACE M
 {
      kodea.agOsatu(*$<next>2, $<erref>5);
      kodea.agOsatu($<s>6->exitL, $<erref>8);
      delete $<next>2;
      delete $<s>6;
    }
  ;

block : bl_decl TLBRACE statements TRBRACE
         {   $<s>$ = new intLista();
      $<s>$->continueL = $<s>3->continueL;
      $<s>$->exitL = $<s>3->exitL;  // Aquí estaba el error
      delete $<s>3;

           }
         ;

bl_decl : RLET decl RIN 
         | 
         ;

decl : decl TSEMIC id_list TTWOP type {kodea.erazagupenakGehitu(*$<izenak>3, *$<izena>5); delete $<izenak>3; delete $<izena>5; }
         | id_list TTWOP type {kodea.erazagupenakGehitu(*$<izenak>1, *$<izena>3); delete $<izenak>1; delete $<izena>3; }
         ;
id_list : id_list TCOMMA TID { $<izenak>$ = $<izenak>1 ; $<izenak>$->push_back(*$<izena>3); }
         | TID { $<izenak>$ = new IdLista; $<izenak>$->push_back(*$<izena>1); }
         ;
type : RINT { $<izena>$ = new string("int"); }
         | RFLOAT  { $<izena>$ = new string("real"); } 
         ;
subprogs: subprogs subprog
         | 
         ;
subprog : RDEF TID { kodea.agGehitu("proc " + *$<izena>2); } arguments mblock {kodea.agGehitu("endproc " + *$<izena>2); delete $<izena>2; }
         ;
arguments : TLPAR par_list TRPAR
         | 
         ;
par_list : id_list TTWOP par_class type { kodea.parametroakGehitu(*$<izenak>1, *$<izena>3, *$<izena>4); delete $<izenak>1; delete $<izena>3; delete $<izena>4; } par_list_r
         ;
par_list_r : TSEMIC id_list TTWOP par_class type {kodea.parametroakGehitu(*$<izenak>2, *$<izena>4, *$<izena>5); delete $<izenak>2; delete $<izena>4; delete $<izena>5; } par_list_r
          |
          ;
par_class : TAMP { $<izena>$ = new string("ref"); }
         | { $<izena>$ = new string("val"); }
         ;
statements : statements statement
            { $<s>$ = new intLista;
              $<s>$->exitL = bildu($<s>1->exitL, $<s>2->exitL);
              $<s>$->continueL = bildu($<s>1->continueL, $<s>2->continueL);
              delete $<s>1; delete $<s>2;}
         |  {$<s>$ = new intLista; }
         ;
statement: var_id_array TASSIG expression TSEMIC
         { $<s>$ = new intLista;
              kodea.agGehitu(*$<izena>1 + ":=" + $<e>3->izena);
              delete $<izena>1; delete $<e>3;
             }

         | RIF expression M block M
         { $<s>$ = new intLista;
          kodea.agOsatu($<e>2->trueL, $<erref>3);
          kodea.agOsatu($<e>2->falseL, $<erref>5);
          $<s>$->continueL = $<s>4->continueL;
          $<s>$->exitL = $<s>4->exitL;
          delete $<s>4; delete $<e>2;
          }

         | RFOV M block  M
         { 
            
            $$ = new intLista;
            kodea.agOsatu($3->exitL, $4);
            kodea.agGehitu("goto " + to_string($2));
            $$->exitL = ErrefLista();
            $$->continueL = $3->continueL;
            delete $3;
            }


         | RDO M block M RUNTIL expression RELSE M block M
         { $<s>$ = new intLista;
            kodea.agOsatu($<e>6->trueL, $<erref>10);
            kodea.agOsatu($<e>6->falseL, $<erref>2);
            kodea.agOsatu($<s>3->continueL, $<erref>8);
            kodea.agOsatu($<s>3->exitL, $<erref>10);
            delete $<s>3; delete $<e>6;}

         | RBREAK RIF expression M TSEMIC
         { $<s>$ = new intLista;
           kodea.agOsatu($<e>3->falseL, $<erref>4); 
           $<s>$->exitL = $<e>3->trueL;
           delete $<e>3; 
           }

         | RNEXT  TSEMIC
         { $$ = new intLista;
            $$->continueL = ErrefLista();
            $$->continueL.push_back(kodea.lortuErref());
            kodea.agGehitu("goto");
         }

         | RREAD TLPAR var_id_array TRPAR TSEMIC
         {
            $<s>$ = new intLista;
            kodea.agGehitu("read " + *$<izena>3);
            }

         | RPRINT TLPAR expression TRPAR TSEMIC
         {
            $<s>$ = new intLista;
             $<s>$->continueL = ErrefLista();
            $<s>$->exitL = ErrefLista();
            kodea.agGehitu("write " + *$<izena>3);
           }
         ;
         //|RFOR TID RIN expression RTO expression M block M 

var_id_array: TID
         {
         	$<izena>$= $<izena>1; 
      	 };

expression : expression TCEQ expression
         {  
	            $<e>$ = new adi; 
	            $<e>$->trueL.push_back(kodea.lortuErref()) ; 
 	            $<e>$->falseL.push_back(kodea.lortuErref()+1) ;
	            kodea.agGehitu("if " + $<e>1->izena + " == " + $<e>3->izena + " goto") ;
	            kodea.agGehitu("goto") ;
               delete $<e>1; delete $<e>3;
   
            }
         |expression TCGT expression
         {
	         $<e>$ = new adi; 
	         $<e>$->trueL.push_back(kodea.lortuErref()) ; 
 	         $<e>$->falseL.push_back(kodea.lortuErref()+1) ;
	         kodea.agGehitu("if " + $<e>1->izena + " > " + $<e>3->izena + " goto") ;
	         kodea.agGehitu("goto") ;
            delete $<e>1; delete $<e>3; 
          }
         |expression TCLT expression
         {
	       $<e>$ = new adi; 
	       $<e>$->trueL.push_back(kodea.lortuErref()) ; 
 	       $<e>$->falseL.push_back(kodea.lortuErref()+1) ;
	       kodea.agGehitu("if " + $<e>1->izena + " < " + $<e>3->izena + " goto") ;
	       kodea.agGehitu("goto") ;
         delete $<e>1; delete $<e>3; 
         }
         |expression TCGE expression
         {
	         $<e>$ = new adi; 
	         $<e>$->trueL.push_back(kodea.lortuErref()) ; 
 	         $<e>$->falseL.push_back(kodea.lortuErref()+1) ;
	         kodea.agGehitu("if " + $<e>1->izena + " >= " + $<e>3->izena + " goto") ;
	         kodea.agGehitu("goto") ;
           delete $<e>1; delete $<e>3; 
          }
         |expression TCLE expression
         {
	         $<e>$ = new adi; 
	         $<e>$->trueL.push_back(kodea.lortuErref()) ; 
 	         $<e>$->falseL.push_back(kodea.lortuErref()+1) ;
	         kodea.agGehitu("if " + $<e>1->izena + " <= " + $<e>3->izena + " goto") ;
	         kodea.agGehitu("goto") ;
            delete $<e>1; delete $<e>3; 
            
         }
         |expression TCNE expression
         {
	         $<e>$ = new adi; 
	         $<e>$->trueL.push_back(kodea.lortuErref()) ; 
 	         $<e>$->falseL.push_back(kodea.lortuErref()+1) ;
	         kodea.agGehitu("if " + $<e>1->izena + " /= " + $<e>3->izena + " goto") ;
	         kodea.agGehitu("goto") ;
            delete $<e>1; delete $<e>3; 
            
          }
         |expression TSUM expression
         {
 	         $<e>$ = new adi; 
 	         $<e>$->izena = kodea.idBerria() ;
 	         kodea.agGehitu($<e>$->izena + " := " + $<e>1->izena + " + " + $<e>3->izena) ; 
            delete $<e>1; delete $<e>3; 
          }
         |expression TSUB expression
         {
 	         $<e>$ = new adi; 
 	         $<e>$->izena = kodea.idBerria() ;
 	         kodea.agGehitu($<e>$->izena + " := " + $<e>1->izena + " - " + $<e>3->izena) ; 
           delete $<e>1; delete $<e>3; 
      }
         |expression TMUL expression 
          {
 	         $<e>$ = new adi; 
 	         $<e>$->izena = kodea.idBerria() ;
 	         kodea.agGehitu($<e>$->izena + " := " + $<e>1->izena + " * " + $<e>3->izena) ; 
            delete $<e>1; delete $<e>3; 
         } 
         |expression TDIVE expression
         {
 	         $<e>$ = new adi; 
 	         $<e>$->izena = kodea.idBerria() ;
 	         kodea.agGehitu($<e>$->izena + " := " + $<e>1->izena + " / " + $<e>3->izena) ; 
            delete $<e>1; delete $<e>3; 
         }
         |expression TDIVO expression
          {
 	         $<e>$ = new adi; 
      	   $<e>$->izena = kodea.idBerria() ;
 	         kodea.agGehitu($<e>$->izena + " := " + $<e>1->izena + " // " + $<e>3->izena) ; 
           delete $<e>1; delete $<e>3; 
         }
         |TID
          { 
	         $<e>$ = new adi;
	          $<e>$->izena = *$<izena>1;
             delete $<izena>1;
            }
         |TINT_CNST
         { 
	         $<e>$ = new adi;
	         $<e>$->izena = *$<izena>1;
            delete $<izena>1;
          }
         |TFLOAT_CNST
         { 
	      $<e>$ = new adi;
	      $<e>$->izena = *$<izena>1;
         delete $<izena>1;
         }
         |TLPAR expression TRPAR 
         { $<e>$ = new adi;
           $<e>$->trueL = $<e>2->trueL;
           $<e>$->falseL = $<e>2->falseL;
           $<e>$->izena = $<e>2->izena;
            delete $<e>2;
           }
         ;

M : { $<erref>$ = kodea.lortuErref(); }
N : { 
    ErrefLista *next = new ErrefLista; 
    next->push_back(kodea.lortuErref()); 
    kodea.agGehitu("goto"); 
    } 
%%
