// Name: Sufiyaan Usmani
// Roll No: 21K-3195
// Section: BCS-2J

#include <iostream>
using namespace std;

class Account{
    protected:
        double balance;
    public:
        Account(){
            balance = 0.0;
        }
        Account(double balance){
            if(balance >= 0.0){
                this->balance = balance;
            }else{
                this->balance = 0.0;
                cout << "Initial balance was invalid" << endl;
            }
        }
        void credit(double amount){
            balance += amount;
        }
        void debit(double amount){
            if(amount <= balance){
                balance -= amount;
                cout << "Amount debitted successfully" << endl;
            }else{
                cout << "Debit amount exceeded account balance" << endl;
            }
        }
        double getBalance(){
            return balance;
        }
};

class SavingsAccount: public Account{
    private:
        double interestRate;
    public:
        SavingsAccount(){
            interestRate = 0.0;
        }
        SavingsAccount(double balance, double interestRate):Account(balance){
            this->interestRate = interestRate;
        }
        double calculateInterest(){
            return((interestRate / 100.0) * balance);
        }
};

class CheckingAccount: public Account{
    private:
        double fee;
    public:
        CheckingAccount(){
            fee = 0.0;
        }
        CheckingAccount(double balance, double fee):Account(balance){
            this->fee = fee;
        }
        void credit(double amount){
            if(fee <= (amount + balance)){  // it checks if fee is less than new amount
                Account::credit(amount - fee);  // this will deduct fee from the account
            }
        }
        void debit(double amount){
            if((amount + fee) <= balance){
                Account::debit(amount + fee);
            }else{
                cout << "Debit amount exceeded account balance" << endl;
            }
        }
};

int main(){
    cout << "Class: ACCOUNT" << endl;
    Account account(1000);
    cout << "Current Balance: Rs. " << account.getBalance() << endl;
    cout << "Adding Rs. 500..." << endl;
    account.credit(500);
    cout << "New balance: Rs. " << account.getBalance() << endl;
    cout << "Withdrawing Rs. 5000..." << endl;
    account.debit(5000);
    cout << "Withdrawing Rs. 200..." << endl;
    account.debit(200);
    cout << "New Balance: Rs. " << account.getBalance() << endl;

    cout << "-------------------------------" << endl;

    cout << "Class: SavingsAccount" << endl;
    SavingsAccount saving(2000, 2.3);
    cout << "Current Balance: Rs. " << saving.getBalance() << endl;
    double interest; 
    interest = saving.calculateInterest();
    cout << "Interest: Rs. " << interest << endl;
    cout << "Adding Rs. " << interest << " as interest amount" << endl;
    saving.credit(interest);
    cout << "New Balance: Rs. " << saving.getBalance() << endl;

    cout << "-------------------------------" << endl;

    cout << "Class: CheckingAccount" << endl;
    CheckingAccount checking(3000, 20);
    cout << "Current Balance: Rs. " << checking.getBalance() << endl;
    cout << "Adding Rs. 500..." << endl;
    checking.credit(500);
    cout << "New balance: Rs. " << checking.getBalance() << endl;
    cout << "Withdrawing Rs. 5000..." << endl;
    checking.debit(5000);
    cout << "Withdrawing Rs. 200..." << endl;
    checking.debit(200);
    cout << "New Balance: Rs. " << checking.getBalance() << endl;
    return 0;
}