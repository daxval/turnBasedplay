#include <iostream>
#include "creatures.h"
using namespace std;

#ifndef OBJECTHW7_DEMON_H
#define OBJECTHW7_DEMON_H

class demon:public creatures{
public:
    virtual int demonicDamageChance();

};

#endif