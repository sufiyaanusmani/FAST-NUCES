// Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with the constructor having the three sides as its parameters.

#include <iostream>
using namespace std;

class Triangle{
    private:
        int s1, s2, s3;
    public:
        Triangle(int, int, int);
        int getPerimeter();
};

int main(){
    Triangle t(1, 2, 3);
    cout << "Perimeter: " << t.getPerimeter() << endl;
    return 0;
}

Triangle::Triangle(int s1, int s2, int s3){
    this->s1 = s1;
    this->s2 = s2;
    this->s3 = s3;
    cout << "Dimensions set successfully..." << endl;
}

int Triangle::getPerimeter(){
    return(s1+s2+s3);
}