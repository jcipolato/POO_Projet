#ifndef AGENCE_H
#define AGENCE_H

#include <iostream>
#include <map>
#include <string.h>

#include "client.h"
#include "bien.h"

using namespace std;

class Agence {

private:
    map<string,Client> listeClients;
    map<int,Bien> listeBiens;

public:
  Agence();
  Agence(map<string,Client> _listeClients/*, map<int,Bien> _listeBiens*/);
  Agence(const Agence &a);
  ~Agence();

  void affiche();
  Client getClient(string nom);
  Bien getBien(int id);
};


#endif
