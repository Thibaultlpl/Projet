#include <iostream>
#include <string>
#include <cstdlib>
#include "espace.h"
#include "parc.h"

#define BASSIN 1
#define ENCLOS 2
#define CAGE 3

using namespace std;

int parc::getTaille()const { 
 return taille;
}

void parc::setTaille(const int& t) {
 taille=t;
}

parc::parc() {
 tab[0]=NULL;
 taille=1;
}

parc::~parc() {
 for (int i=0; i<taille; i++) 
 {
	delete tab[i];
 }
}

void parc::construireEspace(){
 int iChoix=0;
 string Nom="";
 cout<<"\nIl faut maintenant constuire un espace, choisis en un parmis la liste:\n ** 1) Bassin\n ** 2) Enclos\n ** 3) Cage\n Votre choix: ";
 cin>>iChoix;
 while ((iChoix<1)||(iChoix>3))
 {

 cout<<"Erreur ! Entrez un nombre compris entre 1 et 3 ! Votre choix: ";
 cin>>iChoix;
 };


switch (iChoix) {

	case BASSIN:
	 cout<<"Entrez le nom du bassin: ";
	 cin>>Nom;
	 tab[0]= new Espace ("Bassin",Nom);
	 break;


	case ENCLOS:
	 cout<<"Entrez le nom de l'enclos: ";
	 cin>>Nom;
	 tab[0]= new Espace ("Enclos",Nom);
	 break;
	
	case CAGE:	
 	 cout<<"Entrez le nom de la cage: ";
	 cin>>Nom;
	 tab[0]= new Espace ("Cage",Nom);
	 break;
	}
}

void parc::agrandirEspace(){

 int iChoix=0;
 string Nom="";
 Espace** tab_aux = new Espace*[taille+1];
 for (int i=0; i<taille; i++)
 {
	tab_aux[i]=tab[i];
 }

 cout<<"\nChoisis un espace parmis la liste:\n ** 1) Bassin\n ** 2) Enclos\n ** 3) Cage\n Votre choix: ";
 cin>>iChoix;
 while ((iChoix<1)||(iChoix>3))
 {

 cout<<"Erreur ! Entrez un nombre compris entre 1 et 3 ! Votre choix: ";
 cin>>iChoix;
 };


switch (iChoix) {

	case BASSIN:
	 cout<<"Entrez le nom du bassin: ";
	 cin>>Nom;

	 tab= new Espace*[taille];		//
	 for (int i=0; i<taille; i++)		//
	 {					//
		tab[i]=new Espace;		//
	 }					//
	 for (int i=0; i<taille; i++)		//  ---------------------¬
	 {					// | REALLOCATION MEMOIRE|
		delete tab[i];			//  ---------------------
	 }					//	
	 delete[] tab;				//
						//
	 for (int i=0; i<taille; i++)		//
 	 {					//
		tab[i]=tab_aux[i];		//
 	 }					//

	 tab[taille]= new Espace ("Bassin",Nom);
	 setTaille(taille+1);
	 break;


	case ENCLOS:
	 cout<<"Entrez le nom de l'enclos: ";
	 cin>>Nom;
	 
	 tab= new Espace*[taille];		//
	 for (int i=0; i<taille; i++)		//
	 {					//
		tab[i]=new Espace;		//
	 }					//
	 for (int i=0; i<taille; i++)		//  ---------------------¬
	 {					// | REALLOCATION MEMOIRE|
		delete tab[i];			//  ---------------------
	 }					//	
	 delete[] tab;				//
						//
	 for (int i=0; i<taille; i++)		//
 	 {					//
		tab[i]=tab_aux[i];		//
 	 }					//

	 tab[taille]= new Espace ("Enclos",Nom);
	 setTaille(taille+1);
	 break;
	
	case CAGE:	
 	 cout<<"Entrez le nom de la cage: ";
	 cin>>Nom;
	 
	 tab= new Espace*[taille];		//
	 for (int i=0; i<taille; i++)		//
	 {					//
		tab[i]=new Espace;		//
	 }					//
	 for (int i=0; i<taille; i++)		//  ---------------------¬
	 {					// | REALLOCATION MEMOIRE|
		delete tab[i];			//  ---------------------
	 }					//	
	 delete[] tab;				//
						//
	 for (int i=0; i<taille; i++)		//
 	 {					//
		tab[i]=tab_aux[i];		//
 	 }					//

	 tab[taille]= new Espace ("Cage",Nom);
	 setTaille(taille+1);
	 break;
	}
}

void parc::ajoutAnimal(const string& sType)
{
 int iChoix=0;
 cout<<"Ajouter l'animal dans quel espace ?"<<endl;
 for(int i=0; i<getTaille(); i++)
 {
	cout<<"** "<<i+1<<". "<<tab[i]->getType()<<": "<<tab[i]->getNom()<<endl;
 }

 cout<<"Votre choix: ";
 cin>>iChoix;
 while ((iChoix<1)||(iChoix>getTaille()))
 {

 cout<<"Erreur ! Entrez un nombre compris entre 1 et "<<getTaille()<<" ! Votre choix: ";
 cin>>iChoix;
 }
 
 tab[iChoix]->ajoutAnimal(sType);
}

