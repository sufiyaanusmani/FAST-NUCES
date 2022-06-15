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

int User::userCount = 0;
int Customer::accountCount = 0;

int main(){
	Customer c(213195, "Sufiyaan Usmani", 18, 2000);
    c.display();
    cout << "Adding PKR 200" << endl;
    c.credit(200);
    cout << "New Balance: " << c.getBalance() << endl;
    cout << "Total number of accounts: " << c.getCount() << endl;
	return 0;
}
