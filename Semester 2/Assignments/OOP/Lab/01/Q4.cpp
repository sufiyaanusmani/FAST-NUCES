#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <cmath>
using namespace std;

void add(int, int);
void subtract(int, int);
void multiply(int, int);
void divide(int, int);
void remainder(int, int);
void square(int);
void cube(int);
void roundOff(float);

int main(){
    int choice;
    int a, b;
    float c;
    while(1){
        system("cls");
        int choice;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Remainder" << endl;
        cout << "6. Square" << endl;
        cout << "7. Cube" << endl;
        cout << "8. Round Off" << endl;
        cout << "9. Exit" << endl;

        cout << "Enter your choice: ";
        fflush(stdin);
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                add(a, b);
                break;
            case 2:
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                subtract(a, b);
                break;
            case 3:
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                multiply(a, b);
                break;
            case 4:
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                divide(a, b);
                break;
            case 5:
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                remainder(a, b);
                break;
            case 6:
                cout << "Enter a number: ";
                cin >> a;
                square(a);
                break;
            case 7:
                cout << "Enter a number: ";
                cin >> a;
                cube(a);
                break;
            case 8:
                cout << "Enter a number to round off: ";
                cin >> c;
                roundOff(c);
                break;
            case 9:
                exit(0);
                break;
            default:
                cout << "\nWrong choice entered, please enter a valid choice";
                break;
            
        }
        cout << "\nPress any key to continue...";
        getch();
    }
    return 0;
}

void add(int a, int b){
    cout << endl << a << " + " << b << " = " << a+b << endl;
}

void subtract(int a, int b){
    cout << endl << a << " - " << b << " = " << a-b << endl;
}

void multiply(int a, int b){
    cout << endl << a << " x " << b << " = " << a*b << endl;
}

void divide(int a, int b){
    cout << endl << a << " / " << b << " = " << (float)a/b << endl;
}

void remainder(int a, int b){
    cout << endl << "Remainder: " << a%b << endl;
}

void square(int a){
    cout << "Square of " << a << " is " << a*a << endl;
}

void cube(int a){
    cout << "Cube of " << a << " is " << a*a*a << endl;
}

void roundOff(float c){
    cout << "Result: " << round(c) << endl;
}