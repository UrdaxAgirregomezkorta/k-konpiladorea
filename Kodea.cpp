#include "Kodea.h"

using namespace std;


/*****************/
/* Eraikitzailea */
/*****************/

Kodea::Kodea() {
  hurId = 1;
}


/************/
/* idBerria */
/************/

string Kodea::idBerria() {
    string idBe("_t");
    idBe += to_string(hurId++);
    return idBe;
}


/************/
/* agGehitu */
/************/

void Kodea::agGehitu(const string &agKatea) {
  string agindua;
  agindua = to_string(lortuErref()) + ": " + agKatea;
  aginduak.push_back(agindua);
}

/**********************/
/* erazagupenakGehitu */
/**********************/

void Kodea::erazagupenakGehitu(const IdLista &idIzenak, const string &motaIzena) {
  IdLista::const_iterator iter;
  for (iter=idIzenak.begin(); iter!=idIzenak.end(); iter++) {
    agGehitu(motaIzena + " " + *iter);
  }
}

/**********************/
/* parametroakGehitu  */
/**********************/

void Kodea::parametroakGehitu(const IdLista &idIzenak, const string &parMotaIzena, const string &motaIzena){ 
  IdLista::const_iterator iter;
  for (iter=idIzenak.begin(); iter!=idIzenak.end(); iter++) {
    agGehitu(parMotaIzena + "_" + motaIzena + " " + *iter);
  }
}

/***********/
/* agOsatu */
/***********/

void Kodea::agOsatu(ErrefLista &agZenbakiak, const int balioa) {
  string erref = " " + to_string(balioa);
  ErrefLista::iterator iter;
  for (iter = agZenbakiak.begin(); iter != agZenbakiak.end(); iter++) {
    aginduak[*iter-1].append(erref);
  }
}


/**********/
/* idatzi */
/**********/

void Kodea::idatzi() {
  vector<string>::const_iterator iter;
  for (iter = aginduak.begin(); iter != aginduak.end(); iter++) {
    cout << *iter << endl;
  }
}


/**************/
/* lortuErref */
/**************/

int Kodea::lortuErref() const {
    return aginduak.size() + 1;
}


