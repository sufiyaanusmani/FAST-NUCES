/*
    Write a program that defines a shape class with a constructor that gives value to width and height. The define two sub-classes triangle and rectangle, that calculate the area of the shape area (). In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.
*/

#include <iostream>
using namespace std;

class Shape{
    protected:
        int length, height;
    public:
        void setDimension(int, int);
        float getArea();
};

class Triangle: public Shape{
    public:
        float getArea();
};

class Rectangle: public Shape{
    public:
        float getArea();
};

int main(){
    Triangle t;
    Rectangle r;
    t.setDimension(3, 4);
    r.setDimension(5, 6);
    cout << "Area of Triangle: " << t.getArea() << endl;
    cout << "Area of Rectangle: " << r.getArea() << endl;
    return 0;
}

void Shape::setDimension(int l, int h){
    length = l;
    height = h;
}

float Triangle::getArea(){
    return(0.5 * length * height);
}

float Rectangle::getArea(){
    return(length * height);
}