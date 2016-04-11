#include <iostream>
#include <string>
#include <cstdlib>
#include "joueur.h"

using namespace std;

void Joueur::menu(){
 system("clear");
 cout<<
"\t\t\t\t\t\t\t\td8888888P  .88888.   .88888.\n"  
"\t\t\t\t\t\t\t\t       d8' d8'  `8b  d8'  `8b\n" 
"\t\t\t\t\t\t\t\t    .d8'   88    88  88    88\n" 
"\t\t\t\t\t\t\t\t  .d8'     88    88  88    88\n" 
"\t\t\t\t\t\t\t\t d8'       Y8.  .8P  Y8.  .8P\n" 
"\t\t\t\t\t\t\t\tY8888888P  `88888P'  `88888P'\n\n\n\n\n"<<endl;

cout<<"\t\t\t\t\t\t\t\tEntrez votre nom: ";
 cin>>Nom;
}

void Joueur::setNom(const string& nom){
 Nom=nom;
}

string Joueur::getNom()const{
 return Nom;
}

void Joueur::afficheNom(){
 cout<<getNom()<<endl;
}

Joueur::Joueur(){
}

Joueur::~Joueur(){
}

