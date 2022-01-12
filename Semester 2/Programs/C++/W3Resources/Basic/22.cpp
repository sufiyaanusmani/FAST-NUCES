#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter two angles: ";
    cin >> a >> b;
    cout << "Third angle: " << 180-a-b;
    return 0;
}