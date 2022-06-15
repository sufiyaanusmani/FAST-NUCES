#include <iostream>
using namespace std;

void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int firstNumber, secondNumber;
    cin >> firstNumber;
    cin >> secondNumber;

    cout << "Before swap: " << "\n";
    cout << firstNumber << " " << secondNumber << "\n";

    swap(firstNumber, secondNumber);

    cout << "After swap: " << "\n";
    cout << firstNumber << " " << secondNumber << "\n";

    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int students;
    int marks;
    cout << "Enter student count: ";
    cin >> students;
    int *studentsList = new int[students];
    for(int i=0;i<students;i++){
        cin >> studentsList[i];
    }
    int *marksList = studentsList;
    cout << "Marks List: " << endl;
    for(int i=0;i<students;i++){
        cout << marksList[i] << endl;
    }
    return 0;
}