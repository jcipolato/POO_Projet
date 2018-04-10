#include <iostream>
#include <string.h>
#include "visite.h"

using namespace std;

Visite::Visite(){}

Visite::~Visite(){
   // cout << "Objet Visite detruit" << endl;
}

Visite::Visite(const Visite &v){
  id = v.id;
  dateVisite = v.dateVisite;
}

Visite::Visite(int _id, string _dateVisite/*, Client _myClientAcheteur, Bien _myBien*/) {
  id = _id;
  dateVisite = _dateVisite;
 /* myClientAcheteur = _myClientAcheteur;
  myBien = myBien;*/
}

void Visite::affiche() {
  cout << id << " " << dateVisite <<  endl;
}

string Visite::getDateVisite() { return dateVisite;}
