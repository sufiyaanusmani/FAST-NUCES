#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "Num1 = " << num1 << ", Num2 = " << num2 << endl;
    return 0;
}