// Create a class called Employee that includes three pieces of information as instance variables—a first name (type String), a last name (type String) and a monthly salary (double). If the monthly salary is not positive, set it to 0.0. Write a test application named EmployeeTest that demonstrates class Employee’s capabilities. Create two Employee objects and display each object’s yearly salary. Then give each Employee a 10% raise and display each Employee’s yearly salary again.
#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
        string firstName;
        string lastName;
        double salary;
    public:
        Employee(string firstName, string lastName, double salary){
            setFirstName(firstName);
            setLastName(lastName);
            setSalary(salary);
        }
        void setFirstName(string firstName){
            this->firstName = firstName;
        }
        void setLastName(string lastName){
            this->lastName = lastName;
        }
        void setSalary(double salary){
            if(salary > 0){
                this->salary = salary;
            }else{
                this->salary = 0.0;
            }
        }
        void raiseSalary(){
            salary = salary * 1.1;
        }
        void showData(){
            cout << "First name: " << firstName << endl;
            cout << "Last name: " << lastName << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main(){
    Employee e("Sufiyaan", "Usmani", 100000);
    e.showData();
    e.raiseSalary();
    e.showData();
    return 0;
}