#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    A(int = 10);
    void showData();
};

A::A(int a){
    this->a = a;
}

void A::showData(){
    cout << this->a << endl;
}

int main()
{
    A a1(15);
    a1.showData();
    return 0;
}