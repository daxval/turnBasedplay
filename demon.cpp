#include "demon.h"

int demon::demonicDamageChance() {
    if(rand()%100 < 5){
        cout << "Demonic origin ravages for an extra 50 points of damage. RIP m8." << endl;
        return 50;
    }else return 0;
}