#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Car{
    protected:
        string model;
        int price;
    public:
        virtual void setPrice(int)=0;
        void setModel(string);
        void getData();
};

class Color: public Car{
    public:
        void setPrice(int);
};

class Company: public Car{
    public:
        void setPrice(int);
};

int main(){
    Color c;
    Company co;
    c.setModel("Red Color");
    c.setPrice(500);
    c.getData();
    co.setModel("Honda");
    co.setPrice(100);
    co.getData();
    return 0;
}

void Car::getData(){
    cout << "Model: " << model << endl;
    cout << "Price: " << price << endl;
}

void Car::setModel(string model){
    this->model = model;
}

void Color::setPrice(int price){
    this->price = price;
}

void Company::setPrice(int price){
    this->price = price;
}