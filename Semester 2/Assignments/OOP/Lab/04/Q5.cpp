#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
        int carID;
        string carName;
        int model;
    public:
        Car();
        Car(int);
        Car(int, string, int);
        ~Car();
        void display();
};

Car::Car(){
    carID = 123;
    carName = "Car";
    model = 1;
}

Car::Car(int a){
    cout << "Enter car ID: ";
    cin >> carID;
    cout << "Enter car name: ";
    fflush(stdin);
    getline(cin, carName);
    cout << "Enter model: ";
    cin >> model;
}

Car::Car(int carID, string carName, int model){
    this->carID = carID;
    this->carName = carName;
    this->model = model;
}

void Car::display(){
    cout << "Car ID: " << carID << endl;
    cout << "Car name: " << carName << endl;
    cout << "Car model: " << model << endl;
}

Car::~Car(){
    cout << "Destroying Car" << endl;
}

int main(){
    Car c1(1);
    c1.display();
    return 0;
}