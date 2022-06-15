#include <iostream>
using namespace std;

class Student{
    protected:
        const string id;
        string name;
    public:
        Student(string id, string name): id(id){
            this->name = name;
        }
        void display(){
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
        }
};

class CSStudent: public Student{
    protected:
        int labHours;
    public: 
        CSStudent(string id, string name, int labHours): Student(id, name){
            this->labHours = labHours;
        }
        void display(){
            Student::display();
            cout << "Lab Hours: " << labHours << endl;
        }
        bool addLabHours(){
            labHours++;
            return true;
        }
        bool adddLabHours(int n){
            if(n >= 0){
                labHours += n;
                return true;
            }else{
                return false;
            }
        }
};

class EngineeringStudent: public Student{
    protected:
        int workshops;
    public:

        void display(){
            Student::display();
            cout << "Workshops: " << workshops << endl;
        }
        bool addWorkshops(){
            workshops++;
            return true;
        }
        bool addWorkshops(int n){
            if(n >= 0){
                workshops += n;
                return true;
            }else{
                return false;
            }
        }
};

class SEStudent: public CSStudent{
    public:
        SEStudent(string id, string name, int labHours): CSStudent(id, name, labHours){

        }
        void display(){
            CSStudent::display();
        }
};

class AIStudent: public CSStudent{
    public:
        AIStudent(string id, string name, int labHours): CSStudent(id, name, labHours){

        }
        void display(){
            CSStudent::display();
        }
};

int main(){
    SEStudent s1("3195", "Sufiyaan Usmani", 3);
    s1.display();
    s1.addLabHours();
    s1.display();
    return 0;
}