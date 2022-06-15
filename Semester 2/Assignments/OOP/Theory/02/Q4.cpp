// Name: Sufiyaan Usmani
// Roll No: 21K-3195
// Section: BCS-2J

#include <iostream>
using namespace std;

class Vehicle{
    private:
        string type;
        string make;
        int model;
        string color;
        int year;
        double milesDriven;
    public:
        Vehicle(string type, string make, int model, string color, int year, double milesDriven){
            this->type = type;
            this->make = make;
            this->model = model;
            this->color = color;
            this->year = year;
            this->milesDriven = milesDriven;
        }
        void display(){
            cout << "Type: " << type << endl;
            cout << "Make: " << make << endl;
            cout << "Model: " << model << endl;
            cout << "Color: " << color << endl;
            cout << "Year: " << year << endl;
            cout << "Miles Driven: " << milesDriven << endl;
        }
};

class GasVehicle:virtual public Vehicle{
    private:
        int fuelTankSize;
    public:
        GasVehicle(string type, string make, int model, string color, int year, double milesDriven, int fuelTankSize):Vehicle(type, make, model, color, year, milesDriven){
            this->fuelTankSize = fuelTankSize;
        }
        void display(){
            cout << "Fuel Tank Size: " << fuelTankSize << endl;
        }
};

class ElectricVehicle:virtual public Vehicle{
    private:
        int energyStorage;
    public:
        ElectricVehicle(string type, string make, int model, string color, int year, double milesDriven, int energyStorage):Vehicle(type, make, model, color, year, milesDriven){
            this->energyStorage = energyStorage;
        }
        void display(){
            cout << "Energy Storage: " << energyStorage << endl;
        }
};

class HeavyVehicle:public GasVehicle, public ElectricVehicle{
    private:
        float maxWeight;
        int noOfWheels;
        float length;
    public:
        HeavyVehicle(string type, string make, int model, string color, int year, double milesDriven, int fuelTankSize, int energyStorage, float maxWeight, int noOfWheels, float length):GasVehicle(type, make, model, color, year, milesDriven, fuelTankSize), ElectricVehicle(type, make, model, color, year, milesDriven, energyStorage), Vehicle(type, make, model, color, year, milesDriven){
            this->maxWeight = maxWeight;
            this->noOfWheels = noOfWheels;
            this->length = length;
        }
        void display(){
            Vehicle::display();
            GasVehicle::display();
            ElectricVehicle::display();
            cout << "Maximum Weight: " << maxWeight << endl;
            cout << "Number of wheels: " << noOfWheels << endl;
            cout << "Length: " << length << endl;
        }
};

class ConstructionTruck: public HeavyVehicle{
    private:
        string cargo;
    public:
        ConstructionTruck(string type, string make, int model, string color, int year, double milesDriven, int fuelTankSize, int energyStorage, float maxWeight, int noOfWheels, float length, string cargo):HeavyVehicle(type, make, model, color, year, milesDriven, fuelTankSize, energyStorage, maxWeight, noOfWheels, length), Vehicle(type, make, model, color, year, milesDriven){
            this->cargo = cargo;
        }
        void display(){
            HeavyVehicle::display();
            cout << "Cargo: " << cargo << endl;
        }
};

class Bus: public HeavyVehicle{
    private:
        int noOfSeats;
    public:
        Bus(string type, string make, int model, string color, int year, double milesDriven, int fuelTankSize, int energyStorage, float maxWeight, int noOfWheels, float length, int noOfSeats):HeavyVehicle(type, make, model, color, year, milesDriven, fuelTankSize, energyStorage, maxWeight, noOfWheels, length), Vehicle(type, make, model, color, year, milesDriven){
            this->noOfSeats = noOfSeats;
        }
        void display(){
            HeavyVehicle::display();
            cout << "Number of seats: " << noOfSeats << endl;
        }
};

class HighPerformance: public GasVehicle{
    private:
        int horsePower;
        int topSpeed;
    public:
        HighPerformance(string type, string make, int model, string color, int year, double milesDriven, int fuelTankSize, int horsePower, int topSpeed):GasVehicle(type, make, model, color, year, milesDriven, fuelTankSize),Vehicle(type, make, model, color, year, milesDriven){
            this->horsePower = horsePower;
            this->topSpeed = topSpeed;
        }
        void display(){
            Vehicle::display();
            GasVehicle::display();
            cout << "Horse Power: " << horsePower << endl;
            cout << "Top Speed: " << topSpeed << endl;
        }
};

class SportsCar: public HighPerformance{
    private:
        string gearBox;
        string driveSystem;
    public:
        SportsCar(string type, string make, int model, string color, int year, double milesDriven, int fuelTankSize, int horsePower, int topSpeed, string gearBox, string driveSystem):HighPerformance(type, make, model, color, year, milesDriven, fuelTankSize, horsePower, topSpeed), Vehicle(type, make, model, color, year, milesDriven){
            this->gearBox = gearBox;
            this->driveSystem = driveSystem;
        }
        void display(){
            HighPerformance::display();
            cout << "Gear Box: " << gearBox << endl;
            cout << "Drive System: " << driveSystem << endl;
        }
};

int main(){
    Bus bus("School Bus", "Daewoo", 2018, "Black", 2022, 1500.5, 80, 400, 4000, 10, 20.3, 35);
    bus.display();
    return 0;
}