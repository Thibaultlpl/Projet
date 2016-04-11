#ifndef JOUEUR_H
#define JOUEUR_H

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Joueur{
 string Nom;
 public:
 void menu();
 void setNom(const string& nom);
 string getNom () const;
 void afficheNom();
 Joueur ();
 ~Joueur(); 
};

#endif
