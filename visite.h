#ifndef VISITE_H
#define VISITE_H
#include <string.h>

using namespace std;

class Visite {
    private:
        int id;
        string dateVisite;
        //Client myClientAcheteur;
        //Bien myBien;

    public:
        Visite();
        Visite(int _id, string _dateVisite/*, Client _myClientAcheteur, Bien _myBien*/);
        Visite(const Visite &v);
        ~Visite();

         void affiche();
         string getDateVisite();
};

#endif
