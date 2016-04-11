#include <iostream>
#include <string>
#include <cstdlib>
#include "animaux.h"
#include "espace.h"
#include "barney.h"
#include "parc.h"
#include "joueur.h"

using namespace std;



int main () {
Joueur j1;
Barney b1;
parc p1;

j1.menu();
b1.presentation(j1.getNom());
p1.construireEspace();
p1.agrandirEspace();
b1.attrapBarney(&p1);



return 0;
}
