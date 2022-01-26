#include <iostream>
using namespace std;

int volume(int);
float volume(int, int);
int volume(int, int, int);

int main(){
    int side;
    cout << "Enter side of cube: ";
    cin >> side;
    cout << "Volume of cube: " << volume(side) << endl;
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    int radius, height;
    cout << "Enter radius and height of cylinder: ";
    cin >> radius >> height;
    cout << "Volume of cylinder: " << volume(radius, height) << endl;
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    int length, breadth;
    cout << "Enter dimensions of rectangular box: ";
    cin >> length >> breadth >> height;
    cout << "Volume of rectangular box: " << volume(length, breadth, height) << endl;
    return 0;
}

int volume(int side){
    return(side*side*side);
}

float volume(int radius, int height){
    return(3.14*radius*radius*height);
}

int volume(int length, int breadth, int height){
    return(length*breadth*height);
}