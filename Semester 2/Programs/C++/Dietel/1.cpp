// (Complex Class) Create a class called Complex for performing arithmetic with complex numbers. Write a program to test your class. Complex numbers have the form
// realPart + imaginaryPart * i
// where i is
// Use double variables to represent the private data of the class. Provide a constructor that enables
// an object of this class to be initialized when it’s declared. The constructor should contain default
// values in case no initializers are provided. Provide public member functions that perform the following tasks:
// a) Adding two Complex numbers: The real parts are added together and the imaginary
// parts are added together.
// b) Subtracting two Complex numbers: The real part of the right operand is subtracted from
// the real part of the left operand, and the imaginary part of the right operand is subtracted from the imaginary part of the left operand.
// c) Printing Complex numbers in the form (a, b), where a is the real part and b is the imaginary part.

#include <iostream>
using namespace std;

class Complex{
    private:
        double realPart, imaginaryPart;
    public:
        Complex();
        Complex(double, double);
        void setData(double, double);
        Complex add(const Complex &);
        Complex operator+(const Complex &);
        Complex subtract(const Complex &);
        void display();
};

int main(){
    Complex c1(2, 3), c2(4,5);
    Complex c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}

Complex::Complex(){
    realPart = 1;
    imaginaryPart = 1;
}

Complex::Complex(double realPart, double imaginaryPart){
    this->realPart = realPart;
    this->imaginaryPart = imaginaryPart;
}

void Complex::setData(double realPart, double imaginaryPart){
    this->realPart = realPart;
    this->imaginaryPart = imaginaryPart;
}

Complex Complex::add(const Complex &c){
    Complex temp;
    temp.realPart = realPart + c.realPart;
    temp.imaginaryPart = imaginaryPart + c.imaginaryPart;
    return temp;
}

Complex Complex::subtract(const Complex &c){
    Complex temp;
    temp.realPart = realPart - c.realPart;
    temp.imaginaryPart = imaginaryPart - c.imaginaryPart;
    return temp;
}

void  Complex::display(){
    cout << realPart << " + " << imaginaryPart << "i" << endl;
}

Complex Complex::operator+(const Complex &c){
    Complex temp;
    temp.realPart = realPart + c.realPart;
    temp.imaginaryPart = imaginaryPart + c.imaginaryPart;
    return temp;
}