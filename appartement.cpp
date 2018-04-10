#include <iostream>
#include <string.h>

#include "appartement.h"
//#include "bien.h"
//#include "clientVendeur.h"

using namespace std;

Appartement::Appartement(int _nbPieces, int _etage, bool _garage, bool _cave, bool _balcon, int _nbAppartementImmeuble,
        int _id, double _prix, string _adresse, int _nbMetresCarres, ClientVendeur _theClientVendeur, bool _enVente
        ):Bien(_id, _prix,  _adresse,  _nbMetresCarres, _theClientVendeur, _enVente){
  nbPieces = _nbPieces;
  etage = _etage;
  garage = _garage;
  cave = _cave;
  balcon = _balcon;
  nbAppartementImmeuble = _nbAppartementImmeuble;
}
Appartement::Appartement(){}
Appartement::Appartement(Appartement const &app){}
Appartement::~Appartement(){}
void Appartement::affiche(){

}
