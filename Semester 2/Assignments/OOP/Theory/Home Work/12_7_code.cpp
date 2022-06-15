// Name: Sufiyaan Usmani
// Roll No: 21K-3195
// Section: BCS-2J

#include <iostream>
using namespace std;

class Shape{
    protected:
        double l1;
    public:
        Shape(double l1=0.0){
            this->l1 = l1;
        }
};

class TwoDimensionalShape: public Shape{
    public:
        TwoDimensionalShape(double l1):Shape(l1){

        }
        void display(){
            cout << "Shape Type: Two Dimensional" << endl;
        }
};

class ThreeDimensionalShape: public Shape{
    public:
        ThreeDimensionalShape(double l1):Shape(l1){

        }
        void display(){
            cout << "Shape Type: Three Dimensional" << endl;
        }
};

class Circle: public TwoDimensionalShape{
    private:
        const float PI;
    public:
        Circle(double l1):TwoDimensionalShape(l1) ,PI(3.14159){

        }
        double calculateArea(){
            return(PI * l1 * l1);
        }
        double calculatePerimeter(){
            return(2 * PI * l1);
        }
        void display(){
            TwoDimensionalShape::display();
            cout << "Shape: Circle" << endl;
            cout << "Radius: " << l1 << endl;
            cout << "Area: " << calculateArea() << endl;
            cout << "Circumference: " << calculatePerimeter() << endl;
        }
};

class Quadrilateral: public TwoDimensionalShape{
    protected:
        double l2;
    public:
        Quadrilateral(double l1, double l2):TwoDimensionalShape(l1){
            this->l2 = l2;
        }
        double calculateArea(){
            return(l1 * l2);
        }
        double calculatePerimeter(){
            return(2*l1 + 2*l2);
        }
        void display(){
            TwoDimensionalShape::display();
            cout << "Quadrilateral" << endl;
            cout << "Length: " << l1 << endl;
            cout << "Breadth: " << l2 << endl;
            cout << "Area: " << calculateArea() << endl;
            cout << "Perimeter: " << calculatePerimeter() << endl;
        }
};
class Square: public Quadrilateral{
    public:
        Square(double length):Quadrilateral(length, length){ 
        }
        void display(){
            cout << "Shape: Square" << endl;
            Quadrilateral::display();
        }
};

class Rectangle: public Quadrilateral{
    public:
        Rectangle(double l1, double l2):Quadrilateral(l1, l2){    
        }
        void display(){
            cout << "Shape: Rectangle" << endl;
            Quadrilateral::display();
        }
};

class Triangle: public TwoDimensionalShape{
    private:
        double l2;  // second side of triangle
        double base;    // third side of triangle
        double height;  // perpendicular height of triangle 
    public:
        Triangle(double l1, double l2, double base, double height):TwoDimensionalShape(l1){
            this->l2 = l2;
            this->base = base;
            this->height = height;
        }
        double calculateArea(){
            return(0.5 * base * height);
        }
        double calculatePerimeter(){
            return(l1 + l2 + base);
        }
        void display(){
            TwoDimensionalShape::display();
            cout << "Shape: Triangle" << endl;
            cout << "Side 1: " << l1 << endl;
            cout << "Side 2: " << l2 << endl;
            cout << "Side 3 (base): " << base << endl;
            cout << "Perpendicular Height: " << height << endl;
            cout << "Area: " << calculateArea() << endl;
            cout << "Perimeter: " << calculatePerimeter() << endl;
        }
};

class Sphere: public ThreeDimensionalShape{
    private:
        const float PI;
    public:
        Sphere(double l1): ThreeDimensionalShape(l1), PI(3.14159){

        }
        double calculateVolume(){
            return((4.0/3.0) * PI * l1 * l1 * l1);
        }
        double calculateSurfaceArea(){
            return(4 * PI * l1 * l1);
        }
        void display(){
            ThreeDimensionalShape::display();
            cout << "Shape: Sphere" << endl;
            cout << "Radius: " << l1 << endl;
            cout << "Volume: " << calculateVolume() << endl;
            cout << "Surface Area: " << calculateSurfaceArea() << endl;
        }
};

class Cube: public ThreeDimensionalShape{
    private:
        double l2;
        double l3;
    public:
        Cube(double l1):ThreeDimensionalShape(l1){
            this->l2 = l1;
            this->l3 = l1;
        }
        double calculateVolume(){
            return(l1 * l1 * l1);
        }
        double calculateSurfaceArea(){
            return(6 * l1 * l1);
        }
        void display(){
            ThreeDimensionalShape::display();
            cout << "Shape: Cube" << endl;
            cout << "Length: " << l1 << endl;
            cout << "Breadth: " << l2 << endl;
            cout << "Height: " << l3 << endl;
            cout << "Volume: " << calculateVolume() << endl;
            cout << "Surface Area: " << calculateSurfaceArea() << endl;
        }
};

class Cuboid: public ThreeDimensionalShape{
    private:
        double l2;
        double l3;
    public:
        Cuboid(double l1, double l2, double l3):ThreeDimensionalShape(l1){
            this->l2 = l2;
            this->l3 = l3;
        }
        double calculateVolume(){
            return(l1 * l1 * l1);
        }
        double calculateSurfaceArea(){
            return((2 * l1 * l2) + (2 * l1 * l3) + (2 * l2 * l3));
        }
        void display(){
            ThreeDimensionalShape::display();
            cout << "Shape: Cuboid" << endl;
            cout << "Length: " << l1 << endl;
            cout << "Breadth: " << l2 << endl;
            cout << "Height: " << l3 << endl;
            cout << "Volume: " << calculateVolume() << endl;
            cout << "Surface Area: " << calculateSurfaceArea() << endl;
        }
};

int main(){
    cout << "Class: SQUARE" << endl;
    Square s(2.5);
    s.display();
    cout << "---------------------------" << endl;
    cout << "Class: RECTANGLE" << endl;
    Rectangle r(3.4, 6.7);
    r.display();
    cout << "---------------------------" << endl;
    cout << "Class: CIRCLE" << endl;
    Circle cir(6.6);
    cir.display();
    cout << "---------------------------" << endl;
    cout << "Class: TRIANGLE" << endl;
    Triangle t(2.2, 3.3, 4.4, 5.5);
    t.display();
    cout << "---------------------------" << endl;
    cout << "Class: CUBE" << endl;
    Cube c1(11.2);
    c1.display();
    cout << "---------------------------" << endl;
    cout << "Class: CUBOID" << endl;
    Cuboid c2(9.8, 23.1, 5.7);
    c2.display();
    cout << "---------------------------" << endl;
    cout << "Class: SPHERE" << endl;
    Sphere sph(8.6);
    sph.display();
    
    return 0;
}