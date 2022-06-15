#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        const int ID;
        string studentName;
        static int count;
    public:
        Student(int ID, string studentName):ID(ID),studentName(studentName){
            incrementCount();
        }
        void setName(string);
        void showData();
        static void incrementCount();
};

int Student::count = 0;

int main(){
    Student student1(123, "Sufiyaan Usmani");
    student1.showData();
    Student student2(456, "Ahsan Ashraf"); 
    student2.showData();
    Student student3(789, "Muhammad Huzaifa");
    student3.showData();
    return 0;
}

void Student::setName(string studentName){
    this->studentName = studentName;
}

void Student::showData(){
    cout << "ID: " << ID << endl;
    cout << "Name: " << studentName << endl;
    cout << "Student Number: " << count << endl << endl;
}

void Student::incrementCount(){
    count++;
}