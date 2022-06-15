#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Lab{
    private:
        int labNumber;
        int noOfTasks;
        string topic;
        float attendance;
    public:
        void getData();
        void display();
};

void Lab::getData(){
    cout << "Enter Lab Number: ";
    cin >> labNumber;
    cout << "Enter number of tasks: ";
    cin >> noOfTasks;
    cout << "Enter Topic: ";
    fflush(stdin);
    getline(cin, topic);
    cout << "Enter your attendance percentage: ";
    cin >> attendance;
}

void Lab::display(){
    cout << "Lab Number: " << labNumber << endl;
    cout << "No of tasks: " << noOfTasks  << endl;
    cout << "Topic: " << topic << endl;
    cout << "Attendance Percentage: " << attendance << " %" << endl; 
}

int main(){
    Lab l1;
    l1.getData();
    l1.display();
    return 0;
}