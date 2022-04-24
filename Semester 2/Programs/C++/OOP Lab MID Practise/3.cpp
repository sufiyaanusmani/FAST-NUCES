// We are prototyping a robot that refills glasses during dinner. Every glass holds 200 milliliters. During dinner, people either drink water or juice, and as soon as there is less than 100 ml left in the glass, the robot refills it back to 200 ml. Create a class Glass with one public int field LiquidLevel and methods public Drink(int milliliters) that takes the amount of liquid that a person drank and public Refill() that refills the glass to be 200 ml full. Both methods should not return any value. Initially set LiquidLevel to 200. In the Main method create an object of class Glass and read commands from the screen until the user terminates the program (see next). Don't forget to refill the glass when needed!

#include <iostream>
#include <stdlib.h>
using namespace std;

class Glass{
    private:
        int liquidLevel;
    public:
        Glass(){
            liquidLevel = 200;
        }
        void drink(int amount){
            if(amount <= liquidLevel){
                liquidLevel -= amount;
                cout << "New level: " << liquidLevel << endl;
            }else{
                cout << "Not enough drink" << endl;
            }
            if(liquidLevel < 100){
                refill();
            }
        }
        int getLiquidLevel(){
            return liquidLevel;
        }
        void refill(){
            if(liquidLevel < 200){
                cout << "Refilling..." << endl;
                liquidLevel = 200;
            }else{
                cout << "Glass already full" << endl;
            }
        }
};

int main(){
    Glass g;
    int choice, amount;
    while(1){
        cout << "Liquid Level: " << g.getLiquidLevel() << endl;
        cout << "1. Drink" << endl;
        cout << "2. Refill" << endl;
        cout << "3. Exit" << endl;
        cout << endl << "Enter your choice: ";
        cin >> choice;
        if(choice == 1){
            cout << "Enter amount to drink: ";
            cin >> amount;
            g.drink(amount);
        }else if(choice == 2){
            g.refill();
        }else if(choice == 3){
            break;
        }else{
            cout << "Enter a valid choice" << endl;
        }
    }
    return 0;
}