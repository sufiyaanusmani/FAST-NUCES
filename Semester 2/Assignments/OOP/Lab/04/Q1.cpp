#include <iostream>
#include <string>
using namespace std;

class Lab{
    private:
        int labNumber;
        int noOfTasks;
        string topic;
        float attendance;
    public:
        Lab();
        Lab(int, int, string, float);
        void display();
        ~Lab();
};

Lab::Lab(){
    labNumber = 1;
    noOfTasks = 1;
    topic = "OOP";
    attendance = 100.0;
}

Lab::Lab(int labNumber, int noOfTasks, string topic, float attendance){
    this->labNumber = labNumber;
    this->noOfTasks = noOfTasks;
    this->topic = topic;
    this->attendance = attendance;
}

void Lab::display(){
    cout << "Lab Number: " << labNumber << endl;
    cout << "No of tasks: " << noOfTasks << endl;
    cout << "Topic: " << topic << endl;
    cout << "Attendance Percentage: " << attendance << " %" << endl;
}

Lab::~Lab(){
    cout << "Destructor Called" << endl;
}

int main(){
    Lab l1;
    l1.display();
    return 0;
}