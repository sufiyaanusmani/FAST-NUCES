#include <iostream>
using namespace std;

class Time{
    private:
        int hours, minutes, seconds;
    public:
        Time(){

        }
        Time(int hours, int minutes, int seconds){
            this->hours = hours;
            this->minutes = minutes;
            this->seconds = seconds;
        }
        void normalize(){
            minutes = minutes + (seconds / 60);
            seconds = seconds % 60;
            hours = hours + (minutes / 60);
            minutes = minutes % 60;
        }
        Time operator+(const Time &t){
            Time temp;
            temp.hours = hours + t.hours;
            temp.minutes = minutes + t.minutes;
            temp.seconds = seconds + t.seconds;
            return temp;
        }
        bool operator<(const Time &t){
            if(hours < t.hours){
                return true;
            }else if(hours == t.hours && minutes < t.minutes){
                return true;
            }else if(minutes == t.minutes && hours == t.hours && seconds < t.seconds){
                return true;
            }else{
                return false;
            }
        }
        void print(){
            cout << hours << ":" << minutes << ":" << seconds << endl;
        }
};

int main(){
    Time t1(1, 29, 21);
    Time t2(4, 5, 3);
    Time t3 = t1 + t2;
    t3.print();
    return 0;
}