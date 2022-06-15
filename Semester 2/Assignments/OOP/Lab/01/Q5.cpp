#include <iostream>
using namespace std;

unsigned long long int factorial(int);   // using unsigned long long int as value gets very large rapidly

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial: " << factorial(num) << endl;
    return 0;
}

unsigned long long int factorial(int num){
    int i;
    unsigned long long int ans;
    ans = 1;
    for(i=num;i>=1;i--){
        ans *= i;
    }
    return ans;
}