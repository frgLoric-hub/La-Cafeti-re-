#include "Cafetiere.h"
#include <iostream>

Cafetiere::Cafetiere() {
    couleur = "Noir";
    marque = "Moulinex";
}

Cafetiere::~Cafetiere()
{
}

void Cafetiere::remplir() 
{
    cout <<"Je remplis" << endl;
}