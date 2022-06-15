// Question 4
// Name: Sufiyaan Usmani
// Roll No: 21K-3195
// Section: BCS-2J

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string>
using namespace std;

class AirPlane {
	private:
		bool seats[10];
		static int firstClassSeat;
		static int economyClassSeat;
	public:
		AirPlane() {
			int i;
			for(i=0; i<10; i++) {		// this will set all seats to false
				seats[i] = false;
			}
		}
		void assignFirstClassSeat() {
			int i;
			bool economySeatsEmpty = false;
			char ch, choice;
			if (firstClassSeat <= 4) {
				seats[firstClassSeat] = true;
				firstClassSeat++;
				printBoardingPass(firstClassSeat, "First Class");
			} else {
				cout << "\nFirst class seats are full" << endl;
				// checking if economy class seats are empty, because if economy seats are also full, there is no need to ask person to reserve economy seat
				for(i=5; i<10; i++) {
					if(seats[i] == false) {
						economySeatsEmpty = true;
						break;
					}
				}
				if(economySeatsEmpty == true) {
					cout << "Can we place your seat in economy section? [y/n]" << endl;
					// the following loop will ensure only y or n are entered
					while(1) {
						ch = getch();
						if(ch == 'y' || ch == 'Y' || ch == 'n' || ch == 'N') {
							cout <<  ch;
							choice = ch;
							break;
						}
					}
					if(ch == 'y' || ch == 'Y') {
						assignEconomyClassSeat();
					} else {
						cout << "\nNext flight leaves in 3 hours" << endl;
						Sleep(2000);
						exit(0);
					}
				} else {
					cout << "\nSorry, both first class and economy seats are full. Next flight leaves in 3 hours" << endl;
					Sleep(3500);
					exit(0);
				}
			}
		}
		
		void assignEconomyClassSeat() {
			if (economyClassSeat <= 9) {
				seats[economyClassSeat] = true;
				economyClassSeat++;
				printBoardingPass(economyClassSeat, "Economy Class");
			} else {
				cout << "\nEconomy class seats are full" << endl;
				Sleep(1000);
			}
		}
		
		void printBoardingPass(int seatNumber, string type) {
			system("cls");
			cout << "***** SEAT ASSIGNED *****" << endl;
			cout << "Seat Number: " << seatNumber << endl;
			cout << "Type: " << type << endl;
			Sleep(2000);
		}
};

int AirPlane::firstClassSeat = 0;
int AirPlane::economyClassSeat = 5;

int main() {
	int choice;
	AirPlane plane;
	while (1) {
		system("cls");
		cout << "Please type 1 for FIRST CLASS" << endl;
		cout << "Please type 2 for ECONOMY CLASS" << endl;
		cout << "Please type 3 to exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice) {
			case 1:
				plane.assignFirstClassSeat();
				break;
			case 2:
				plane.assignEconomyClassSeat();
				break;
			case 3:
				exit(0);
				break;
			default:
				cout << "Wrong choice entered, please enter a valid choice" << endl;
				Sleep(1000);
				break;
		}
	}
	return 0;
}
