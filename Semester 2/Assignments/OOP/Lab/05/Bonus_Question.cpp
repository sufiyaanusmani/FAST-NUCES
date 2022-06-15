#include <iostream>
#include <string>
using namespace std;

class Date{
    private:
        int day, month, year;
    public:
        void setDate(int, int, int);
        void showDate();
};
class Transaction{
    private:
        int accountNumber;
        string name;
        int amount;
        string transactionType;
        Date d;
    public:
        void storeTransaction(int, string, int, string, int, int, int);
        void showTransaction();
};

class Customer{
    private:
        int accountNumber;
        string name;
        int amount;
        int numberOfTransactions;
        Transaction *transactions;
        int transactionNumber;
    public:
        Customer(int, string, int);
        Customer(const Customer &);
        void deposit(int);
        void withdraw(int);
        void showDetails();
        void showMyTransaction();
        ~Customer();
};

int main(){
    Customer c1(123, "Sufiyaan Usmani", 5);
    c1.deposit(200);
    c1.withdraw(100);
    c1.withdraw(10);
    c1.deposit(4000);
    c1.deposit(40000);
    c1.showMyTransaction();
    return 0;
}

void Transaction::storeTransaction(int accountNumber, string name, int amount, string transactionType, int day, int month, int year){
    this->accountNumber = accountNumber;
    this->name = name;
    this->amount = amount;
    this->transactionType = transactionType;
    this->d.setDate(day, month, year);
}

void Transaction::showTransaction(){
    cout << "Date: ";
    this->d.showDate();
    cout << "\nAccount Number: " << accountNumber << endl;
    cout << "Name: " << name << endl;
    cout << "Amount: " << amount << endl;
    cout << "Transaction Type: " << transactionType << endl << endl;
}

Customer::Customer(int accountNumber, string name, int numberOfTransactions){
    this->accountNumber = accountNumber;
    this->name = name;
    this->numberOfTransactions = numberOfTransactions;
    this->transactionNumber = 0;
    transactions = new Transaction[numberOfTransactions];
}

Customer::Customer(const Customer &c){
	this->accountNumber = accountNumber;
    this->name = name;
    this->numberOfTransactions = numberOfTransactions;
    this->transactionNumber = 0;
    transactions = new Transaction[c.numberOfTransactions];
    int i;
    for(i=0;i<c.numberOfTransactions;i++){
    	*(transactions + i) = *(c.transactions + i);
	}
}

void Customer::deposit(int a){
    amount += a;
    cout << "Rs. " << a << " deposited successfully" << endl;
    cout << "New Balance: Rs. " << amount << endl;
    (transactions + transactionNumber)->storeTransaction(accountNumber, name, amount, "Deposit", 12, 2, 2022);
    transactionNumber++;
}

void Customer::withdraw(int a){
    if(a <= amount){
        amount -= a;
        cout << "Rs. " << a << " deposited successfully" << endl;
        cout << "New Balance: Rs. " << amount << endl;
        (transactions + transactionNumber)->storeTransaction(accountNumber, name, amount, "Withdraw", 12, 3, 2023);
        transactionNumber++;
    }else{
        cout << "You don't have enough amount" << endl;
    }
}

void Customer::showMyTransaction(){
    int i;
    for(i=0;i<numberOfTransactions;i++){
        cout << "Transaction Number: " << i+1 << endl;
        (transactions + i)->showTransaction();
    }
}

Customer::~Customer(){
    delete[] transactions;
}

void Date::setDate(int day, int month, int year){
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::showDate(){
    cout << day << "/" << month << "/" << year << endl;
}