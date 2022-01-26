#include <iostream>
using namespace std;

class Shape{
    protected:
        int length, breadth;
    public:
        Shape(int, int);
        virtual float getArea()=0; 
};

class Rectangle: public Shape{
    public:
        Rectangle(int l, int b):Shape(l, b) {}
        float getArea();
};

class Triangle: public Shape{
    public:
        Triangle(int l, int b):Shape(l, b) {}
        float getArea();
};

int main(){
    Rectangle r(3, 4);
    Triangle t(6, 5);
    cout << "Area of rectangle: " << r.getArea() << endl;
    cout << "Area of triangle: " << t.getArea() << endl;
    return 0;
}

Shape::Shape(int length, int breadth){
    this->length = length;
    this->breadth = breadth;
}

float Rectangle::getArea(){
    return(length * breadth);
}

float Triangle::getArea(){
    return((length * breadth) / 2.0);
}