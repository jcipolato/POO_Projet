#include <iostream>
#include "bien.h"

using namespace std;

class Terrain: public Bien {

private:
   bool constructible;


public:
  Terrain (bool _constructible):Bien(int _id, double _prix, string _adresse, int _nbMetresCarres, ClientVendeur _theClientVendeur, bool _enVente);
  Terrain();
  Terrain(const Terrain &t);
  ~Terrain();

  void affiche();
};
