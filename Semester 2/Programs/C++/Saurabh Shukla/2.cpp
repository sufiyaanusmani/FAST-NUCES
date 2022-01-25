#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int radius;
	float area;
	cout << "Enter radius of circle: ";
	cin >> radius;
	area = 3.14159 * radius * radius;
	cout << "Area of circle: " << area << endl;
	return 0;
}
