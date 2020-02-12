#include "human.h"

int human::getDamage(){//define get damage
    int damage;//decalare as int
    damage = getBaseDamage();//set damage equal to get base damage output
    cout << getSpecies() << " does " << damage << " points of damage." << endl;//display damage delt
    return damage;//return damage delt
}