// Name: Sufiyaan Usmani
// Roll No: 21K-3195
// Section: BCS-2J

#include <iostream>
using namespace std;

class Quadrilateral{
	protected:
		double length;
		double width;
		static int quadrilateralCount;
	public:
		Quadrilateral(double length=0, double width=0){
			setLength(length);
			setWidth(width);
			incrementCount();
		}
		void setLength(double length){
			if(length > 0.0){
				this->length = length;
			}else{
				this->length = 0.0;
			}
		}
		void setWidth(double width){
			if(length > 0.0){
				this->width = width;
			}else{
				this->width = 0.0;
			}
		}
		double getLength(){
			return length;
		}
		double getWidth(){
			return width;
		}
		static void incrementCount(){
			quadrilateralCount++;
		}
		static int getCount(){
			return quadrilateralCount;
		}
		double getArea(){
			return (length * width);
		}
		double getPerimeter(){
			return ((2 * length) + (2 * width));
		}
		void display(){
			cout << "Length: " << getLength() << endl;
			cout << "Width: " << getWidth() << endl;
			cout << "Quadrilateral Count: " << getCount() << endl;
		}
};

class Parallelogram: public Quadrilateral{
	private:
		static int parallelogramCount;
	public:
		Parallelogram(double length=0, double width=0):Quadrilateral(length, width){
			incrementCount();
		}
		static void incrementCount(){
			parallelogramCount++;
		}
		static int getCount(){
			return parallelogramCount;
		}
		void display(){
			cout << "Quadrilateral Type: Parallelogram" << endl;
			cout << "Parallelogram Count: " << getCount() << endl;
			cout << "Area: " << getArea() << endl;
			cout << "Perimeter: " << getPerimeter() << endl;
		}
};

class Rectangle: public Parallelogram{
	private:
		static int rectangleCount;
	public:	
		Rectangle(double length=0, double width=0):Parallelogram(length, width){
			incrementCount();
		}
		static void incrementCount(){
			rectangleCount++;
		}
		static int getCount(){
			return rectangleCount;
		}
		void display(){
			Quadrilateral::display();
			cout << "Quadrilateral Type: Rectangle" << endl;
			cout << "Rectangle Count: " << getCount() << endl;
			cout << "Area: " << getArea() << endl;
			cout << "Perimeter: " << getPerimeter() << endl;
		}
};

class Square: public Parallelogram{
	private:
		static int squareCount;
	public:
		Square(double length):Parallelogram(length, length){
			incrementCount();;
		}
		static void incrementCount(){
			squareCount++;
		}
		static int getCount(){
			return squareCount;
		}
		void display(){
			Quadrilateral::display();
			cout << "Quadrilateral Type: Square" << endl;
			cout << "Square Count: " << getCount() << endl;
			cout << "Area: " << getArea() << endl;
			cout << "Perimeter: " << getPerimeter() << endl;
		}
};


class Trapezoid: public Quadrilateral{
	private:
		static int trapezoidCount;
	public:
		Trapezoid(double length=0, double width=0):Quadrilateral(length, width){
			incrementCount();;
		}
		static void incrementCount(){
			trapezoidCount++;
		}
		static int getCount(){
			return trapezoidCount;
		}
		// overriding getArea() method
		double getArea(){
			return (0.5 * length * width);
		}
		void display(){
			Quadrilateral::display();
			cout << "Quadrilateral Type: Trapezoid" << endl;
			cout << "Trapezoid Count: " << getCount() << endl;
			cout << "Area: " << getArea() << endl;
			cout << "Perimeter: " << getPerimeter() << endl;
		}
};

int Quadrilateral::quadrilateralCount = 0;
int Rectangle::rectangleCount = 0;
int Square::squareCount = 0;
int Parallelogram::parallelogramCount = 0;
int Trapezoid::trapezoidCount = 0;

int main(){
	cout << "\xb2\xb2\xb2 QUADRILATERAL \xb2\xb2\xb2" << endl;
	Quadrilateral q(2, 3);
	q.display();
	cout << endl;
	cout << "\xb2\xb2\xb2 PARALLELOGRAM \xb2\xb2\xb2" << endl;
	Parallelogram p(1.2, 3.4);
	p.display();
	cout << "\xb2\xb2\xb2 RECTANGLE \xb2\xb2\xb2" << endl;
	Rectangle r(6.2, 7);
	r.display();
	cout << endl;
	cout << "\xb2\xb2\xb2 SQUARE \xb2\xb2\xb2" << endl;
	Square s(3.4);
	s.display();
	cout << endl;
	cout << "\xb2\xb2\xb2 TRAPEZOID \xb2\xb2\xb2" << endl;
	Trapezoid t(1.2, 0.9);
	t.display();
	cout << endl << "Total Quadrilaterals: " << Quadrilateral::getCount() << endl;
	return 0;
}
