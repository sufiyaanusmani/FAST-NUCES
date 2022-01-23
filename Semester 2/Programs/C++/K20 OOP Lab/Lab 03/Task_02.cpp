#include <iostream>
using namespace std;

class Date{
    private:
        int day, month, year;
    public:
        Date(int, int, int);
        void displayDate();
};

int main(){
    Date d(12, 2, 2021);
    d.displayDate();
    return 0;
}

Date::Date(int day, int month, int year){
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::displayDate(){
    cout << day << "/" << month << "/" << year << endl;
}