// Design a class named Box whose dimensions are integers and private to the class. The dimensions are
// labelled: length L, breadth B, and height H. The default constructor of the class should initialize L, B,
// and H to 0. The parameterized constructor Box(int length, int breadth, int height) should initialize
// Box’s L, B and H to length, breadth and height. Create two objects box1 and box2 and initialize
// them with parameterized constructor. The copy constructor Box box3 (box1) should set L,B and H,
// respectively.

// Apart from the above, the class should have functions:

// int getLength() - Return box’s length

// int getBreadth() - Return box’s breadth

// int getHeight() - Return box’s height

// long long CalculateVolume() - Return the volume of the box

// Compare box2 and box3 and display the largest box dimension on a single line separated by spaces.

// Comparison conditions are:

// box2.L < box3.L

// box2.B < box3.B && box2.L == box3.L

// box2.H < box3.H && box2.B == box3.B && box2.L == box3.L

#include <iostream>
using namespace std;

class Box{
    private:
        int length, breadth, height;
    public:
        Box();
        Box(int, int, int);
        Box(Box &);
        int getLength();
        int getBreadth();
        int getHeight();
        long long calculateVolume();
        ~Box();
        void setData(int, int, int);
};

Box::Box(){
    length = 0;
    breadth = 0;
    height = 0;
}

Box::Box(int length, int breadth, int height){
    this->length = length;
    this->breadth = breadth;
    this->height = height;
}

Box::Box(Box &b){
    this->length = b.length;
    this->breadth = b.breadth;
    this->height = b.height;
}

int Box::getLength(){
    return length;
}

int Box::getBreadth(){
    return breadth;
}

int Box::getHeight(){
    return height;
}

long long Box::calculateVolume(){
    return(length*breadth*height);
}

void Box::setData(int length, int breadth, int height){
    this->length = length;
    this->breadth = breadth;
    this->height = height;
}

Box::~Box(){
    cout << "Destructor" << endl;
}

int main(){
    Box b1(1, 2, 3);
    cout << b1.getLength() << " " << b1.getBreadth() << " " << b1.getHeight() << endl;
    Box b2(b1);
    b2.setData(3, 99, 4);
    cout << b2.getLength() << " " << b2.getBreadth() << " " << b2.getHeight() << endl;

    return 0;
}