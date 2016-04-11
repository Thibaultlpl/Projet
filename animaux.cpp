#include <iostream>
#include <string>
#include <cstdlib>
#include "animaux.h"

using namespace std;

//*********************ANIMAL********************//
bool animal::getEau() const{
 return eau;
}

void animal::setEau(const bool& e){
 eau=e;
}

bool animal::getTerre() const{
 return terre;
}

void animal::setTerre(const bool& t){
 terre=t;
}

bool animal::getAir() const{
 return air;
}

void animal::setAir(const bool& a){
 air=a;
}

animal::animal(){

}

animal::animal(const string& type){
 if (type=="Lion")
 {
	eau=false;
	terre=true;
	air=false;
	danger=true;
 	calibre="gros";
 	sType=type;
 }
 if (type=="Quokka")
 {
	eau=false;
	terre=true;
	air=false;
 	danger=false;
 	calibre="petit";
 	sType=type;
	
 }
 if (type=="Renard")
 {
	eau=false;
	terre=true;
	air=false;
	danger=true;
 	calibre="moyen";
 	sType=type;
	
 }
 if (type=="Dauphin")
 {
	 eau=true;
	 terre=false;
	 air=false;
	 danger=false;
	 calibre="gros";
	 sType=type;
	
 }
 if (type=="Requin")
 {
	 eau=true;
	 terre=false;
	 air=false;
	 danger=true;
	 calibre="gros";
	 sType=type;	
 }
 if (type=="Raie")
 {
	 eau=true;
	 terre=false;
	 air=false;
	 danger=true;
	 calibre="moyen";
	 sType=type;
 }
 if (type=="Perruche")
 {
	 eau=false;
	 terre=false;
	 air=true;
	 danger=false;
	 calibre="petit";
	 sType=type;
 }
 if (type=="Vautour")
 {
	 eau=false;
	 terre=false;
	 air=true;
	 danger=true;
	 calibre="gros";
	 sType=type;	
 }
 if (type=="Toucan")
 {
	 eau=false;
	 terre=false;
	 air=true;
	 danger=true;
	 calibre="petit";
	 sType=type;	
 }

}

animal::~animal(){
}



