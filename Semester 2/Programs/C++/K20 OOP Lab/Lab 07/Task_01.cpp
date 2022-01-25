#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Book{
    public:
        string genre;
};

class Book1: public Book{
    private:
        string title, author;
    public:        
        void setDetails();
        void getDetails();
};

class Book2: public Book{
    private:
        string title, author;
    public:        
        void setDetails();
        void getDetails();
};


int main(){
    Book1 o1;
    Book2 o2;
    o1.setDetails();
    o1.getDetails();
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    o2.setDetails();
    o2.getDetails();
    return 0;
}

void Book1::setDetails(){
            cout << "Enter title: ";
            fflush(stdin);
            getline(cin, title);
            cout << "Enter author name: ";
            fflush(stdin);
            getline(cin, author);
            cout << "Enter genre: ";
            fflush(stdin);
            getline(cin, genre);
}

void Book1::getDetails(){
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Genre: " << genre << endl;
}

void Book2::setDetails(){
            cout << "Enter title: ";
            fflush(stdin);
            getline(cin, title);
            cout << "Enter author name: ";
            fflush(stdin);
            getline(cin, author);
            cout << "Enter genre: ";
            fflush(stdin);
            getline(cin, genre);
}

void Book2::getDetails(){
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Genre: " << genre << endl;
}