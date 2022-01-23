#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Movie{
    private:
        string name;
        int ticketsAdult;
        int ticketsChild;
        float adultPrice;
        float childPrice;
        float gross;
        float percentage;
        float amountDonated;
        float sale;
    public:
        Movie();
        void getData();
        void showData();
        ~Movie();
};

Movie::Movie(){
    cout << "Movie Created Successfully" << endl << endl;
}

void Movie::getData(){
    cout << "Enter movie name: ";
    cin >> name;
    cout << "Total Number of adult tickets: ";
    cin >> ticketsAdult;
    cout << "Price of adult ticket: ";
    cin >> adultPrice;
    cout << "Total Number of child tickets: ";
    cin >> ticketsChild;
    cout << "Price of child ticket: ";
    cin >> childPrice;
    cout << "Percentage to donate: ";
    cin >> percentage;
    gross = (ticketsAdult * adultPrice) + (ticketsChild * childPrice);
    amountDonated = (percentage / 100.0) * gross;
    sale = gross - amountDonated;
}

void Movie::showData(){
    system("cls");
    cout << "Movie Name: " << name << endl;
    cout << "Number of tickets sold: " << ticketsChild + ticketsAdult << endl;
    cout << "Gross Amount: " << gross << endl;
    cout << "Percentage: " << percentage << endl;
    cout << "Amount donated: " << amountDonated << endl;
    cout << "Net Sale: " << sale << endl;
}

Movie::~Movie(){
    cout << "Movie Deleting..." << endl;
}

int main(){
    Movie *m;
    m = new Movie;
    m->getData();
    m->showData();
    delete m;
    return 0;
}