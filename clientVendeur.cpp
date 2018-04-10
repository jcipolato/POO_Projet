#include <iostream>
#include <string.h>
#include "clientVendeur.h"


using namespace std;

ClientVendeur::ClientVendeur(){}

ClientVendeur::ClientVendeur(string _nom, string _adresse):Client(_nom, _adresse) {}

ClientVendeur::ClientVendeur(const ClientVendeur &c) {}

ClientVendeur::~ClientVendeur(){}

void ClientVendeur::affiche() {
    cout << "Client Vendeur : \n" << nom << " - " << adresse << endl;
}

