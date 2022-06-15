// Name: Sufiyaan Usmani
// Roll No: 21K-3195
// Section: BCS-2J

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

class Person{	// Abstract Class
	protected:
		string name;
	public:
		virtual void getData() = 0;
		virtual bool isOutstanding() = 0;
		void getName(){
//			cout << "Enter your name: ";
//			cin >> name;
			name = "Sufiyaan";
		}
		void putName(){
			cout << "Name: " << name << endl;
		}
};

class Student: public Person{
	private:
		float GPA;
	public:
		void getData(){
//			cout << "Enter your GPA: ";
//			cin >> GPA;
			GPA = 4.0;
		}
		bool isOutstanding(){
			if(GPA > 3.5){
				return true;
			}else{
				return false;
			}
		}
};

class Professor: public Person{
	private:
		int publications;
	public:
		void getData(){
//			cout << "Enter number of publications: ";
//			cin >> publications;
			publications = 50;
		}
		bool isOutstanding(){
			if(publications > 100){
				return true;
			}else{
				return false;
			}
		}
};

int main(){
	Person *p;
	Student student;
	Professor professor;
	int choice;
	while(1){
		system("cls");
		cout << "1. Insert data for student" << endl;
		cout << "2. Insert data for professor" << endl;
		cin >> choice;
	
		if(choice == 1){
			p = &student;
			p->getName();
			p->getData();
			p->putName();
			cout << "Is outstanding: " << (p->isOutstanding()==true?"Yes":"No") << endl;
			getch();
		}else if(choice == 2){
			p = &professor;
			p->getName();
			p->getData();
			p->putName();
			cout << "Is outstanding: " << (p->isOutstanding()==true?"Yes":"No") << endl;
			getch();
		}else{
			exit(0);
			break;
		}
	}
	cout << "\n";
	delete p;
	return 0;
}
