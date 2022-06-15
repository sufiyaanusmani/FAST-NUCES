#include <iostream>
using namespace std;

float area(int);
float circumference(int);
int diameter(int);
float AreaOfPie(int, int);

int main(){
    int radius, degree;
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Enter degree of pie: ";
    cin >> degree;

    cout << "Area of circle: " << area(radius) << endl;
    cout << "Circumference of circle: " << circumference(radius) << endl;
    cout << "Diameter: " << diameter(radius) << endl;
    cout << "Area of pi: " << AreaOfPie(radius, degree);
    return 0;
}

float area(int radius){
    return(3.14159 * radius * radius);
}

float circumference(int radius){
    return(2 * 3.14159 * radius);
}

int diameter(int radius){
    return(2 * radius);
}

float AreaOfPie(int radius, int degree){
    return((3.14159 * radius * radius) * (degree / 360.0));
}