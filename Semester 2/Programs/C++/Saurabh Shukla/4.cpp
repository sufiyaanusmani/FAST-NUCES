#include <iostream>
using namespace std;

int area(int, int);
float area(int);

int main(){
	int r;
	cout << "Enter radius of circle ";
	cin >> r;
	cout << "Area of circle: " << area(r) << endl << "<<<<<<<<<<<<<<<<<" << endl;
	int l, b;
	cout << "Enter length and breadth of rectangle: ";
	cin >> l >> b;
	cout << "Area of rectangle: " << area(l, b) << endl;
	return 0;
}

int area(int l, int b){
	return(l*b);
}

float area(int r){
	return(3.14159 * r * r);
}
