// Sufiyaan Usmani

// Design and implement a class dayType that implements the day of the
// week in a program. The class dayType should store the day, such as Sun
// for Sunday. The program should be able to perform the following operations
// on an object of type dayType:
// a. Set the day.
// b. Print the day.
// c. Return the day.
// d. Return the next day.
// e. Return the previous day.
// f. Calculate and return the day by adding certain days to the current day.
// For example, if the current day is Monday and we add 4 days, the day to
// be returned is Friday. Similarly, if today is Tuesday and we add 13 days,
// the day to be returned is Monday.
// g. Add the appropriate constructors.

#include <iostream>
#include <string>
using namespace std;

class Day{
    private:
        string days[7];
        string currentDay;
    public:
        Day(){
            initializeArray();
        }
        Day(string day){
            initializeArray();
            this->currentDay = day;
        }
        void initializeArray(){
            days[0] = "Sunday";
            days[1] = "Monday";
            days[2] = "Tuesday";
            days[3] = "Wednesday";
            days[4] = "Thursday";
            days[5] = "Friday";
            days[6] = "Saturday";
        }
        string printDay(){
            return currentDay;
        }
        string nextDay(){
            int i, index;
            for(i=0;i<7;i++){
                if(currentDay == days[i]){
                    index = i;
                    break;
                }
            }
            index++;
            if(index == 6){
                index = 0;
            }
            return days[index];
        }
        string previousDay(){
            int i, index;
            for(i=0;i<7;i++){
                if(currentDay == days[i]){
                    index = i;
                    break;
                }
            }
            index--;
            if(index == -1){
                index = 6;
            }
            return days[index];
        }
        string operator+(int num){
            int curDay;
            if(currentDay == "Sunday"){
                curDay = 0;
            }else if(currentDay == "Monday"){
                curDay = 1;
            }else if(currentDay == "Tuesday"){
                curDay = 2;
            }else if(currentDay == "Wednesday"){
                curDay = 3;
            }else if(currentDay == "Thursday"){
                curDay = 4;
            }else if(currentDay == "Friday"){
                curDay = 5;
            }else{
                curDay = 6;
            }
            int n = (curDay + num) % 7;
            return days[n];
        }
};

int main(){
    Day day("Tuesday");
    cout << "Current Day: " << day.printDay() << endl; 
    cout << "Next Day: " << day.nextDay() << endl;  
    cout << "Previous Day: " << day.previousDay() << endl;
    cout << day + 13 << endl;
    return 0;
}