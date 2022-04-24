#include <iostream>
using namespace std;

class Date{
    private:
        int day, month, year;
    public:
        Date();
        Date(int day, int month, int year){
            this->day = ensureDay(day);
            this->month = ensureMonth(month);
            this->year = year;
        }
        int ensureDay(int day){
            if(day >= 1 && day <= 31){
                return day;
            }else{
                return 1;
            }
        }
        int ensureMonth(int month){
            if(month >= 1 && month <= 12){
                return month;
            }else{
                return 1;
            }
        }
        void setDay(int day){
            this->day = ensureDay(day);
        }
        void setMonth(int month){
            this->month = ensureMonth(month);
        }
        void setYear(int year){
            this->year = year;
        }
        int getDay(){
            return day;
        }
        int getMonth(){
            return month;
        }
        int getYear(){
            return year;
        }
        void displayDate(){
            cout << getDay() << "/" << getMonth() << "/" << getYear() << endl; 
        }
};

int main(){
    Date d1(199, 11, 2022);
    d1.displayDate();
    return 0;
}