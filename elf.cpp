#include "elf.h"

int elf::getDamage(){//define get damage for elf
    int totalDamage = 0;//set total damage as an int
    int damage;//set damage as an int
    damage = getBaseDamage();//damage is equal to the out put of get bas damage
    if(magicalEnergyChance()){//if magical energy chance returns true
        damage = damage*2;//damage is multiplied by 2
    }
    cout << getSpecies() << " does " << damage << " points of damage." << endl;//display damage
    return damage;
}

bool elf::magicalEnergyChance() {//define magical energy chance function
    if(rand()%10 == 1){//if rand mod 10 is equal to 1
        cout << "The magic within surges for a attack with double damage" << endl;//display event
        return true;//return true
    }else{//else
        return false;//return false
    }
}