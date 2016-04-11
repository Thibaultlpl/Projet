#ifndef BARNEY_H
#define BANREY_H

#include <iostream>
#include <string>
#include <cstdlib>
#include "parc.h"

using namespace std;

class Barney{

string sNom;
bool pres;

public :

void presentation(const string& nom);
string getNom()const;
void attrapBarney(parc* p);
Barney();
~Barney();

};

#endif
