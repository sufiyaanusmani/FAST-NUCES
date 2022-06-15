#include <iostream>
#include <conio.h>
using namespace std;

int ConvertToASCII(char);

int main(){
    char x;
    int ascii;
    cout << "Enter a character: ";
    x = getche();
    ascii = ConvertToASCII(x);
    cout << "\nASCII Value: " << ascii << endl;
    return 0;
}

int ConvertToASCII(char x){
    return(x);
}