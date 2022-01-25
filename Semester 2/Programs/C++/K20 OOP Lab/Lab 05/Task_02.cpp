#include <iostream>
using namespace std;

class Student{
    private:
        int scores[5];
    public:
        void input();
        int calculateTotalScore();
};

int main(){
    Student s1;
    s1.input();
    cout << "Total Marks: " << s1.calculateTotalScore() << endl;
    return 0;
}

void Student::input(){
    int i;
    for(i=0;i<5;i++){
        cout << "Enter Score " << i+1 << " : ";
        cin >> scores[i];
    }
}

int Student::calculateTotalScore(){
    int i, total;
    total = 0;
    for(i=0;i<5;i++){
        total = total + scores[i];
    }
    return total;
}