// Name: Sufiyaan Usmani
// Roll No: 21K-3195
// Section: BCS-2J

#include <iostream>
using namespace std;

class Employee{
	protected:
		string name;
		string code;
	public:
		Employee(string name, string code){
			this->name = name;
			this->code = code;
		}
		virtual void display(){
			cout << "Name: " << name << endl;
			cout << "Code: " << code << endl;
		}
};

class Consultant: virtual public Employee{
	protected:
		int yearsOfExperience;
	public:
		Consultant(string name, string code, int yearsOfExperience):Employee(name, code){
			this->yearsOfExperience = yearsOfExperience;
		}
		void display(){
			cout << "Years of Experience: " << yearsOfExperience << endl;
		}
};

class Manager: virtual public Employee{
	protected:
		int noOfTeams;
	public:
		Manager(string name, string code, int noOfTeams):Employee(name, code){
			this->noOfTeams = noOfTeams;
		}
		void display(){
			cout << "Number of Teams: " << noOfTeams << endl;
		}
};

class ConsultantManager: public Consultant, public Manager{
	public:
		ConsultantManager(string name, string code, int yearsOfExperience, int noOfTeams):Employee(name, code), Consultant(name, code, yearsOfExperience), Manager(name, code, noOfTeams){
			
		}
		void display(){
			Employee::display();
			Consultant::display();
			Manager::display();
		}
};

int main(){
	cout << "USING OBJECT" << endl;
	ConsultantManager obj("Ali", "S-123", 17, 5);
	obj.display();
	cout << "\nUSING UPCASTING" << endl;
	Employee *e = &obj;
	e->display();
	return 0;
}
