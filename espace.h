#ifndef ESPACE_H
#define ESPACE_H

#include <iostream>
#include <string>
#include <cstdlib>
#include "animaux.h"

using namespace std;

class Espace{

animal** tab;
int iTaille;
int iCapacite;
bool eau;
bool terre;
bool air;
string sNom;
string sType;

public : 

int getTaille() const;
void setTaille (const int & t);
int getCap() const;
void setCap (const int & c);
bool etatRemp() const;
bool controlEsp() const; 
string getNom() const;
string getType() const;
void ajoutAnimal(const string& type);

~Espace();
Espace(const string& type, const string& nom);
Espace ();

};

#endif
