// (Account Class) Create an Account class that a bank might use to represent customers’ bank
// accounts. Include a data member of type int to represent the account balance. [Note: In subsequent
// chapters, we’ll use numbers that contain decimal points (e.g., 2.75)—called floating-point values—
// to represent dollar amounts.] Provide a constructor that receives an initial balance and uses it to initialize the data member. The constructor should validate the initial balance to ensure that it’s greater
// than or equal to 0. If not, set the balance to 0 and display an error message indicating that the initial
// balance was invalid. Provide three member functions. Member function credit should add an
// amount to the current balance. Member function debit should withdraw money from the Account
// and ensure that the debit amount does not exceed the Account’s balance. If it does, the balance
// should be left unchanged and the function should print a message indicating "Debit amount exceeded account balance." Member function getBalance should return the current balance. Create a
// program that creates two Account objects and tests the member functions of class Account.

#include <iostream>
using namespace std;

class Account{
    private:
        int balance;
    public:
        Account(int);
        void credit(int);
        void debit(int);
        int getBalance();
};

int main(){
    Account a1(1000), a2(-2);
    cout << "Account 1 balance: " << a1.getBalance() << endl;
    a1.credit(500);
    cout << "Account 1 balance: " << a1.getBalance() << endl;
    a1.debit(5000);
    cout << "Account 1 balance: " << a1.getBalance() << endl;
    a1.debit(200);
    cout << "Account 1 balance: " << a1.getBalance() << endl;
    return 0;
}

Account::Account(int balance){
    if(balance >= 0){
        this->balance = balance;
    }else{
        cout << "Invalid balance" << endl;
        this->balance = 0;
    }
}

void Account::credit(int amount){
    if(amount > 0){
        this->balance = this->balance + amount;
    }else{
        cout << "Invalid amount" << endl;
    }
}

void Account::debit(int amount){
    if(amount <= balance){
        this->balance = this->balance - amount;
    }else{
        cout << "Amount exceeded" << endl;
    }
}

int Account::getBalance(){
    return balance;
}