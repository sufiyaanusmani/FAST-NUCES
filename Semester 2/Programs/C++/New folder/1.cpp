/*
    Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
*/

#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        int rollNo;
        string name;
    public:
        void setData(int, string);
        void getData();
};

int main(){
    Student s1;
    s1.setData(3195, "Sufiyaan");
    s1.getData();
    return 0;
}

void Student::setData(int rollNo, string name){
    this->rollNo = rollNo;
    this->name = name;
}

void Student::getData(){
    cout << "Roll No: " << rollNo << endl;
    cout << "Name: " << name << endl;
}