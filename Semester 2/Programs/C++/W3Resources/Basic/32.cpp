#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num > 0){
        cout << "Positive Number";
    }else if(num < 0){
        cout << "Negative Number";
    }else{
        cout << "Zero";
    }
    return 0;
}