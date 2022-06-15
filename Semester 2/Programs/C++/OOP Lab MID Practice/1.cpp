// Create a class User with two public fields: int Age and string Name. In the Main method, create an object of class User and set Name to "Teo" and Age to 24. Then, output to the screen: "My name is {Name} and I'm {Age} years old." using object fields for Name and Age.
#include <iostream>
#include <string>
using namespace std;

class User{
    public:
        int age;
        string name;
};

int main(){
    User u1;
    u1.name = "Teo";
    u1.age = 24;
    cout << "My name is " << u1.name << " and I'm " << u1.age << " old" << endl;
    return 0;
}