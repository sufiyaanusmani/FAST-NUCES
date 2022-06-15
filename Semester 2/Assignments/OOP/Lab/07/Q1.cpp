#include <iostream>
using namespace std;

class Person{
    private:
        int age;
    protected:
        string name;
    public:
        Person(int age, string name){
            this->age = age;
            this->name = name;
        }
        void display(){
            cout << "Class: Person" << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class Employee{
    private:
        const int empId;
    protected:
        double salary;
    public:
        Employee(int empId, double salary):empId(empId){
            this->salary = salary;
        }
        void display(){
            cout << "Class: Employee" << endl;
            cout << "Employee ID: " << empId << endl;
            cout << "Salary: " << salary << endl;
        }
};

class Manager: public Person, public Employee{
    private:
        string type;
    public:
        Manager(int age, string name, int empId, double salary, string type):Person(age, name), Employee(empId, salary){
            this->type = type;
        }
        void display(){
            Person::display();
            Employee::display();
            cout << "Class: Manager" << endl;
            cout << "Type: " << type << endl;
        }
};

class ITManager: public Manager{
    private:
        static int noOfPerson;
    public:
        ITManager(int age, string name, int empId, double salary, string type):Manager(age, name, empId, salary, type){
            incrementPerson();
        }
        void display(){
            Manager::display();
        }
        static void incrementPerson(){
            noOfPerson++;
        }
        static int getNoOfPerson(){
            return noOfPerson;
        }
};

int ITManager::noOfPerson = 0;

int main(){
    ITManager obj1(18, "Sufiyaan Usmani", 3195, 10000000, "ABC");
    obj1.display();
    cout << endl;
    ITManager obj2(18, "Ahsan Ashraf", 3186, 1000000, "DEF");
    obj2.display();
    cout << endl << "Total no of person: " << ITManager::getNoOfPerson() << endl;
    return 0;
}