#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
        string firstName, lastName;
        double salary;
    public:
        Employee(string, string, double);
        void showData();
        void raiseSalary();
};

int main(){
    string f, l;
    double salary;
    cin >> f >> l >> salary;
    Employee e1(f, l, salary);
    e1.showData();
    // e2.showData();
    e1.raiseSalary();
    e1.showData();
    // e2.showData();
    return 0;
}

Employee::Employee(string firstName, string lastName, double salary){
    this->firstName = firstName;
    this->lastName = lastName;
    if(this->salary > 0){
        this->salary = salary;
    }else{
        this->salary = 0.0;
    }
}

void Employee::showData(){
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Salary: " << salary << endl << endl;
}

void Employee::raiseSalary(){
    salary = 1.1 * salary;
}