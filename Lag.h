#ifndef LAG_H_
#define LAG_H_

#include <string>
#include <list>

typedef std::list<std::string> IdLista;
typedef std::list<int> ErrefLista;

struct adi {
  std::string izena ;
  ErrefLista trueL ;  // true hitz erreserbatua c-z
  ErrefLista falseL ; // false hitz erreserbatua c-z
};
struct intLista {
    ErrefLista exitL;   
    ErrefLista continueL;
};
const ErrefLista bildu(ErrefLista lista1, ErrefLista lista2);
#endif /* LAG_H_ */