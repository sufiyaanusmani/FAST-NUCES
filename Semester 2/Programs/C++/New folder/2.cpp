// Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with a function to print the area and perimeter.

#include <iostream>
using namespace std;

class Triangle{
    private:
        int s1, s2, s3;
    public:
        void setDimension(int, int, int);
        float getArea();
        int getPerimeter();
};

int main(){
    Triangle t;
    t.setDimension(1, 2, 3);
    cout << "Area of Triangle: " << t.getArea() << endl;
    cout << "Perimeter of Triangle: " << t.getPerimeter() << endl;
    return 0;
}

void Triangle::setDimension(int s1, int s2, int s3){
    this->s1 = s1;
    this->s2 = s2;
    this->s3 = s3;
}

float Triangle::getArea(){
    return((s1+s2+s3)/2.0);
}

int Triangle::getPerimeter(){
    return(s1+s2+s3);
}