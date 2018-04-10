#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <string.h>

using namespace std;

class Client {

protected:
  string nom;
  string adresse;


public:
  Client (string _nom, string _adresse);
  Client();
  Client(const Client &c);
  ~Client();

  string getNom();
  string getAdresse();

  void affiche();

};

#endif
