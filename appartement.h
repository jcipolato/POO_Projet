#ifndef APPARTEMENT_H
#define APPARTEMENT_H
#include "bien.h"
#include "clientVendeur.h"
#include <iostream>
#include <string.h>
using namespace std;

class Appartement: public Bien {

private:
  int nbPieces;
  int etage;
  bool garage;
  bool cave;
  bool balcon;
  int nbAppartementImmeuble;


public:
  Appartement(int _nbPieces, int _etage, bool _garage, bool _cave, bool _balcon, int _nbAppartementImmeuble, 
          int _id, double _prix, string _adresse, int _nbMetresCarres, ClientVendeur _theClientVendeur, bool _enVente);
  Appartement();
  Appartement(Appartement const &n);
  ~Appartement();

  void affiche();
};
#endif
