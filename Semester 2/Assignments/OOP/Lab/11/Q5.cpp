#include <iostream>
using namespace std;

template <class T1, class T2>
void multiply(T1 a, T2 b){
    cout << a << " x " << b << " = " << a*b << endl;
}

template <class T1, class T2, class T3>
void multiply(T1 a, T2 b, T3 c){
    cout << a << " x " << b << " x " << c << " = " << a*b*c << endl;
}

int main(){
    multiply(4, 3);
    multiply(2.5, 2.0, 4.3);
    return 0;
}