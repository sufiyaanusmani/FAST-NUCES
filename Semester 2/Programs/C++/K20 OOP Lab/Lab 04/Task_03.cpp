#include <iostream>
#include <string>
using namespace std;

class Invoice{
    private:
        string partNumber;
        string description;
        int qty;
        double pricePerItem;
    public:
        Invoice();
        double getInvoiceAmount();
};

int main(){
    Invoice i;
    cout << "Invoice Amount: " << i.getInvoiceAmount() << endl;
    return 0;
}

Invoice::Invoice(){
    cout << "Enter part number: ";
    getline(cin, partNumber);
    cout << "Enter part description: ";
    getline(cin, description);
    cout << "Enter quantity: ";
    cin >> qty;
    if(qty < 0){
        qty = 0;
    }
    cout << "Enter price per item: ";
    cin >> pricePerItem;
    if(pricePerItem < 0){
        pricePerItem = 0.0;
    }
    cout << "Part Number: " << partNumber << endl;
    cout << "Description: " << description << endl << endl;
}

double Invoice::getInvoiceAmount(){
    return(qty * pricePerItem);
}