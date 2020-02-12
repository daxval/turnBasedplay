#ifndef OBJECTHW7_ELF_H
#define OBJECTHW7_ELF_H

#include "creatures.h"//include libraries

class elf: public creatures{//define elf as a subclass of creatures
public:
    elf(){//set default constructor for elf
        setSpecies("elf");
        setStrength(20);
        setHitPoints(50);
    }
    int getDamage();//declare get damage function
    bool magicalEnergyChance();//declare magical energy chance function
};

#endif
