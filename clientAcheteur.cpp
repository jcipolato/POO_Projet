#include <iostream>
#include <string.h>
#include "clientAcheteur.h"
#include "visite.h"
#include <list>

using namespace std;

ClientAcheteur::ClientAcheteur(list<Visite> _listeVisites, bool _propositionAchat, double _prix, string _nom, string _adresse):Client(_nom, _adresse){
    listeVisites = _listeVisites;
    propositionAchat = _propositionAchat;
    prix = _prix;
}

ClientAcheteur::ClientAcheteur(){}

ClientAcheteur::ClientAcheteur(const ClientAcheteur &c) {
    listeVisites = c.listeVisites;
    propositionAchat = c.propositionAchat;
    prix = c.prix;
}

ClientAcheteur::~ClientAcheteur(){}

void ClientAcheteur::affiche() {

    cout << "Client acheteur : " << nom << " - " << adresse << "\n" << endl;

    cout << "Visite(s) le  : "  << endl;

    list<Visite>::iterator it;
    for(it = listeVisites.begin(); it!=listeVisites.end(); ++it) {
        cout << (*it).getDateVisite() << "\n" << endl;
    }

    string achatON = "Proposition d'achat : ";
    if (propositionAchat) { achatON += "oui";} else { achatON += "non";}

    cout << achatON << ". Prix : " << prix << "€"<< endl;
}

