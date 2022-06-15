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
    Account accounts[10];
    int i;
    for(i=0;i<10;i++){
        accounts[i].assign("Sufiyaan", i, "Current", i*1000);
    }
    for(i=0;i<10;i++){
        accounts[i].display();
        cout << endl;
    }
    return 0;
}