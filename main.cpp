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

int main(){
  Agence A;
  
  int res;
  while(res != 3){
    cout << "Pour ajouter un client via console, tapez 1" << endl;
    cout << "Pour ajouter un client via fichier .txt, tapez 2" << endl;
    cout << "Pour quitter le programme, tapez 3" << endl; // ON LE METTRA A LA FIN PLUS TARD
    cout << "Pour consulter la liste des clients, tapez 4" << endl;
    cout << "Pour rajouter un bien à vendre, tapez 5" << endl;
    cin >> res;
    
    switch (res) {
    case 1: {

      A.addClientByUser();
      break;
    }
    case 2: {
      A.addClientByFile();
      break;
    }
    case 3: {
      break;
    }
    case 4: {
      cout << "--------------------------------------" << endl;
      cout << "Liste des clients :" << endl;
      A.affiche();
      cout << "--------------------------------------" << endl;
      cout << "Retour au menu principal ..." << endl;
      cout << "--------------------------------------" << endl;
      break;
    }
    }
  }



  return 0;
}
