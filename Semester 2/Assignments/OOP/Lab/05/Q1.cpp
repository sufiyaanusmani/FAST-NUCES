#include <iostream>
#include <string>
using namespace std;

class Customer{
    private:
        mutable int accountNumber;
        int age;
    public:
        Customer(int accountNumber, int age):accountNumber(accountNumber),age(age) {}
        int nonConstant(int);
        int constData(int);
        int constFunction(int) const;
        int constBoth(int) const;
};

int main(){
    Customer c1(123, 18);
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
    age = a;
    return a;
}

int Customer::constBoth(int a) const{
    accountNumber = a;
    return accountNumber;
}



