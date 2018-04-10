#include <iostream>
#include "bien.h"

using namespace std;

class Locaux: public Bien {

private:
  double tailleVitrine;
  bool stockageMateriaux;


public:
  Locaux (double _tailleVitrine, bool _stockageMateriaux):Bien(int _id, double _prix, string _adresse, int _nbMetresCarres, ClientVendeur _theClientVendeur, bool _enVente);
  Locaux();
  Locaux(const Terrain &l);
  ~Locaux();

  void affiche();
};
