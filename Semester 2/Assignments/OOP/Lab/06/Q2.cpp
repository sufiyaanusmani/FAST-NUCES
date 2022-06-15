#include <iostream>
using namespace std;

class User{
    private:
        static int userCount;
    protected:
        int ID;
        string name;
        int age;
    public:
        User(int ID, string name, int age){
			incrementCount();
            this->ID = ID;
            this->name = name;
            this->age = age;
		}
        static void incrementCount(){
            userCount++;
        }
};

class Customer: public User{
    private:
        static int accountCount;
	protected:
        double balance;
	public:
        Customer(int ID, string name, int age, double balance):User(ID, name, age){
            setBalance(balance);
            Customer::incrementCount();
        }
        static void incrementCount(){
            accountCount++;
            User::incrementCount();
        }
        void setBalance(double balance){
            if(balance < 0){
                this->balance = 0.0;
            }else{
                this->balance = balance;
            }
        }
        double getBalance(){
			return balance;
		}
        void credit(double amount){
			balance += amount;
		}
		void debit(double amount){
			if(amount <= balance){
				balance -= amount;
			}else{
				cout << "Not enough balance" << endl;
			}
		}
        void display(){
            cout << "Account Number: " << ID << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Balance: " << getBalance() << endl;
        }
        int getCount(){
            return accountCount;
        }
};

class SavingsAccount: public Customer{
    private:
        static int savingAccountCount;
	private:
		static double interestRate;
	public:
		SavingsAccount(int ID, string name, int age, double balance, double interestRate):Customer(ID, name, age, balance){
			setInterestRate(interestRate);
            SavingsAccount::incrementCount();
		}
		double calculateInterestRate(){
			return(balance * interestRate);
		}
        static void setInterestRate(double rate){
            interestRate = rate;
        }
        static void incrementCount(){
            savingAccountCount++;
            Customer::incrementCount();
        }
        int getCount(){
            return savingAccountCount;
        }        
};

int User::userCount;
int Customer::accountCount;
double SavingsAccount::interestRate;
int SavingsAccount::savingAccountCount;

int main(){
	SavingsAccount s(213195, "Sufiyaan Usmani", 18, 2000, 0.2);
    s.display();
    cout << "Adding PKR 200" << endl;
    s.credit(200);
    cout << "New Balance: " << s.getBalance() << endl;
    cout << "Interest: " << s.calculateInterestRate() << endl;
    cout << "Total number of saving accounts: " << s.getCount() << endl;
	return 0;
}
