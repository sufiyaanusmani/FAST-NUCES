#include <iostream>
#include <string>
using namespace std;

int main(){
    int marks[5];
    int i;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    for(i=0;i<5;i++){
        cout << "Enter mark #" << i+1 << ": ";
        cin >> marks[i];
        cout << endl;
    }
    int total = 0;
    for(i=0;i<5;i++){
        total += marks[i];
    }
    float avg = total / 5.0;
    cout << "Name: " << name << endl;
    cout << "Test Scores: ";
    for(i=0;i<5;i++){
        cout << marks[i] << "  ";
    }
    cout << endl;
    cout << "Average: " << avg << endl;
    return 0;
}