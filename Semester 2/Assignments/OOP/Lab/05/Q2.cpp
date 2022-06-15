#include <iostream>
#include <string>
using namespace std;

class Customer{
    private:
        mutable int accountNumber;
        int age;
        int x;
    public:
        Customer(int ac, int age, int x):accountNumber(ac),age(age),x(x) {}
        int nonConstant(int);
        int constData(int);
        int constFunction(int) const;
        int constBoth(int) const;
        Customer & chain();
};

int main(){
    Customer c1(123, 18, 4);
    // c1.chain();
    // c1.chain();
    // c1.chain();
    // c1.chain();
    c1.chain().chain().chain().chain();
    return 0;
}

int Customer::nonConstant(int a){
    age = a;
    return age;
}

int Customer::constData(int a){
    accountNumber = a;
    return accountNumber;
}

int Customer::constFunction(int a) const{
    // age = a;
    return a;
}

int Customer::constBoth(int a) const{
    accountNumber = a;
    return accountNumber;
}

Customer & Customer::chain(){
    cout << "Value of x: " << x-- << endl;
    return(*this);
}


