#ifndef BIEN_H
#define BIEN_H
#include <iostream>
#include <string.h>
#include "clientVendeur.h"

using namespace std;

class Bien {

protected:
  int id;
  double prix;
  string adresse;
  int nbMetresCarres;
  Client theClientVendeur;
  bool enVente;


public:
  Bien(int _id, double _prix, string _adresse, int _nbMetresCarres, Client _theClientVendeur, bool _enVente);
  Bien();
  Bien(const Bien &b);
  ~Bien();

  void affiche();

};
#endif
