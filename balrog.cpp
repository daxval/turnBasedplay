#include "balrog.h"

int balrog::getDamge() {//declare barlog get damage
    int totalDamage = 0;//int total damage
    int damage;//declare damage as int
    damage = getBaseDamage();//set damage equal to get base damage output
    cout << getSpecies() << " does " << damage << " points of damage." << endl;//display amount of damage delt
    totalDamage = damage + demonicDamageChance();//total damage is equal to old damage plus demonic damage chance
    damage = getBaseDamage();//damage is equal get base damage output
    cout << getSpecies() << " speed allows it to attack again for " << damage << " points of damage"  << endl;//display damage done
    totalDamage = damage + demonicDamageChance() + totalDamage;//add demoic damage output and new attack to total attack damage
    return totalDamage;//return damage
}