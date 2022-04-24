#include <iostream>
#include <string>
using namespace std;

class GradeBook{
    private:
        string courseName;
        string instructorName;
    public:
        GradeBook(string, string);
        void setCourseName(string);
        string getCourseName();
        void displayMessage();
        void setInstructorName(string);
        string getInstructorName();
};

GradeBook::GradeBook(string name1, string name2){
    setCourseName(name1);
    setInstructorName(name2);
}

void GradeBook::setCourseName(string name){
    courseName = name;
}

string GradeBook::getCourseName(){
    return courseName;
}

void GradeBook::displayMessage(){
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    cout << "This course is presented by: " << getInstructorName() << endl;
}

void GradeBook::setInstructorName(string name){
    instructorName = name;
}

string GradeBook::getInstructorName(){
    return instructorName;
}

int main(){
    GradeBook g1("DLD", "M Hamza");
    g1.displayMessage();
    return 0;
}