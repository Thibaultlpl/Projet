#ifndef ANIMAUX_H
#define ANIMAUX_H

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class animal{
 bool eau;
 bool terre;
 bool air;
 bool danger;
 string calibre;
 string sType;

public:
 bool getEau() const;
 void setEau(const bool& e);
 bool getTerre() const;
 void setTerre(const bool& t);
 bool getAir() const;
 void setAir(const bool& a);
 
 animal();
 animal (const string& type);
 ~animal();
};


#endif
