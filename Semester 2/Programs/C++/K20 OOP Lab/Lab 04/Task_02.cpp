#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
using namespace std;

class Account{
    private:
        int accountNumber;
        string name;
        int balance;
    public:
        Account(string);
        void addAmount();
        void withdrawAmount();
        int getCurrentBalance();
};

int main(){
    string name;
    cout << "Enter your name: ";
    cin >> name;
    Account a(name);
    int choice;
    while(1){
        system("cls");
        cout << "1. Add Amount" << endl << "2. Withdraw Amount" << endl << "3. View Current Balance" << endl << "4. Exit" << endl << endl << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                a.addAmount();
                break;
            case 2:
                a.withdrawAmount();
                break;
            case 3:
                cout << "Current Amount: " << a.getCurrentBalance() << endl;
                getch();
                break;
            case 4:
                cout << "Thankyou!";
                exit(0);
                break;
            default:
                cout << "Wrong choice entered, please enter a valid amount";
                getch();
                break;
        }
    }
    return 0;
}

Account::Account(string name){
    this->accountNumber = 3195;
    this->name = name;
    this->balance = 0;
    cout << "Account created successfuly" << endl;
}

void Account::addAmount(){
    int amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    balance = balance + amount;
    cout << "Amount deposited successfully, current amount: " << balance << endl << endl;
    getch();
}

void Account::withdrawAmount(){
    int amount;
    while(1){
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if(amount > this->balance){
            cout << "Not enough balance in your account, enter a valid amount" << endl;
        }else{
            balance = balance - amount;
            cout << amount << " withdrawn successfully, Current balance: " << balance << endl << endl;
            getch();
            break; 
        }
    }
}

int Account::getCurrentBalance(){
    return(this->balance);
}