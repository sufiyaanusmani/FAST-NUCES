#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Book{
    private:
        string author;
        string title;
        int price;
        string publisher;
        int qty;
    public:
        Book();
        void buyBook();
};

int main(){
    Book b;
    b.buyBook();
    return 0;
}

Book::Book(){
    cout << "Enter author name: ";
    fflush(stdin);
    getline(cin, this->author);
    cout << "Enter title: ";
    fflush(stdin);
    getline(cin, this->title);
    cout << "Enter publisher: ";
    fflush(stdin);
    getline(cin, this->publisher);
    cout << "Enter price of book: ";
    fflush(stdin);
    cin >> this->price;
    cout << "Enter quantity: ";
    fflush(stdin);
    cin >> this->qty;
}

void Book::buyBook(){
    string title, author;
    int qty, price;
    cout << "Enter title: ";
    fflush(stdin);
    getline(cin, title);
    cout << "Enter author name: ";
    fflush(stdin);
    getline(cin, author);
    if(this->title == title && this->author == author){
        cout << "Book is availabe" << endl;
        cout << "Enter quantity: ";
        fflush(stdin);
        cin >> qty;
        if(this->qty >= qty){
            price = this->price * qty;
            this->qty = this->qty - qty;
            cout << "Total price: " << price << endl;
            cout << "Copies now available: " << this->qty << endl;
        }else{
            cout << "Required copies not in stock" << endl;
        }
    }else{
        cout << "Book not found\a" << endl;
    }
}