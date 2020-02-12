#include "demon.h"
#include <string>

using namespace std;
#ifndef OBJECTHW7_CYBERDEMON_H
#define OBJECTHW7_CYBERDEMON_H

class cyberDemon:public demon{
public:
    cyberDemon(){
        setSpecies("cyberDemon");//declare species name
        setHitPoints(200);//declare species hp
        setStrength(50);//dec;are species strength
    }
    int getDamage();//declare get damage for cyber demon
};

#endif