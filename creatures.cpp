#include <utility>//include libaries
#include "creatures.h"

int creatures::getStrength(){//set strength function
    return strength;
}

void creatures::setStrength(int newStrength){
    strength = newStrength;
}

int creatures::getHitPoints(){//define get hit points function
    return hitpoints;//return hitpoints
}

void creatures::setHitPoints(int newHitPoint){//define get hit points function
    hitpoints = newHitPoint;//set hitpoints equal to new hit points
}

int creatures::getBaseDamage(){//define get base damage
    int x = rand() % strength + 1;//set x equal to random mod strength plus one
    return x;//return x
}

void creatures::setSpecies(string newSpecies) {//define set species function
    species = newSpecies;//set species equal to new speicies
}

string creatures::getSpecies() {//define get species function
    return species;//return species
}