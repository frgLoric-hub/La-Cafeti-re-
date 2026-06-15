#ifndef CAFETIERE_H
#define CAFETIERE_H

#include <string>
using namespace std;

class Cafetiere {
private:
    string couleur;
    string marque;

public:
    Cafetiere();
    ~Cafetiere();
    void remplir();
};

#endif