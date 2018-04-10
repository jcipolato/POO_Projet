#include <iostream>
#include "bien.h"

using namespace std;

class Maison: public Bien {

private:
  int nbPieces;
  bool garage;
  bool jardin;
  bool piscine;


public:
  Maison (int _nbPieces, bool _garage, bool _jardin, int _nbAppatementImmeuble):Bien(int _id, double _prix, string _adresse, int _nbMetresCarres, ClientVendeur _theClientVendeur, bool _enVente);
  Maison();
  Maison(const Maison &m);
  ~Maison();

  void affiche();
};
