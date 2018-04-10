#include <iostream>
#include <string.h>
#include "bien.h"
#include "clientVendeur.h"


using namespace std;

Bien::Bien(){}

Bien::Bien(int _id, double _prix, string _adresse, int _nbMetresCarres, Client _theClientVendeur, bool _enVente) {
    id = _id;
    prix = _prix;
    adresse = _adresse;
    nbMetresCarres = _nbMetresCarres;
    theClientVendeur = _theClientVendeur;
    enVente = _enVente;
}

Bien::Bien(const Bien &b) {
    id = b.id;
    prix = b.prix;
    adresse = b.adresse;
    nbMetresCarres = b.nbMetresCarres;
    theClientVendeur = b.theClientVendeur;
    enVente = b.enVente;
}

Bien::~Bien(){}

void Bien::affiche() {
    string enVenteON = "En vente : ";
    if (enVente) { enVenteON += "oui";} else { enVenteON += "non";}

    cout << "Bien numero " << id << " - " << adresse << "\nPrix : " << prix << "€, " << nbMetresCarres << " m2. " << enVenteON << endl;
    cout << "\nInfos client : " << theClientVendeur.getNom() << " - " << theClientVendeur.getAdresse() << endl;
}

