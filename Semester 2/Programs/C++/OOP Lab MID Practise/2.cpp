// Create a class called Date that includes three pieces of information as instance variables—a month (typeint), a day (typeint) and a year (typeint). Provide a method displayDate that displays the month, day and year separated by forward slashes(/). Write a test application named DateTest that demonstrates classDate’s capabilities.
#include <iostream>
using namespace std;

class Date{
    private:
        int day, month, year;
    public:
        void setDate(int day, int month, int year){
            this->day = day;
            this->month = month;
            this->year = year;
        }
        void displayDate(){
            cout << day << "/" << month << "/" << year << endl;
        }
};

int main(){
    Date d;
    d.setDate(12,3,2022);
    d.displayDate();
    return 0;
}