// Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and breadth are passed as parameters to its constructor.

#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length, breadth;
    public:
        Rectangle(int, int);
        int getArea();
};

int main(){
    Rectangle r1(4, 5), r2(5, 8);
    cout << "Area of first rectangle: " << r1.getArea() << endl;
    cout << "Area of second rectangle: " << r2.getArea() << endl;
    return 0;
}

Rectangle::Rectangle(int length, int breadth){
    this->length = length;
    this->breadth = breadth;
    cout << "Dimensions of rectangle set successfully..." << endl;
}

int Rectangle::getArea(){
    return(length * breadth);
}