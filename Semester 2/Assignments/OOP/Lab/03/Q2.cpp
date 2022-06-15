#include <iostream>
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
    if(attendance/100.0 > 0.75){
        cout << "Lab Number: " << labNumber << endl;
        cout << "No of tasks: " << noOfTasks  << endl;
        cout << "Topic: " << topic << endl;
        cout << "Attendance Percentage: " << attendance << " %" << endl; 
    }
}

int main(){
    Lab l1, l2, l3, l4;

    l1.getData();
    cout << endl;
    l2.getData();
    cout << endl;
    l3.getData();
    cout << endl;
    l4.getData();

    system("cls");

    l1.display();
    cout << endl;
    l2.display();
    cout << endl;
    l3.display();
    cout << endl;
    l4.display();

    return 0;
}