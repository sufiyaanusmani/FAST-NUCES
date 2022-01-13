#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if(num1 == num2){
        cout << "Answer: " << 3 * (num1 + num2);
    }else{
        cout << "Answer: " << num1 + num2;
    }
    return 0;
}