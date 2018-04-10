#include <iostream>
#include <string.h>
#include <map>

#include "clientVendeur.h"
#include "clientAcheteur.h"
#include "bien.h"
#include "agence.h"

using namespace std;

Agence::Agence() {}

Agence::Agence(map<string, Client> _listeClients/*, map<int, Bien> _listeBiens*/) {
    listeClients = _listeClients;
    //listeBiens = _listeBiens;
}

Agence::Agence(const Agence &a) {
listeClients = a.listeClients;
//listeBiens = a.listeBiens;
}

Agence::~Agence(){}

void Agence::affiche() {
    map<string, Client>::iterator itListeClients;
    itListeClients = listeClients.begin();
    for (itListeClients=listeClients.begin(); itListeClients!=listeClients.end(); ++itListeClients) {
        //cout << (*itListeClients).first << " => " << endl;
        (*itListeClients).second.affiche();
    }
}

Bien Agence::getBien(int _id) { return listeBiens[_id]; }

Client Agence::getClient(string _nom) { return listeClients[_nom]; }

