#ifndef OBJECTHW7_BALROG_H
#define OBJECTHW7_BALROG_H

#include "demon.h"

class balrog: private demon{
public:
    balrog(){
        setSpecies("Balrog");
        setHitPoints(100);
        setStrength(10);
    }
    int getDamge();
};

#endif