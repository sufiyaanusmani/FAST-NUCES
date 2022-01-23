#include <iostream>
#include <string>
using namespace std;

class Book{
    private:
        int isbn;
        string bookName;
        string authorName;
        string publisher;
    public:
        void setBookInfo(int, string, string, string);
        void getBookInfo();
};

int main(){
    Book b[5];
    int i;
    int isbn;
    string bName, authorName, publisherName;
    for(i=0;i<5;i++){
        cout << "Enter info for Book " << i+1 << " : ";
        cin  >> isbn >> bName >> authorName >> publisherName;
        b[i].setBookInfo(isbn, bName, authorName, publisherName);
    }
    for(i=0;i<5;i++){
        b[i].getBookInfo();
    }
    return 0;
}

void Book::setBookInfo(int isbn, string bookName, string authorName, string publisher){
    this->isbn = isbn;
    this->bookName = bookName;
    this->authorName = authorName;
    this->publisher = publisher;
}

void Book::getBookInfo(){
    cout << "ISBN: " << isbn << endl;
    cout << "Book Name: " << bookName << endl;
    cout << "Author Name: " << authorName << endl;
    cout << "Publisher: " << publisher << endl << endl;
}