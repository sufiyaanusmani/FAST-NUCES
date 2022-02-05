// Write a function named "swap_floats" that takes two floating point arguments and
// interchanges the values that are stored in those arguments. The function should return no
// value.

#include <iostream>
using namespace std;

void swap_floats(float *, float *);

int main(){
    float a = 10;
    float b = 20;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swap_floats(&a, &b);
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    return 0;
}

void swap_floats(float *a, float *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

