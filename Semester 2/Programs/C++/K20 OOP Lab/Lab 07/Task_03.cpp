#include <iostream>
#include <string>
using namespace std;

class Student{
    protected:
        int id;
        string name;
    public:
        Student();
        void getStudentDetails();
};

class Marks: public Student{
    protected:
        int oop, pf, ds, db;
    public:
        Marks();
        void getMarks();
};

class Result: public Marks{
    protected:
        int totalMarks;
        double avg;
    public:
        Result();
        void display();
};

int main(){
    Result r;
    cout << "<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    r.getStudentDetails();
    cout << "-----------------------" << endl;
    r.getMarks();
    cout << "-----------------------" << endl;
    r.display();
    return 0;
}

Student::Student(){
    cout << "Enter id: ";
    cin >> id;
    cout << "Enter your name: ";
    cin >> name;
}

void Student::getStudentDetails(){
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
}

Marks::Marks():Student(){
    cout << "Enter OOP marks: ";
    cin >> oop;
    cout << "Enter PF marks: ";
    cin >> pf;
    cout << "Enter DS marks: ";
    cin >> ds;
    cout << "Enter DB marks: ";
    cin >> db;
}

void Marks::getMarks(){
    cout << "OOP: " << oop << endl;
    cout << "PF: " << pf << endl;
    cout << "DS: " << ds << endl;
    cout << "DB: " << db << endl;
}

Result::Result():Marks(){
    totalMarks = oop + pf + ds + db;
    avg = totalMarks / 4.0;
}

void Result::display(){
    cout << "Total Marks: " << totalMarks << endl;
    cout << "Average: " << avg << endl;
}