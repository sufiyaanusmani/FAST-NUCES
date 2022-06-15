// Name: Sufiyaan Usmani
// Roll No: 21K-3195
// Section: BCS-2J

#include <iostream>
using namespace std;

class Account{
    protected:
        double balance;
    public:
        Account(double balance=0.0){
            if(balance >= 0.0){
                this->balance = balance;
            }else{
                this->balance = 0.0;
                cout << "Invalid balance entered" << endl;
            }
        }
        void credit(double amount){
            this->balance += amount;
            cout << "Rs. " << amount << " deposited successfully" << endl;
        }
        bool debit(double amount){
            if(amount <= balance){
                this->balance -= amount;
                cout << "Rs. " << amount << " withdrawn successfully" << endl;
                return true;
            }else{
                cout << "Debit amount exceeded account balance" << endl;
                return false;
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
        SavingsAccount(double balance, double interestRate):Account(balance){
            this->interestRate = interestRate / 100.0;
        }
        double calculateInterest(){
            return (balance * interestRate);
        }
};

class CheckingAccount: public Account{
    private:
        double fee;
    public:
        CheckingAccount(double balance, double fee):Account(balance){
            this->fee = fee;
        }
        void credit(double amount){
            Account::credit(amount - fee);
            cout << "Fee for this transaction is Rs. " << fee << endl;
        }
        void debit(double amount){
            if(Account::debit(amount) == true){
                balance -= fee;
                cout << "Fee for this transaction is Rs.  " << fee << endl;
            }
        }
};

int main(){
    cout << "Class: ACCOUNT" << endl;
    Account a(1000);
    cout << "Current Balance: Rs. " << a.getBalance() << endl;
    cout << "Adding Rs. 500..." << endl;
    a.credit(500);
    cout << "Withdrawing Rs. 5000..." << endl;
    a.debit(5000);
    cout << "Withdrawing Rs. 200..." << endl;
    a.debit(200);
    cout << "New Balance: Rs. " << a.getBalance() << endl;
    
    cout << endl << "Class: SavingsAccount" << endl;
    SavingsAccount s(2000, 2.3);
    cout << "Current Balance: Rs. " << a.getBalance() << endl;
    double interest; 
    interest = s.calculateInterest();
    cout << "Adding Rs. " << interest << " as interest amount" << endl;
    s.credit(interest);
    cout << "New Balance: Rs. " << s.getBalance() << endl;

    cout << endl << "Class: CheckingAccount" << endl;
    CheckingAccount c(3000, 20);
    cout << "Current Balance: Rs. " << c.getBalance() << endl;
    cout << "Adding Rs. 500..." << endl;
    c.credit(500);
    cout << "Withdrawing Rs. 5000..." << endl;
    c.debit(5000);
    cout << "Withdrawing Rs. 200..." << endl;
    c.debit(200);
    cout << "New Balance: Rs. " << c.getBalance() << endl;
    return 0;
}