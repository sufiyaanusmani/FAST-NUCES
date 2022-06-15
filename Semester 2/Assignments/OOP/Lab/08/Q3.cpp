#include <iostream>
using namespace std;

class Rectangle;
class Square{
	friend class Rectangle;
	private:
		int side;
	public:
		Square(int s){
			side =s;
		}
};

class Rectangle{
	private:
		int length;
		int breadth;
	public:
		Rectangle(int length, int breadth){
			this->length = length;
			this->breadth = breadth;
		}
		int getArea(){
			return(length * breadth);
		}
		void shape(const Square &s){
			length = s.side;
			breadth = s.side;
		}
};

int main(){
	Square square(4);
	Rectangle rectangle(3, 6);
	cout << rectangle.getArea() << endl;
	rectangle.shape(square);
	cout << rectangle.getArea() << endl;
	return 0;
}
