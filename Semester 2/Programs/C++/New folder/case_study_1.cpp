/* 
    A man who manages a scoreboard wants a simple application module to manage the history of a batsman. For every new batsman, the app must let us fill the details including the Id, Name, Age, Runs, avg, etc. These details may be modified later except for the ID of a batsman. At anytime a batsman can check his runs and his average. 
*/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
using namespace std;

class Batsman{
    private:
        int id;
        string name;
        int age;
        int runs;
        int matches;
        float avg;
    public:
        void input();
        void display();
};

void Batsman::input(){
    cout << "Enter your ID: ";
    cin >> id;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your runs: ";
    cin >> runs;
    cout << "Enter number of matches played: ";
    cin >> matches;
    avg = (float)runs/matches;
    cout << "Data Saves, press any key to continue...";
    getch();
}

void Batsman::display(){
    system("cls");
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Age: " << age << endl;
    cout << "Runs: " << runs << endl;
    cout << "Average: " << avg << endl;
}

int main(){
    Batsman b;
    b.input();
    b.display();
    return 0;
}