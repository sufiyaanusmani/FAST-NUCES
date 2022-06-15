#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        const int ID;
        string studentName;
    public:
        Student(int ID, string studentName):ID(ID),studentName(studentName){}
        void setName(string);
        void showData();
};

int main(){
    Student student1(123, "Sufiyaan Usmani"), student2(456, "Ahsan Ashraf"), student3(789, "Muhammad Huzaifa");
    student1.showData();
    student2.showData();
    student3.showData();
    return 0;
}

void Student::setName(string studentName){
    this->studentName = studentName;
}

void Student::showData(){
    cout << "ID: " << ID << endl;
    cout << "Name: " << studentName << endl << endl;
}