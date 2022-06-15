// Question 3
// Name: Sufiyaan Usmani
// Roll No: 21K-3195
// Section: BCS-2J

#include <iostream>
#include <conio.h>
using namespace std;

class SavingsAccount{
    private:
        static float interestRate;
        float savingsBalance;
    public:
        SavingsAccount(float savingsBalance=0){
            this->savingsBalance = savingsBalance;
        }
        float calculateMonthlyInterestRate(){ // this will calculate interest, add interest in the balance, and return this interest to display in consoles
            float interest;
            interest = (savingsBalance * interestRate) / 12.0;
            savingsBalance += interest;
            return(interest);
        }
        void setSavingsBalance(float savingsBalance){
            this->savingsBalance = savingsBalance;
        }
        static void modifyInterestRate(float rate){
            interestRate = rate;
        }
        float getSavingsBalance(){
            return savingsBalance;
        }
};

float SavingsAccount::interestRate;

int main(){
    SavingsAccount account1(2000), account2(3000);
    SavingsAccount::modifyInterestRate(0.03);

    cout << "Current Interest Rate: 3 %" << endl << endl;

    cout << "Initial Balance of Account 1: $ " << account1.getSavingsBalance() << endl;
    cout << "Interest: $ " << account1.calculateMonthlyInterestRate() << endl;
    cout << "New Balance of Account 1: $ " << account1.getSavingsBalance() << endl << endl;

    cout << "Initial Balance of Account 2: $ " << account2.getSavingsBalance() << endl;
    cout << "Adding Interest: $ " << account2.calculateMonthlyInterestRate() << endl;
    cout << "New Balance of Account 2: $ " << account2.getSavingsBalance() << endl << endl;

    SavingsAccount::modifyInterestRate(0.04);

    cout << "New Interest Rate: 4 %" << endl << endl;

    cout << "Initial Balance of Account 1: $ " << account1.getSavingsBalance() << endl;
    cout << "Adding Interest: $ " << account1.calculateMonthlyInterestRate() << endl;
    cout << "New Balance of Account 1: $ " << account1.getSavingsBalance() << endl << endl;

    cout << "Initial Balance of Account 2: $ " << account2.getSavingsBalance() << endl;
    cout << "Interest: $ " << account2.calculateMonthlyInterestRate() << endl;
    cout << "New Balance of Account 2: $ " << account2.getSavingsBalance() << endl << endl;

	getch();
    return 0;
}