#include <iostream>
using namespace std;

class Vehicle{
    private:
        string vehicleID;
        static int vehicleCount;
    protected:
        string plateNumber;
        string displayNumber(){
            return plateNumber;
        }
    public:
        Vehicle(string vehicleID, string plateNumber){
            this->vehicleID = vehicleID;
            this->plateNumber = plateNumber;
            vehicleCount++;
        }
        void display(){
            cout << "Vehicle ID: " << vehicleID << endl;
            cout << "Plate Number: " << displayNumber() << endl;
            cout << "Vehicle Count: " << displayCount() << endl;
        }
        int displayCount(){
            return vehicleCount;
        }
};

class RegisteredVehicle: public Vehicle{
    private:
        string regID;
        static int regCount;
    protected:
        string regNumber;
        string displayNumber(){
            return regNumber;
        }
    public:
        RegisteredVehicle(string regID, string regNumber, string vehicleID, string plateNumber):Vehicle(vehicleID, plateNumber){
            this->regID = regID;
            this->regNumber = regNumber;
            regCount++;
        }
        void display(){
            Vehicle::display();
            cout << "Registration ID: " << regID << endl;
            cout << "Registered vehicle count: " << regCount << endl;
        }
        int displayCount(){
            return regCount;
        }
};

class Bike: protected RegisteredVehicle{
    private:
        string bikeID;
        static int bikeCount;
    public:
        Bike(string bikeID, string regID, string regNumber, string vehicleID, string plateNumber):RegisteredVehicle(regID, regNumber, vehicleID, plateNumber){
            this->bikeID = bikeID;
            bikeCount++;
        }
        void display(){
            RegisteredVehicle::display();
            cout << "Bike ID: " << bikeID << endl;
        }
        int displayCount(){
            return bikeCount;
        }
};

class MountainBike: protected Bike{
    private:
        string mbID;
        static int mbCount;
    public:
        MountainBike(string mbID, string bikeID, string regID, string regNumber, string vehicleID, string plateNumber):Bike(bikeID, regID, regNumber, vehicleID, plateNumber){
            this->mbID = mbID;
            mbCount++;
        }
        void display(){
            Bike::display();
            cout << "MB ID: " << mbID << endl;
        }
        int displayCount(){
            return mbCount;
        }
        void displayPlate(){
            Vehicle::displayNumber();
        }
        void displayRegistration(){
            RegisteredVehicle::display();
        }
};

int Vehicle::vehicleCount = 0;
int RegisteredVehicle::regCount = 0;
int Bike::bikeCount = 0;
int MountainBike::mbCount = 0;

int main(){
    string id;
    cout << "Enter vehicle ID: K21-";
    cin >> id;
    string a = "";
    a += id[0];
    string b = "";
    b += id[0];
    b += id[1];
    Vehicle v(a, b);
    string c = "", d = "";
    c += id[1];
    d += id[2] + id[3];
    RegisteredVehicle r(c, d, a, b);
    string e = "";
    e += id[2];
    string f="";
    Bike b1(e, c, d, a, b);
    f+= id[3];
    MountainBike m(f, e, c, d, a, b);
    m.display();
    return 0;
}