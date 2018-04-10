#include <iostream>
#include <string.h>
#include <list>
#include <map>
#include <fstream>

#include "clientVendeur.h"
#include "clientAcheteur.h"
#include "agence.h"
#include "visite.h"

using namespace std;

map<string, Client> listeClients;
map<int, Bien> listeBiens;
map<string, Client>::iterator itListeClients;

void addClientByUser() {
    
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

    itListeClients = listeClients.begin();
    listeClients.insert(itListeClients, pair<string, Client>(nom,nouveauClient));
    cout << "Le client a été ajouté avec succès !" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Retour au menu principal ..." << endl;
    cout << "--------------------------------------" << endl;

   /* for (itListeClients=listeClients.begin(); itListeClients!=listeClients.end(); ++itListeClients) {
        cout << (*itListeClients).first << " => " << endl;
        (*itListeClients).second.affiche();
    }                                                                   Joris: JE L'AI FOUTU DANS Agence::affiche()*/                                                 
    

}

void addClientByFile() {
    ifstream fichier("clients.txt", ios::in);  // on ouvre le fichier en lecture
    cout << "--------------------------------------" << endl;
        if(fichier)  // si l'ouverture a réussi
        {
            cout << "Lecture du fichier ..." << endl;
            string ligne;
            while(getline(fichier, ligne)) {

                size_t pos = ligne.find(";");
                string nom = ligne.substr(0,pos);
                string adresse = ligne.substr(pos+1);

                Client nouveauClient(nom, adresse);

                itListeClients = listeClients.begin();
                listeClients.insert(itListeClients, pair<string, Client>(nom,nouveauClient));


                /*for (itListeClients=listeClients.begin(); itListeClients!=listeClients.end(); ++itListeClients) {
                    cout << (*itListeClients).first << " => " << endl;
                    (*itListeClients).second.affiche();
                }*/

            }
            
                cout << "Les clients ont bien été ajoutés ..." << endl;
                cout << "--------------------------------------" << endl;
                cout << "Retour au menu principal ..." << endl;
                cout << "--------------------------------------" << endl;


            fichier.close();
        }
        else  {
                cerr << "Impossible d'ouvrir le fichier !" << endl;}
 }

void autre() {



    list<Visite> laListeDeVisite;
    list<Visite>::iterator it;
    Visite V1 (01, "01/01/2018");
    Visite V2 (02, "02/02/2018");

    it = laListeDeVisite.begin();
    laListeDeVisite.insert(it, V1);
    //++it;
    //laListeDeVisite.insert(it, V2);

    /*for(it = listeClients.begin();it != listeClients.end(); ++it) {
        cout << "clef " << (*it).first << " Pr�sentation : " << endl;
        (*it).second.affiche();
    }*/



    ClientAcheteur C2(laListeDeVisite, 1, 20.00, "James", "rue wsh");
    //C2.affiche();



    ClientVendeur C1 ("Joris", "rue des noix");
    Bien B1(01, 12.20, "68 rue des noix", 50, C1, 1);
    //B1.affiche();
}
int main(){
    
    int res;
    while(res != 3){
        cout << "Pour ajouter un client via console tapez 1" << endl;
        cout << "Pour ajouter un client via fichier .txt tapez 2" << endl;
        cout << "Pour quitter le programme tapez 3" << endl; // ON LE METTRA A LA FIN PLUS TARD
        cout << "Pour consulter la liste des clients tapez 4" << endl;
        cin >> res;
    
        switch (res) {
            case 1: {

                addClientByUser();
                break;
            }
            case 2: {
                addClientByFile();
                break;
            }
            case 3: {
                break;
            }
            case 4: {
                cout << "--------------------------------------" << endl;
                cout << "Liste des clients :" << endl;
                Agence agence(listeClients);
                agence.affiche();
                cout << "--------------------------------------" << endl;
                cout << "Retour au menu principal ..." << endl;
                cout << "--------------------------------------" << endl;
                break;
            }
        }
    }



    return 0;
}
