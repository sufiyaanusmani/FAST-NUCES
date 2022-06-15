#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
    int burger, fries, pizza, softDrink;
    float totalCharges;
    char choice;
    burger = fries = pizza = softDrink = 0;
    cout << "Do you want a burger? [y/n] : ";
    choice = getche();
    if(choice == 'y' || choice == 'Y'){
        cout << "\nEnter quantity: ";
        cin >> burger;
    }

    cout << "\nDo you want fries? [y/n] : ";
    choice = getche();
    if(choice == 'y' || choice == 'Y'){
        cout << "\nEnter quantity: ";
        cin >> fries;
    }

    cout << "\nDo you want a pizza? [y/n] : ";
    choice = getche();
    if(choice == 'y' || choice == 'Y'){
        cout << "\nEnter quantity: ";
        cin >> pizza;
    }

    cout << "\nDo you want a soft drink? [y/n] : ";
    choice = getche();
    if(choice == 'y' || choice == 'Y'){
        cout << "\nEnter quantity: ";
        cin >> softDrink;
    }

    totalCharges = (burger * 200) + (fries * 50) + (pizza * 500) + (softDrink * 50);

    cout << "\nCharges (without tax): " << totalCharges << endl;
    cout << "\nEnter discount: ";
    string code;
    cin >> code;
    if(code == "DISCOUNT20" || code == "discount20"){
        totalCharges = 0.8 * totalCharges;  // removing 20% from original amount
    }else{
        cout << "Invalid Discount Code" << endl;
    }

    totalCharges = 1.1 * totalCharges; // adding tax
    cout << "\nFinal Price: " << totalCharges << endl;

    return 0;
}