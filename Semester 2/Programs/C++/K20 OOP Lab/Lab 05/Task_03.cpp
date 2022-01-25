#include <iostream>
using namespace std;

class Account{
    private:
        int account_no;
        int account_bal;
        int security_code;
    public:
        Account();
        void showData();
};

int main(){
    Account a;
    a.showData();
    return 0;
}

Account::Account(){
    cout << "Enter Account Number: ";
    cin >> account_no;
    cout << "Enter Account balance: ";
    cin >> account_bal;
    cout << "Enter security code: ";
    cin >> security_code;
    cout << "Account made successfully" << endl << "<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
}

void Account::showData(){
    cout << "Account No: " << account_no << endl;
    cout << "Account balance: " << account_bal << endl;
    cout << "Security code: " << security_code << endl;
}