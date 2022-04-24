#include <iostream>
using namespace std;

class Date{
    private:
        mutable int day;
        const int month;
        const int year;
    public:
        Date(int day, int month, int year):day(day),month(month),year(year) {}
        void showDate() const;
        void setDay(int) const;
};

int main(){
    Date d1(1,2,2022);
    d1.showDate();
    const Date d2(1, 3, 2023);
    d2.showDate();
    d2.setDay(23);
    d2.showDate();
    return 0;
}

void Date::showDate() const{
    cout << day << "/" << month << "/" << year << endl;
}

void Date::setDay(int d) const{
    day = d;
}