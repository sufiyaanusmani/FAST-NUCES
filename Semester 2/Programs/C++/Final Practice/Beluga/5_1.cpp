#include <iostream>
#include <string>
using namespace std;

class Account{
    private:
        string name;
        int accountNumber;
        string type;
        double balance;
    public:
        void assign(string name, int accountNumber, string type, double balance){
            this->name = name;
            this->accountNumber = accountNumber;
            this->type = type;
            this->balance = balance;
        }

        void deposit(double amount){
            balance += amount;
            cout << "$ " << amount << " deposited successfully" << endl;
            cout << "New Balance: $ " << balance << endl;
        }

        void withdraw(double amount){
            if(amount <= balance){
                balance -= amount;
                cout << "$ " << amount << " withdrawn successfully" << endl;
                cout << "New Balance: $ " << balance << endl;
            }else{
                cout << "You don't have enough balance" << endl;
            }
        }

        void display(){
            cout << "Name: " << name << endl;
            cout << "Balance: $ " << balance << endl;
        }
};

int main(){
    Account account;
    account.assign("Sufiyaan Usmani", 213195, "Current", 20000);
    account.display();
    account.deposit(5000);
    account.withdraw(3000);
    account.withdraw(50000000000000);
    account.display();
    return 0;
}