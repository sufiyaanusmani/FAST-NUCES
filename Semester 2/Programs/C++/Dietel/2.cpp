// (Rational Class) Create a class called Rational for performing arithmetic with fractions.
// Write a program to test your class.
// Use integer variables to represent the private data of the class—the numerator and the denominator. Provide a constructor that enables an object of this class to be initialized when it’s declared.
// The constructor should contain default values in case no initializers are provided and should store
// the fraction in reduced form. For example, the fraction
// would be stored in the object as 1 in the numerator and 2 in the denominator. Provide public
// member functions that perform each of the following tasks:
// a) Adding two Rational numbers. The result should be stored in reduced form.
// b) Subtracting two Rational numbers. The result should be stored in reduced form.
// c) Multiplying two Rational numbers. The result should be stored in reduced form.
// d) Dividing two Rational numbers. The result should be stored in reduced form.
// e) Printing Rational numbers in the form a/b, where a is the numerator and b is the denominator.
// f) Printing Rational numbers in floating-point format.

#include <iostream>
using namespace std;

class Rational{
    private:
        int numerator, denominator;
        void reduced();
    public:
        Rational();
        Rational(int, int);
        Rational add(const Rational &);
        Rational subtract(const Rational &);
        Rational multiply(const Rational &);
        Rational divide(const Rational &);
        void printFraction();
        float printDecimal();
};

int main(){
    Rational c(2, 3), d(7, 8), x;
    c.printFraction();
    d.printFraction();
    x = c.multiply(d);
    x.printFraction();
    return 0;
}

Rational::Rational(){
    numerator = 1;
    denominator = 1;
}

Rational::Rational(int numerator, int denominator){
    this->numerator = numerator;
    this->denominator = denominator;
}

Rational Rational::add(const Rational &r){
    Rational temp;
    temp.numerator = (numerator * r.denominator) + (denominator * r.numerator);
    temp.denominator = denominator * r.denominator;
    temp.reduced();
    return temp;
}

Rational Rational::subtract(const Rational &r){
    Rational temp;
    temp.numerator = (numerator * r.denominator) - (denominator * r.numerator);
    temp.denominator = denominator * r.denominator;
    temp.reduced();
    return temp;
}

Rational Rational::multiply(const Rational &r){
    Rational temp;
    temp.numerator = numerator * r.numerator;
    temp.denominator = denominator * r.denominator;
    temp.reduced();
    return temp;
}

Rational Rational::divide(const Rational &r){
    Rational temp;
    temp.numerator = numerator * r.denominator;
    temp.denominator = denominator * temp.denominator;
    temp.reduced();
    return temp;
}

void Rational::reduced(){
    int smallest;
    smallest = numerator<denominator?numerator:denominator;
    int i;
    for(i=smallest;i>=1;i--){
        if(numerator%i == 0 && denominator%i == 0){
            break;
        }
    }
    numerator = numerator / i;
    denominator = denominator / i;
}

void Rational::printFraction(){
    cout << numerator << " / " << denominator << endl;
}

float Rational::printDecimal(){
    return((float)numerator/denominator);
}