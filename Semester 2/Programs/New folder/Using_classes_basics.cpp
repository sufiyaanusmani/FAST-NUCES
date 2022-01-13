#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class StudentInfo{
	int ID;
	char name[20];
	int semester;
	
	public:
		void input(){
			cout << "Enter ID: ";
			cin >> ID;
			cout << "Enter your name: ";
			fflush(stdin);
			gets(name);
			cout << "Enter your semester: ";
			cin >> semester;
		}
		void display(){
			system("cls");
			cout << "ID: " << ID << endl;
			cout << "Name: ";
			puts(name);
			cout << "Semester: " << semester << endl;
		}
};

int main(){
	StudentInfo student;
	student.input();
	student.display();
	return 0;
}