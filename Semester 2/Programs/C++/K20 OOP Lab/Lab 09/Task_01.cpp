#include <iostream>
using namespace std;

class Number{
    private:
        int x;
    public:
        void setData(int);
        Number operator --();
        Number operator --(int);
        void showData();
};

int main(){
    Number n1, n2;
    n1.setData(5);
    n2 = --n1;
    n2.showData();
    n2 = n1--;
    n2.showData();
    return 0;
}

void Number::setData(int x){
    this->x = x;
}

Number Number::operator--(){
    Number temp;
    temp.x = x * 4;
    return temp;
}

Number Number::operator--(int){
    Number temp;
    temp.x = x / 4;
    return temp;
}

void Number::showData(){
    cout << "Value: " << x << endl;
}