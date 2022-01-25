#include <iostream>
#include <string>
using namespace std;

class Vehicles{
    protected:
        int price;
};

class Car: public Vehicles{
    protected:
        int capacity;
        int doors;
        int fuelType;
};

class Motorcycle: public Vehicles{
    protected:
        int noOfCylinders;
        int gears;
        int wheels;
};

class Audi: public Car{
    private:
        string modelType;
    public:
        Audi();
        void showData();
};

class Yamaha: public Motorcycle{
    private:
        string makeType;
    public:
        Yamaha();
        void showData();
};

int main(){
    Audi a;
    a.showData();
    cout << endl << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    Yamaha y;
    y.showData();
    return 0;
}

Audi::Audi(){
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter seating capacity: ";
    cin >> capacity;
    cout << "Enter number of doors: ";
    cin >> doors;
    cout << "Enter fuel type: ";
    cin >> fuelType;
    cout << "Enter model type: ";
    cin >> modelType;
}

void Audi::showData(){
    cout << "Price: " << price << endl;
    cout << "Seating Capacity: " << capacity << endl;
    cout << "Number of doors: " << doors << endl;
    cout << "Fuel Type: " << fuelType << endl;
    cout << "Model Type: " << modelType << endl;
}

Yamaha::Yamaha(){
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter number of cylinders: ";
    cin >> noOfCylinders;
    cout << "Enter number of gears: ";
    cin >> gears;
    cout << "Enter number of wheels: ";
    cin >> wheels;
    cout << "Enter make type: ";
    cin >> makeType;
}

void Yamaha::showData(){
    cout << "Price: " << price << endl;
    cout << "Cylinders: " << noOfCylinders << endl;
    cout << "Gears: " << gears << endl;
    cout << "Wheels: " << wheels << endl;
    cout << "Make Type: " << makeType << endl;
}