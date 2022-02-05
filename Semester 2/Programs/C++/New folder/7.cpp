// Write a program to read an amount (integer value) and break the amount into the smallest
// possible number of bank notes. Note: The possible banknotes are 5000, 1000, 500, 100, 50,
// 20 and 10.

#include <iostream>
using namespace std;

int main(){
    int amount;
    cout << "Enter amount: ";
    cin >> amount;

    int fiveThousand = amount / 5000;
    amount %= 5000;
    int thousand = amount / 1000;
    amount %= 1000;
    int fiveHundred = amount / 500;
    amount %= 500;
    int hundred = amount / 100;
    amount %= 100;
    int fifty = amount / 50;
    amount %= 50;
    int twenty = amount / 20;
    amount %= 20;
    int ten = amount / 10;
    
    cout << "5000: " << fiveThousand << endl;
    cout << "1000: " << thousand << endl;
    cout << "500 : " << fiveHundred << endl;
    cout << "100 : " << hundred << endl;
    cout << "50  : " << fifty << endl;
    cout << "20  : " << twenty << endl;
    cout << "10  : " << ten << endl;

    return 0;
}
