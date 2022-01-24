#include <iostream>
using namespace std;

class Circle{
    private:
        int radius;
    public:
        Circle(int);
        float getArea();
        float getPerimeter();
};

int main(){
    Circle c1(3);
    cout << "Area: " << c1.getArea() << endl;
    cout << "Perimeter: " << c1.getPerimeter() << endl;
    return 0;
}

Circle::Circle(int radius){
    this->radius = radius;
    cout << "Dimensions set successfully" << endl;
}

float Circle::getArea(){
    return(3.14 * radius * radius);
}

float Circle::getPerimeter(){
    return(2 * 3.14 * radius);
}