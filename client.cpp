#include <iostream>
#include <string.h>
#include <map>
#include "client.h"
using namespace std;

Client::Client(){}

Client::Client(string _nom, string _adresse) {
  nom = _nom;
  adresse = _adresse;
}

Client::Client(const Client &c) {
  nom = c.nom;
  adresse = c.adresse;}

Client::~Client(){
    //cout << "Objet Client detruit" <<endl;
}

void Client::affiche() {
  cout << nom << " " << adresse <<  endl;
}

string Client::getNom() { return nom;}
string Client::getAdresse() {return adresse;}


