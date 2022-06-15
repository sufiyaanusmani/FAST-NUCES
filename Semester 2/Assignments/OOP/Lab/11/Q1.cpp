#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <iomanip>
using namespace std;

class Inventory{
    private:
        int itemCode;
        char description[30];
        float rate;
        int totalUnits;
    public:
        Inventory(){

        }
        Inventory(int itemCode, char des[30], float rate, int totalUnits){
            this->itemCode = itemCode;
            strcpy(description, des);
            this->rate = rate;
            this->totalUnits = totalUnits;
        }
        void storeData(){
            system("cls");
            ofstream fout;
            fout.open("inventory.dat", ios::app|ios::binary);
            fout.write((char*)this, sizeof(*this));
            fout.close();
        }
        void editStock(){
            system("cls");
            fstream file;
            Inventory temp;
            bool found = false;
            int code, newValue;
            cout << "Enter code: ";
            fflush(stdin);
            cin >> code;
            file.open("inventory.dat", ios::in | ios::out | ios::ate | ios::binary);
            file.seekg(0);
            if(!file){
                cout << "Error" << endl;
            }else{
                file.read((char*)&temp, sizeof(temp));
                while(file.eof() == 0){
                    if(code == temp.itemCode){
                        cout << "Enter new value of stock: ";
                        fflush(stdin);
                        cin >> newValue;
                        temp.totalUnits = newValue;
                        file.seekp(file.tellp() - sizeof(temp));
                        file.write((char*)&temp, sizeof(temp));
                        found = true;
                        break;
                    }
                        file.read((char*)&temp, sizeof(temp));
                }
            }
            file.close();
            if(found == true){
                cout << "Data updated successfully" << endl;
                Sleep(1000);
            }else{
                cout << "This item does not exists" << endl;
                Sleep(1000);
            }
        }
        void display(int code){
            system("cls");
            ifstream fin;
            fin.open("inventory.dat", ios::in|ios::binary);
            bool found = false;
            if(!fin){
                cout << "Error";
            }else{
                fin.read((char*)this, sizeof(*this));
                while(fin.eof() == 0){
                    if(itemCode == code){
                        cout << "Item Code: " << itemCode << endl;
                        cout << "Description: " << description << endl;
                        cout << "Rate: " << rate << endl;
                        cout << "Total units in stocks: " << totalUnits << endl;
                        found = true;
                        break;
                    }
                    fin.read((char*)this, sizeof(*this));
                }
            }
            fin.close();
            if(found == false){
                cout << "This item does not exists" << endl;
                Sleep(1000);
            }else{
                cout << "Press any key to continue...";
                getch();
            }
        }
        void display(){
            system("cls");
            ifstream fin;
            fin.open("inventory.dat", ios::in|ios::binary);
            if(!fin){
                cout << "Error";
            }else{
                fin.read((char*)this, sizeof(*this));
                cout << setw(8) << "Item Code" << " " << setw(30) << "Description" << " " << setw(5) << "Rate" << " " << setw(11) << "Total Units" << endl;
                while(fin.eof() == 0){
                    cout << setw(8) << itemCode << " " << setw(30) << description << " " << setw(5) << rate << " " << setw(11) << totalUnits << endl;
                    fin.read((char*)this, sizeof(*this));
                }
            }
            fin.close();
            cout << "Press any key to continue...";
            getch();
        }
};

int main(){
    int choice, i, code;
    Inventory inventory;
    Inventory items[5] = {
                            {123, "Lays", 20.0, 100},
                            {456, "Kit Kat", 100.0, 60},
                            {789, "Doritos", 50.5, 23},
                            {627, "Pringles", 80, 40},
                            {924, "Magnum", 200, 12}
    };
    while(1){
        system("cls");
        cout << "1. Store Data" << endl;    // file will be created when 1 is entered
        cout << "2. Edit stocks" << endl;
        cout << "3. Display specific item" << endl;
        cout << "4. Display all items" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                for(i=0;i<5;i++){   // this loop will store data of 5 objects into the file
                    items[i].storeData();
                }
                cout << "Data added successfully" << endl;
                Sleep(1000);
                break;
            case 2:
                inventory.editStock();
                break;
            case 3:
                system("cls");
                cout << "Enter item code: ";
                fflush(stdin);
                cin >> code;
                inventory.display(code);
                break;
            case 4:
                inventory.display();
                break;
            case 5:
                exit(0);
                break;
            default:
                cout << "Wrong choice entered, please enter a valid choice";
                Sleep(1000);
        }
    }
    return 0;
}