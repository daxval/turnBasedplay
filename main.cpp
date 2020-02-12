#include <iostream>//include libraries
#include "elf.h"
#include "balrog.h"
#include "cyberDemon.h"
#include "human.h"


void breaker(){//define breaker function
    for(int x = 0; x < 240; x++){//set for loop to inciment to 240
        cout << '=';//cout =
    }
    cout << endl;//end line
}

using namespace std;//using std

int main() {
    bool menu = true;//set menu equal to true
    int intVal;//set intval to int
    balrog bent;//declare new creature bolrog named bent as a balrog
    elf errie;//declare new creature errie name errie as an elf
    cyberDemon dez;//declare new cyberdemon dez
    human joe;//declare new human joe
    while(menu) {//while menu is true
        cout << "1. Creatures attack!" << endl;//display options
        cout << "2. Creatures retreat!!!" << endl;
        cin >> intVal;//take input
        switch (intVal) {//set switch statement for intVal
            case 1://if case 1
                breaker();//call divider function breaker
                cout << "Total damage: " << bent.getDamge() << endl << endl;//display damage done by Bent
                breaker();//call divider function breaker
                cout << "Total damage: " << errie.getDamage() << endl << endl;//display damage done by Errie
                breaker();//call divider function breaker
                cout << "Total damage: " << dez.getDamage() << endl << endl;//display damage done by Dez
                breaker();//call divider function breaker
                cout << "Total damage: " << joe.getDamage() << endl << endl;//call divider function Joe
                breaker();//call divider function breaker
                break;//break
            case 2://if case 2
                menu = false;//set menu equal to false
                break;//break
        }
    }
    cout << "You ran away..." << endl;//display end program msg
    return 0;//end
}