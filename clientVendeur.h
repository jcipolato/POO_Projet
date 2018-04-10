#ifndef CLIENT_VENDEUR_H
#define CLIENT_VENDEUR_H

#include <iostream>
#include "client.h"
#include "bien.h"


using namespace std;

class ClientVendeur : public Client {


public:
  ClientVendeur (string _nom, string _adresse);
  ClientVendeur();
  ClientVendeur(const ClientVendeur &c);
  ~ClientVendeur();


  void affiche();
};
#endif
