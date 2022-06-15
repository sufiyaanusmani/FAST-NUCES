#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Product{
    private:
        string name;
        string type;
        int qty;
        float pricePerItem;
    public:
        void setName(string);
        void setType(string);
        void setQty(int);
        void setPricePerItem(float);
        string getName();
        string getType();
        int getQty();
        float getPricePerItem();
        float getProductAmount();
};

void Product::setName(string name){
    this->name = name;
}

void Product::setType(string type){
    this->type = type;
}

void Product::setQty(int qty){
    if(qty < 0){
        this->qty = 0;
    }else{
        this->qty = qty;
    }
}

void Product::setPricePerItem(float price){
    if(price < 0){
        this->pricePerItem = 0.0;
    }else{
        this->pricePerItem = price;
    }
}

string Product::getName(){
    return name;
}

string Product::getType(){
    return type;
}

int Product::getQty(){
    return qty;
}

float Product::getPricePerItem(){
    return pricePerItem;
}

float Product::getProductAmount(){
    return(pricePerItem*qty);
}

int main(){
    Product p1;

    string name;
    cout << "Enter name of product: ";
    fflush(stdin);
    getline(cin, name);
    p1.setName(name);

    string type;
    cout << "Enter product type: ";
    fflush(stdin);
    getline(cin, type);
    p1.setType(type);

    int qty;
    cout << "Enter quantity of " << p1.getName() << ": ";
    cin >> qty;
    p1.setQty(qty);

    float price;
    cout << "Enter price per item of " << p1.getName() << ": $ ";
    cin >> price;
    p1.setPricePerItem(price);

    system("cls");

    cout << "BILL" << endl << endl;
    cout << "Product Name: " << p1.getName() << endl;
    cout << "Product Type: " << p1.getType() << endl;
    cout << "Quantity: " << p1.getQty() << endl;
    cout << "Price per Item: $ " << p1.getPricePerItem() << endl;
    cout << "Total Bill: $ " << p1.getProductAmount() << endl;

    return 0;
}