#include <iostream>
#include <string>
using namespace std;

class Home{
    private:
        int noOfRooms;
        int homeID;
        int area;
        string address;
    public:
        Home(){

        }
        Home(int noOfRooms, int homeID, int area, string address){
            this->noOfRooms = noOfRooms;
            this->homeID = homeID;
            this->area = area;
            this->address = address;    
        }
        Home operator+(Home &h){
            Home temp;
            temp.noOfRooms = noOfRooms + h.noOfRooms;
            temp.homeID = 2346;
            temp.area = area + h.area;
            temp.address = "XYZ Street 122 Road";
            return temp;
        }
        Home operator-(Home &h){
            Home temp;
            temp.noOfRooms = noOfRooms - h.noOfRooms;
            temp.homeID = 2346;
            temp.area = area - temp.area;
            temp.address = "XYZ Street 122 Road";
            return temp;
        }
        Home operator++(int){
            noOfRooms++;
            homeID = 2346;
            area++;
            address = "XYZ Street 122 Road";
            return *this;
        }
        Home operator--(int){
            noOfRooms--;
            homeID = 2346;
            area--;
            address = "XYZ Street 122 Road";
            return *this;
        }
        void display(){
            cout << noOfRooms << " Rooms, " << homeID << ", " << area << " yds, " << address << endl;
        }
};

int main(){
    Home h1(2, 2821, 240, "ABS Street 123 Road");
    Home h2(3, 2213, 120, "ABC Street 000 Road");
    Home h3;
    h3 = h1 + h2;
    h3.display();
    h1++;
    h1.display();
    return 0;
}