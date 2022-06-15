// Name: Sufiyaan Usmani
// Roll No: 21K-3195
// Section: BCS-2J

#include <iostream>
using namespace std;

class Person{
	protected:
		string name;
		int age;
	public:
		Person(string name, int age){
			this->name = name;
			this->age = age;
		}
		virtual void display(){
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
		}
};

class Student: virtual public Person{
	private:
		float GPA;
	public:
		Student(string name, int age, float GPA):Person(name, age){
			this->GPA = GPA;
		}
		void display(){
			cout << "GPA: " << GPA << endl;
		}
};

class Faculty: virtual public Person{
	private:
		float salary;
	public:
		Faculty(string name, int age, float salary):Person(name, age){
			this->salary = salary;
		}
		void display(){
			cout << "Salary: Rs. " << salary << endl;
		}
};

class TA: public Student, public Faculty{
	private:
		char section;
	public:
		TA(string name, int age, float GPA, float salary, char section):Person(name, age), Student(name, age, GPA), Faculty(name, age, salary){
			this->section = section;
		}
		void display(){
			Person::display();
			Student::display();
			Faculty::display();
			cout << "Section: " << section << endl;
		}
};

int main(){
	TA ta("Sufiyaan", 18, 4.0, 10000, 'J');
	ta.display();
	return 0;
}
