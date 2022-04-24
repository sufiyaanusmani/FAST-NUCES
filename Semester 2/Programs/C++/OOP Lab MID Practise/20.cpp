// A vehicle company is deciding to hire a programmer to develop a system that will allow the company to enter the details of the vehicles sold by them. As a programmer, you need to implement a program that contains a base class called Vehicles that contains a data member to store the price of the vehicles. Derive two other classes named as Car and Motorcycle.
//  The Car class will contain data members to store details that include seating capacity, number of doors and fuel type (diesel or petrol).
//  The Motorcycle class will contain data members to store details such as the number of cylinders, the number of gears and the number of wheels.
// Derive another subclass named as Audi of Car and Yamaha of Motorcycle.
//  The Audi class will contain a data member to store the model type.
//  The Yamaha class will contain a data member to store the make – type.
// Display the details of an Audi car (price, seating capacity, number of doors, fuel type, model type) and the details of the Yamaha motorcycle (price, number of cylinders, number of gears, number of wheels, make – type).
#include <iostream>
using namespace std;

class Vehicle{
    protected:
        double price;
    public:
        Vehicle(double price){
            setPrice(price);
        }
        void setPrice(double price){
            if(price > 0){
                this->price = price;
            }else{
                this->price = 0.0;
            }
        }
};

class Car: public Vehicle{
    protected:
        int capacity;
        int noOfDoors;
        string fuelType;
    public:
        Car(int capacity, int noOfDoors, string fuelType, double price):Vehicle(price){
            this->capacity = capacity;
            this->noOfDoors = noOfDoors;
            this->fuelType = fuelType;
        }
};

class Motorcycle: public Vehicle{
    protected:
        int noOfCylinders;
        int noOfGears;
        int noOfWheels;
    public:
        Motorcycle(int noOfCylinders, int noOfGears, int noOfWheels, double price):Vehicle(price){
            this->noOfCylinders = noOfCylinders;
            this->noOfGears = noOfGears;
            this->noOfWheels = noOfWheels;
        }
};

class Audi: public Car{
    private:
        int modelType;
    public:
        Audi(int modelType, int capacity, int noOfDoors, string fuelType, double price):Car(capacity,noOfDoors, fuelType, price){
            this->modelType = modelType;
        }
        void display(){
            cout << "Model Type: " << modelType << endl;
            cout << "Capacity: " << capacity << endl;
            cout << "No of doors: " << noOfDoors << endl;
            cout << "Fuel Type: " << fuelType << endl;
            cout << "Price: " << price << endl;
        }
};

class Yamaha: public Motorcycle{
    private:
        int makeType;
    public:
        Yamaha(int makeType, int noOfCylinders, int noOfGears, int noOfWheels, double price):Motorcycle(noOfCylinders, noOfGears, noOfWheels, price){
            this->makeType = makeType;
        }
        void display(){
            cout << "Make type: " << makeType << endl;
            cout << "No of cylinders: " << noOfCylinders << endl;
            cout << "No of gears: " << noOfGears << endl;
            cout << "No of wheels: " << noOfWheels << endl;
            cout << "Price: " << price << endl;
        }
};

int main(){
    Audi a1(2022, 6, 4, "Petrol", 2020020);
    Yamaha y1(2015, 2, 5, 2, 20202);
    a1.display();
    y1.display();
    return 0;
}