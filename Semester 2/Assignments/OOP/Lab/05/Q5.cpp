#include <iostream>
#include <string>
using namespace std;

class Bank{
    private: 
        string name;
        mutable int accountNumber;
        string typeOfAccount;
        int balance;
        static float rateOfInterest;
    public:
        Bank():accountNumber(123),name("User"),typeOfAccount("None"),balance(0) {}
        Bank(string name, int accountNumber, string typeOfAccount):accountNumber(accountNumber),name(name),typeOfAccount(typeOfAccount),balance(0){}
        void deposit(int);
        void withdraw(int);
        void showDetails();
        static void setRateOfInterest(float);
        static float showRateOfInterest();
};

float Bank::rateOfInterest;

int main(){
    Bank b1("Sufiyaan Usmani", 123, "Basic");
    b1.showDetails();
    b1.deposit(10000);
    b1.withdraw(50000);
    b1.showDetails();
    Bank::setRateOfInterest(1.2);
    cout << Bank::showRateOfInterest();
    return 0;
}

void Bank::deposit(int amount){
    balance += amount;
    cout << "Rs. " << amount << " deposited successfully" << endl;
    cout << "New Balance: Rs. " << balance << endl;
}

void Bank::withdraw(int amount){
    if(amount <= balance){
        balance -= amount;
        cout << "Rs. " << amount << " deposited successfully" << endl;
        cout << "New Balance: Rs. " << balance << endl;
    }else{
        cout << "You don't have enough amount" << endl;
    }
}

void Bank::setRateOfInterest(float roi){
    rateOfInterest = roi;
}

float Bank::showRateOfInterest(){
    return rateOfInterest;
}

void Bank::showDetails(){
    cout << "Name: " << name << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Type of Account: " << typeOfAccount << endl;
    cout << "Balance: " << balance << endl;
}