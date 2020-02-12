#include<iostream>          //include libraries
#include "creatures.h"

using namespace std;        //using namespace std

#ifndef OBJECTHW7_HUMAN_H
#define OBJECTHW7_HUMAN_H

class human: public creatures{//declare human as a subclass of creatures
public:
    human(){//declare constructior for human
        setSpecies("human");//declare species name
        setHitPoints(100);//declare species name
        setStrength(10);//declare species strength
    }
    int getDamage();//declare get damage function
};

#endif