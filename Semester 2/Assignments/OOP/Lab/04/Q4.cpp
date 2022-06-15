#include <iostream>
using namespace std;

class Circle{
    private:
        float radius, pi, circumference;
    public:
        Circle();
        Circle(float, float);
        Circle(bool);
};

Circle::Circle(){
    radius = 2.0;
    pi = 3.14;
}

Circle::Circle(float radius, float pi){
    this->radius = radius;
    this->pi = pi;
}

Circle::Circle(bool val){
    float circumference, area;
    cout << "Enter radius of circle: ";
    cin >> radius;
    this->pi = 3.14;
    if(val == true){
        circumference = 2 * pi * radius;
        area = pi * radius * radius;
        cout << "Circumference: " << circumference << endl;
        cout << "Area: " << area << endl;
    }
}

int main(){
    Circle c1(true);
    return 0;
}