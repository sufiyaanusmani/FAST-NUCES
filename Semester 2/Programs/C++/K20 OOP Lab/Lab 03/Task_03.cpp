#include <iostream>
#include <stdlib.h>
using namespace std;

class Glass{
    public:
        int liquidLevel;

        Glass();
        ~Glass();
        void drink(int);
        void refill();
};

int main(){
    Glass g;
    cout << "Initial liquid level: " << g.liquidLevel << endl;
    int amountToDrink;
    while(1){
        do{
            cout << "Enter amount to drink: ";
            cin >> amountToDrink;
            if(amountToDrink > g.liquidLevel){
                cout << "\nNot enough amount, drink less" << endl;
            }else if(amountToDrink == -1){
                exit(0);
            }else{
                g.drink(amountToDrink);
                cout << "Liquid Level: " << g.liquidLevel << endl;
                break;
            }
        }while(1);
        if(g.liquidLevel < 100){
            g.refill();
        }
    }
    return 0;
}

Glass::Glass(){
    liquidLevel = 200;
}

void Glass::drink(int amount){
    liquidLevel = liquidLevel - amount;
}

void Glass::refill(){
    liquidLevel = 200;
    cout << "Glass refilled" << endl;
}

Glass::~Glass(){
    cout << "Program exiting" << endl;
}