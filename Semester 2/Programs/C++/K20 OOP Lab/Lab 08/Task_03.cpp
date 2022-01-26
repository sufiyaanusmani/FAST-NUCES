#include <iostream>
#include <string>
using namespace std;

class Person{
    protected:
        int employeeID;
    public:
        void setData();
        void displayData();
};

class Admin: public Person{
    private:
        string name;
        int income;
    public:
        void setData();
        void displayData();
        float bonus();
};

class Accounts: public Person{
    private:
        string name;
        int income;
    public:
        void setData();
        void displayData();
        float bonus();
};

int main(){
    Admin adm;
    cout << "Admin" << endl;
    adm.setData();
    adm.displayData();
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << "Accounts" << endl;
    Accounts acc;
    acc.setData();
    acc.displayData();
    return 0;
}

void Admin::setData(){
    cout << "Enter employee ID: ";
    cin >> employeeID;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your income: ";
    cin >> income;
}

void Admin::displayData(){
    cout << "Employee ID: " << employeeID << endl;
    cout << "Name: " << name << endl;
    cout << "Income: " << income << endl;
    cout << "Bonus: " << bonus() << endl;
}

float Admin::bonus(){
    return(0.05*income);
}

void Accounts::setData(){
    cout << "Enter employee ID: ";
    cin >> employeeID;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your income: ";
    cin >> income;
}

void Accounts::displayData(){
    cout << "Employee ID: " << employeeID << endl;
    cout << "Name: " << name << endl;
    cout << "Income: " << income << endl;
    cout << "Bonus: " << bonus() << endl;
}

float Accounts::bonus(){
    return(0.05*income);
}