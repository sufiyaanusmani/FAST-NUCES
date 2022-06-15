#include <iostream>
using namespace std;

class FLOAT{
    private:
        float number;
    public:
        FLOAT(){

        }

        FLOAT(float number){
            this->number = number;
        }

        FLOAT operator+(const FLOAT &f){
            FLOAT temp;
            temp.number = number + f.number;
            return temp;
        }

        FLOAT operator-(const FLOAT &f){
            FLOAT temp;
            temp.number = number - f.number;
            return temp;
        }

        FLOAT operator*(const FLOAT &f){
            FLOAT temp;
            temp.number = number * f.number;
            return temp;
        }

        FLOAT operator/(const FLOAT &f){
            FLOAT temp;
            temp.number = number / f.number;
            return temp;
        }

        friend ostream & operator<<(ostream &, const FLOAT &);
};

int main(){
    FLOAT num1(4.3), num2(5.6);
    cout << num1 + num2 << endl;
    return 0;
}

ostream & operator<<(ostream &os, const FLOAT &f){
    os << f.number << endl;
    return os;
}