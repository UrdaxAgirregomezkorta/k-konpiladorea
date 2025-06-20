#include <stdio.h>
#include <iostream>
extern int yyparse();
using namespace std;

int yyerrornum = 0;

int main(int argc, char **argv)
{
  if (yyparse() == 0 && yyerrornum == 0) { 
    cout << "Correct..." << endl << endl ;
  }
  else {
    cout << "Incorrect." << endl << "Error number: " << yyerrornum << endl << endl ;
  }
  return 0;
}
