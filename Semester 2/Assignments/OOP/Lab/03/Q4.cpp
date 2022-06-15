#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string firstName;
        string lastName;
        float CGPA;
    public:
        void setFirstName(string);
        void setLastName(string);
        void setCGPA(float);
        string getFirstName();
        string getLastName();
        float getCGPA();
        void raiseCGPA(float);
        void checkWarning();
        char getGrade();
};

void Student::setFirstName(string name){
    firstName = name;
}

void Student::setLastName(string name){
    lastName = name;
}

void Student::setCGPA(float cgpa){
    if(cgpa >= 0){
        CGPA = cgpa;
    }else{
        CGPA = 0.0;
    }
}

string Student::getFirstName(){
    return firstName;
}

string Student::getLastName(){
    return lastName;
}

float Student::getCGPA(){
    return CGPA;
}

void Student::raiseCGPA(float points){
    CGPA += points;
}

void Student::checkWarning(){
    if(CGPA >= 2.5){
        cout << "This student is not in warning" << endl;
    }else{
        cout << "This student is in warning" << endl;
    }
}

char Student::getGrade(){
    char grade;
    if(CGPA >= 3.86){
        grade = 'A';
    }else if(CGPA >= 3.67){
        grade = 'B';
    }else if(CGPA >= 3.33){
        grade = 'C';
    }else if(CGPA >= 3.0){
        grade = 'D';
    }else if(CGPA >= 2.0){
        grade = 'E';
    }else{
        grade = 'F';
    }
    return grade;
}

int main(){
    Student s1, s2;

    // Student 1
    s1.setFirstName("Sufiyaan");
    s1.setLastName("Usmani");
    s1.setCGPA(1.2);
    cout << "***** Student 1 *****" << endl;
    cout << "First Name: " << s1.getFirstName() << endl;
    cout << "Last Name: " << s1.getLastName() << endl;
    cout << "Previous Semester CGPA: " << s1.getCGPA() << endl; 
    cout << "Grade: " << s1.getGrade() << endl;
    cout << "Raising CGPA by 0.25..." << endl;
    s1.raiseCGPA(0.25);
    cout << endl;
    cout << "New Semester CGPA: " << s1.getCGPA() << endl;
    cout << "New Grade: " << s1.getGrade() << endl;
    s1.checkWarning();
    cout << endl;

    // Student 2
    s2.setFirstName("Ahsan");
    s2.setLastName("Ashraf");
    s2.setCGPA(3.55);
    cout << "***** Student 2 *****" << endl;
    cout << "First Name: " << s2.getFirstName() << endl;
    cout << "Last Name: " << s2.getLastName() << endl;
    cout << "CGPA: " << s2.getCGPA() << endl;
    cout << "Grade: " << s2.getGrade() << endl;
    cout << "Raising CGPA by 0.25..." << endl;
    s2.raiseCGPA(0.25);
    cout << endl;
    cout << "New Semester CGPA: " << s2.getCGPA() << endl;
    cout << "New Grade: " << s2.getGrade() << endl;
    s2.checkWarning();
    return 0;
}