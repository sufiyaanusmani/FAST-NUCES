#include <iostream>
#include <cmath>
using namespace std;

class Shape{
    private:
        int length;
        int area;
    public:
        Shape();
        Shape(int);
        void calculateArea();
        Shape operator+(Shape &);
        void showArea();
};

int main(){
    Shape s1(3), s2(4);
    s1.calculateArea();
    s2.calculateArea();
    Shape s3;
    s3 = s1 + s2;
    s3.showArea();
    return 0;
}

Shape::Shape(){

}

Shape::Shape(int length){
    this->length = length;
}

void Shape::calculateArea(){
    area = length * length;
}

Shape Shape::operator+(Shape &s){
    Shape temp;
    temp.area = area + s.area;
    temp.length = sqrt(temp.area);
    return temp;
}

void Shape::showArea(){
    cout << "Area: " << area << endl;
}