#include <iostream>
#include <string.h>
#include <map>
#include <fstream>

#include "clientVendeur.h"
#include "clientAcheteur.h"
#include "bien.h"
#include "agence.h"

using namespace std;

Agence::Agence() {}

Agence::Agence(map<string, Client *> _listeClients/*, map<int, Bien> _listeBiens*/) {
    listeClients = _listeClients;
    //listeBiens = _listeBiens;
}

Agence::Agence(const Agence &a) {
listeClients = a.listeClients;
//listeBiens = a.listeBiens;
}

Agence::~Agence(){}

void Agence::affiche() {
    map<string, Client *>::iterator itListeClients;
    itListeClients = listeClients.begin();
    for (itListeClients=listeClients.begin(); itListeClients!=listeClients.end(); ++itListeClients) {
        //cout << (*itListeClients).first << " => " << endl;
      (*itListeClients).second->affiche();
    }
}

Bien Agence::getBien(int _id) { return listeBiens[_id]; }

Client* Agence::getClient(string _nom) { return listeClients[_nom]; }

void Agence::addClientByUser() {
    cout << "--------------------------------------" << endl;
    cout << "Ajout d'un nouveau client :"<< endl;
    string nom;
    string adresse;


    cout << "Nom : " <<endl;
    cin.ignore();
    getline(cin, nom);

    cout << "Adresse : " << endl;
    getline(cin, adresse);


    Client nouveauClient(nom, adresse);
    map<string, Client*>::iterator itListeClients;
    itListeClients = listeClients.begin();
    listeClients.insert(itListeClients, pair<string, Client*>(nom,&nouveauClient));
    cout << "Le client a été ajouté avec succès !" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Retour au menu principal ..." << endl;
    cout << "--------------------------------------" << endl;

}
void Agence::addClientByFile() {
    ifstream fichier("clients.txt", ios::in);  // on ouvre le fichier en lecture

        if(fichier)  // si l'ouverture a r�ussi
        {
            string ligne;
            while(getline(fichier, ligne)) {

                size_t pos = ligne.find(";");
                string nom = ligne.substr(0,pos);
                string adresse = ligne.substr(pos+1);

                Client nouveauClient(nom, adresse);

		map<string, Client*>::iterator itListeClients;
                itListeClients = listeClients.begin();
                listeClients.insert(itListeClients, pair<string, Client*>(nom,&nouveauClient));


                for (itListeClients=listeClients.begin(); itListeClients!=listeClients.end(); ++itListeClients) {
                    cout << (*itListeClients).first << " => " << endl;
                    (*itListeClients).second->affiche();
                }

            }

            fichier.close();
        }
        else
	  {
	    cerr << "Impossible d'ouvrir le fichier !" << endl;
	  }
}
