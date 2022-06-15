#include <iostream>
#include <string>
using namespace std;

class Home{
	private:
		int noOfRooms;
		int homeID;
		int area;
		string address;
		int familyMembers;
	public:
		Home(){
			
		}
		Home(int noOfRooms, int homeID, int area, string address, int familyMembers){
			this->noOfRooms = noOfRooms;
			this->homeID = homeID;
			this->area = area;
			this->address = address;
			this->familyMembers = familyMembers;
		}
		Home operator+(Home &h){
			Home temp;
			temp.noOfRooms = noOfRooms + h.noOfRooms;
			temp.homeID = 2346;
			temp.area = area + h.area;
			temp.address = "XYZ Street 122 Road";
			temp.familyMembers = familyMembers;
			return temp;
		}
		Home operator-(Home &h){
			Home temp;
			temp.noOfRooms = noOfRooms - h.noOfRooms;
			temp.homeID = 2346;
			temp.area = area - h.area;
			temp.address = "XYZ Street 122 Road";
			temp.familyMembers = familyMembers;
			return temp;
		}
		Home operator++(int){
			Home temp;
			temp.noOfRooms = noOfRooms++;
			temp.homeID = 2346;
			temp.area = area++;
			temp.address = "XYZ Street 122 Road";
			temp.familyMembers = familyMembers;
			return temp;
		}
		Home operator--(int){
			Home temp;
			temp.noOfRooms = noOfRooms--;
			temp.homeID = 2346;
			temp.area = area--;
			temp.address = "XYZ Street 122 Road";
			temp.familyMembers = familyMembers;
			return temp;
		}
		void display(){
			cout << noOfRooms << " Rooms, " << homeID << ", " << area << " yards" << ", " << address << endl;
		}
		friend void myFriend(const Home &);
};

int main(){
	Home h1(2, 2821, 240, "ABC Street 123 Road", 4);
	Home h2(3, 2213, 120, "ABC Street 000 Road", 8);
	Home h3 = h1 + h2;
	h3.display();
	myFriend(h3);
	return 0;
}

void myFriend(const Home &h){
	cout << "Number of family members: " << h.familyMembers << endl;
}
