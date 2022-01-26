#include <iostream>
using namespace std;

class Perimeter{
    private:
        int length, breadth;
    public:
        Perimeter(int, int);
        friend class printClass;
};

class printClass{
    public:
        void display(Perimeter);
};

int main(){
    Perimeter p(10, 4);
    printClass pc;
    pc.display(p);
    return 0;
}

Perimeter::Perimeter(int length, int breadth){
    this->length = length;
    this->breadth = breadth;
}

void printClass::display(Perimeter p){
    cout << "Perimeter: " << p.length + p.breadth << endl;
}