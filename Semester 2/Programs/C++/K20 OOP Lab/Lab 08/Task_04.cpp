#include <iostream>
using namespace std;

int multiply(int, int);
int multiply(int, int, int);
double multiply(double, double);
double multiply(double, double, double);

int main(){
    cout << "6 x 8 = " << multiply(6, 8) << endl;
    cout << "6 x 8 x 10 = " << multiply(6, 8, 10) << endl;
    cout << "6.3 x 8.8 = " << multiply(6.3, 8.8) << endl;
    cout << "6.2 x 8.9 * 7.9 = " << multiply(6.2, 8.9, 7.9) << endl;
    return 0;
}

int multiply(int x, int y){
    return(x*y);
}

int multiply(int x, int y, int z){
    return(x*y*z);
}

double multiply(double x, double y){
    return(x*y);
}

double multiply(double x, double y, double z){
    return(x*y*z);
}