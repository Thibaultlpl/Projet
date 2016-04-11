#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include "barney.h"
#include "parc.h"

#define LION 1
#define QUOKKA 2
#define RENARD 3
#define DAUPHIN 4
#define REQUIN 5
#define RAIE 6
#define PERRUCHE 7 
#define VAUTOUR 8 
#define TOUCAN 9

using namespace std;

string Barney::getNom()const{
 return sNom;
}

Barney::Barney(){
 pres=true;
}

Barney::~Barney(){

}

void Barney::presentation(const string& nom){
 if (pres==true) 
 {
	system("clear");
 	cout<<"Salut "<<nom<<" ! Je suis Barney, je suis charge d'attraper les animaux a la demande. Tu choisis, je l'attrape ! Je le mettrais ensuite dans un enclos !"<<endl;
 	pres=false;
 }
 std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
 cout << "Appuyez sur entrée pour continuer..."; 
 cin.ignore( numeric_limits<streamsize>::max(), '\n' );
}

void Barney::attrapBarney(parc* p){
 int iChoix=0;
 string sType="";
 cout<<"Ok ! "<<endl;
 cout<<"Quel animal veux-tu ajouter ?\n1.** Lion\t\t4.** Dauphin\t7.** Perruche\n2.** Quokka\t\t5.** Requin\t8.** Vautour\n3.** Renard\t\t6.** Raie\t9.** Toucan\nVotre choix: ";
 cin>>iChoix;
 while ((iChoix<1)||(iChoix>9))
 {

 cout<<"Erreur ! Entrez un nombre compris entre 1 et 9 ! Votre choix: ";
 cin>>iChoix;
 }
 switch (iChoix) {

 	case LION:
 	 sType="Lion";
	 break;

 	case QUOKKA:
 	 sType="Lion";
	 break;

 	case RENARD:
 	 sType="Lion";
 	 break;

 	case DAUPHIN:
 	 sType="Lion";
	 break;

 	case REQUIN:
 	 sType="Lion";
	 break;

 	case RAIE:
 	 sType="Lion";
	 break;

 	case PERRUCHE:
 	 sType="Lion";
	 break;

 	case VAUTOUR:
 	 sType="Lion";
	 break;

 	case TOUCAN:
 	 sType="Lion";
	 break;
 }
 p->ajoutAnimal(sType);
}
