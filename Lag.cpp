#include "Lag.h"



const ErrefLista bildu(ErrefLista lista1, ErrefLista lista2){
     ErrefLista berria;
     berria = lista1;
     berria.insert(berria.end(), lista2.begin(), lista2.end());
     return berria;

}