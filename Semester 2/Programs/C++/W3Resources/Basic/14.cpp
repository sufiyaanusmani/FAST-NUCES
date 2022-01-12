#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int radius;
    cout << "Enter radius of sphere: ";
    cin >> radius;
    float const PI = 3.14159;
    float volume = (4.0/3) * PI * pow(radius, 3);
    cout << "Volume of sphere: " << volume << endl;
    return 0;
}