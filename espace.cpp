#include <iostream>
#include <string>
#include <cstdlib>
#include "animaux.h"
#include "espace.h"


using namespace std;

Espace::Espace(const string& type, const string& nom)
{
 if (type=="Bassin")
 {
	eau=true;
	terre=false;
	air=false;
	sNom=nom;
	sType=type;
 }

 if (type=="Enclos")
 {
	eau=false;
	terre=true;
	air=false;
	sNom=nom;
	sType=type;
 }

 if (type=="Cage")
 {
	eau=false;
	terre=false;
	air=true;
	sNom=nom;
	sType=type;
 }
}

Espace::Espace(){
 iTaille=1;
}

Espace::~Espace(){
}

int Espace::getTaille() const {
 return iTaille;
}

void Espace::setTaille (const int & t) {
 iTaille=t;
}

int Espace::getCap() const {
 return iCapacite;
}

void Espace::setCap (const int & c) {
 iCapacite=c;
}

bool Espace::etatRemp() const {
 if (getTaille()<getCap())
 {
	cout<<"Il reste "<<getCap()-getTaille()<<" place(s) dans l'espace"<<endl;
	return true; 
 }
 return false;

}

bool Espace::controlEsp() const {
 bool control=etatRemp();
 if (control==false)
 {
 	cout<<"Il n'y a plus de place, il faut en créer un autre."<<endl;
 }
 return control;
}

string Espace::getNom() const {
 return sNom;
}

string Espace::getType() const {
 return sType;
}

void Espace::ajoutAnimal(const string& sType)
{
 tab= new animal*[4];

 tab[0]= new animal(sType);
}

