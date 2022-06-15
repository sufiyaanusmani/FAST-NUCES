// A school library wants to organize its library system by categorizing books according to their genre. They need an automated system that will allow them to input the details of the books that are in their library. To do this, you need to implement a program that contains a base class called Books that will contain a data member to store the genre of the book. Derive two other classes from the base class and name them accordingly. Each of these two classes will hold details about a book from a specific genre of your choice such as Novel, Narrative, Mystery and so on. The derived class will contain data members to store the title and the author of the book. Display the details of each book along with their genre.
#include <iostream>
using namespace std;

class Book{
    protected:
        string genre;
    public:
        Book(string genre){
            setGenre(genre);
        }
        void setGenre(string genre){
            if(genre == "Novel" || genre == "Narrative" || genre == "Mystery"){
                this->genre = genre;
            }else{
                this->genre = "NONE";
            }
        }
};

class Book1: public Book{
    protected: 
        string title;
        string author;
    public: 
        Book1(string title, string author, string genre):Book(genre){
            this->title = title;
            this->author = author;
        }
        void display(){
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Genre: " << genre << endl;
        }
};

int main(){
    Book1 b("Alchemist", "Paulo Coelho", "Novel");
    b.display();
    return 0;
}