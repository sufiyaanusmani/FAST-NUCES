// Name: Sufiyaan Usmani
// Roll No: 21K-3195
// Section: BCS-2J

#include <iostream>
using namespace std;

class Package{
    protected:
        string name;
        string address;
        string city;
        string state;
        int zipCodeSender;
        int zipCodeReceiver;
        double weight;
        double costPerOunce;
    public:
        Package(string name, string address, string city, string state, int zipCodeSender, int zipCodeReceiver, double weight, double costPerOunce){
            setName(name);
            setAddress(address);
            setCity(city);
            setState(state);
            setZipCodeSender(zipCodeSender);
            setZipCodeReceiver(zipCodeReceiver);
            setWeight(weight);
            setCostPerOunce(costPerOunce);
        }
        void setName(string name){
            this->name = name;
        }
        void setAddress(string address){
            this->address = address;
        }
        void setCity(string city){
            this->city = city;
        }
        void setState(string state){
            this->state = state;
        }
        void setZipCodeSender(int zipCodeSender){
            this->zipCodeSender = zipCodeSender;
        }
        void setZipCodeReceiver(int zipCodeReceiver){
            this->zipCodeReceiver = zipCodeReceiver;
        }
        void setWeight(double weight){
            if(weight > 0.0){
                this->weight = weight;
            }else{
                this->weight = 0.0;
            }
        }
        void setCostPerOunce(double costPerOunce){
            if(costPerOunce > 0.0){
                this->costPerOunce = costPerOunce;
            }else{
                this->costPerOunce = 0.0;
            }
        }
        double calculateCost(){
            return (weight * costPerOunce);
        }
};

class TwoDayPackage: public Package{
    protected:
        double fee;
    public:
        TwoDayPackage(string name, string address, string city, string state, int zipCodeSender, int zipCodeReceiver, double weight, double costPerOunce, double fee):Package(name, address, city, state, zipCodeSender, zipCodeReceiver, weight, costPerOunce){
            setFee(fee);
        }
        void setFee(double fee){
            this->fee = fee;
        }
        double calculateCost(){
            return (Package::calculateCost() + fee);
        }
};

class OverNightPackage: public Package{
    protected:
        double feePerOunce;
    public:
        OverNightPackage(string name, string address, string city, string state, int zipCodeSender, int zipCodeReceiver, double weight, double costPerOunce, double feePerOunce):Package(name, address, city, state, zipCodeSender, zipCodeReceiver, weight, costPerOunce){
            setFeePerOunce(feePerOunce);
        }
        void setFeePerOunce(double feePerOunce){
            this->feePerOunce = feePerOunce;
        }
        double calculateCost(){
            return (Package::calculateCost() + (weight * feePerOunce));
        }
};

int main(){
    TwoDayPackage p("Package 1", "ABC", "Karachi", "Sindh", 9221, 9234, 4.4, 20.5, 50);
    cout << "TWO DAY PACKAGE" << endl;
    cout << "Total Bill: Rs. " << p.calculateCost() << endl << endl;
    OverNightPackage n("Package 2", "XYZ", "Lahore", "Punjab", 9251, 9556, 2.3, 25.5, 15.5);
    cout << "OVERNIGHT PACKAGE" << endl;
    cout << "Total Bill: Rs. " << n.calculateCost() << endl;
    return 0;
}