#include <iostream>
#include <string>
using namespace std;

class Person{
    private:
        string name;
        int height;
        int age;
        string interests[3];
        int counter;
    public:
        Person();
        Person(string, int, int, string [3]);
        void display();
        ~Person();
};

Person::Person(){
    counter = 0;
}

Person::Person(string name, int height, int age, string interests[3]){
    this->name = name;
    this->height = height;
    this->age = age;
    cout << "Enter your interests: ";
    for(int i=0;i<3;i++){
        this->interests[i] = interests[i];
    }
}
    

void Person::display(){
    cout << "Name: " << name << endl;
    cout << "Height: " << height << endl;
    cout << "Age: " << age << endl;
    cout << "Interests: " << endl;
    for(int i=0;i<3;i++){
        cout << this->interests[i] << endl;
    }
}

Person::~Person(){
    cout << "Destructor" << endl;
}

int main(){
    string interests[3] = {"CS", "AI", "ML"};
    Person p1("Sufiyaan Usmani", 12, 18, interests);
    p1.display();
    return 0;
}