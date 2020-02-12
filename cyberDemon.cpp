#include "cyberDemon.h"

int cyberDemon::getDamage() {//define cyber demon get damage function
    int totalDamage = 0;//set total damage as an int with 0 as its value
    int damage;//set damage value as int
    damage = getBaseDamage();//set damage equal to get base damage output
    cout << getSpecies() << " does " << damage << " of damage." << endl;//display damage done
    totalDamage = damage + demonicDamageChance();//add new damage to total damage
    return totalDamage;//return total damage
}