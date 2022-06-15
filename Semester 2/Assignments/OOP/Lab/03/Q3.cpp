#include <iostream>
using namespace std;

class Circle{
    private:
        float radius;
        float pie;
    public:
        Circle();
        void setRadius(float);
        float getRadius();
        float circumference();
        float area();
};

Circle::Circle(){
    radius = 2.0;
    pie = 3.14;
}

void Circle::setRadius(float radius){
    if(radius > 0 && radius < 15.0){
        this->radius = radius;
    }
}

float Circle::getRadius(){
    return radius;
}

float Circle::circumference(){
    return(2*pie*radius);
}

float Circle::area(){
    return(pie*radius*radius);
}

int main(){
    Circle c1;
    float radius;
    cout << "Enter radius of circle: ";
    cin >> radius;
    c1.setRadius(radius);
    cout << "\nRadius of Circle: " << c1.getRadius() << endl;
    cout << "Circumference: " << c1.circumference() << endl;
    cout << "Area: " << c1.area() << endl;
    return 0;
}