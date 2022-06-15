#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
using namespace std;

class Address{
    private:
        int houseNo;
        char block;
        int sector;
        string city;
        string country;
    public:
        Address();
        Address(string *);
        void display();    
};

Address::Address(){

}

Address::Address(string *address){
    this->houseNo = 0;
    this->houseNo = (((*address).at(9)-'0') * 100) + (((*address).at(10)-'0') * 10) + (((*address).at(11)-'0'));
    this->block = (*address).at(20);
    this->sector = (((*address).at(30)-'0') * 10) + (((*address).at(31)-'0'));
    this->city = (*address).at(34);
    int i;
    for(i=35;i<41;i++){
        this->city += (*address).at(i);
    }
    for(i=43;i<51;i++){
        this->country += (*address).at(i);
    }
}

void Address::display(){
    cout << "House No: " << houseNo << endl;
    cout << "Block: " << block << endl;
    cout << "Sector: " << sector << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
}

int main(){
    string address;
    cout << "Please enter your address: ";
    getline(cin, address);
    Address a1(&address);
    a1.display();
    return 0;
}