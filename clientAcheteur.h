#ifndef CLIENTACHETEUR_H
#define CLIENTACHETEUR_H

#include <iostream>
#include "client.h"
#include "visite.h"
#include <list>

using namespace std;

class ClientAcheteur: public Client {

private:
  list<Visite> listeVisites;
  bool propositionAchat;
  double prix;

public:
  ClientAcheteur (list<Visite> _listeVisites, bool _propositionAchat, double _prix, string _nom, string _adresse);
  ClientAcheteur();
  ClientAcheteur(const ClientAcheteur &c);
  ~ClientAcheteur();

  void affiche();
};
#endif

