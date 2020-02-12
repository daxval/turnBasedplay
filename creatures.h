#include <iostream>

using namespace std;

#ifndef OBJECTHW7_CREATURES_H
#define OBJECTHW7_CREATURES_H

class creatures{//declare creatures class
private://set private variables
    int strength;//set strength as int
    int hitpoints;//set strength as it
    string species;//set species as string
public:
    creatures(){//set default constructor for creatures
        strength = 10;//set strength to 10
        hitpoints = 10;//set hp to 10
    }

    creatures(int newStrength, int newhitPoints){//define creatures constructor
        strength = newStrength;
        hitpoints = newhitPoints;
    }
    virtual int getStrength();//declare get strength function
    virtual void setStrength(int newStrength);//declare set strength function
    virtual int getHitPoints();//declare get hit points function
    virtual void setHitPoints(int newHitPoint);//declare set hit points function
    virtual int getBaseDamage();//declare get base damage function
    virtual void setSpecies(string newSpecies);//declare set species function
    virtual string getSpecies();//declare get species function
};

#endif