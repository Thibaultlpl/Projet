#ifndef PARC_H
#define PARC_H

#include <iostream>
#include <string>
#include <cstdlib>
#include "espace.h"

using namespace std;

class parc {
 Espace** tab;
 int taille;

public:
 void construireEspace();
 void agrandirEspace();
 int getTaille() const;
 void setTaille(const int& t);
 void ajoutAnimal(const string& sType);
 parc();
 ~parc();
};

#endif
