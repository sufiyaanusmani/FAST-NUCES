#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <conio.h>
#define SIZE 7
using namespace std;

struct Pet{
    string petName;
    string petType;
    bool adopt;
};

void displayPets(Pet []);
void showAdoptedPets(Pet []);
void selectPets(Pet []);

int main(){
    Pet pets[SIZE] = {
        {"Kitty", "Cat", true},
        {"Krypto", "Dog", true},
        {"Koku", "Bird", false},
        {"Blu", "Fish", true},
        {"Felly", "Cat", false},
        {"Cane", "Dog", false},
        {"Fluffy", "Hamster", true}
    };
    displayPets(pets);
    selectPets(pets);
    
    return 0;
}

void displayPets(Pet p[SIZE]){
    int i;
    string adopt;
    cout << "Pet Name     Pet Type" << endl;
    for(i=0;i<SIZE;i++){
        adopt = p[i].adopt==true?"Adoptable":"Not Adoptable";
        cout << setw(10) << p[i].petName << "  " << setw(8) << p[i].petType << setw(18) << adopt << endl;
    }
}

void showAdoptedPets(Pet petCot[3]){
    int i;
    cout << "Pet Name     Pet Type" << endl;
    for(i=0;i<3;i++){
            cout << setw(10) << petCot[i].petName << "  " << setw(8) << petCot[i].petType << endl;
    }
}

void selectPets(Pet pets[SIZE]){
    int i, j, index;
    string petName;
    bool petFound = false;
    Pet petCot[3];
    for(i=0;i<3;i++){
        system("cls");
        displayPets(pets);
        getch();
        while(1){
            cout << i+1 << ". Enter pet name to select: ";
            fflush(stdin);
            cin >> petName;
            petFound = false;
            for(j=0;j<SIZE;j++){
                if(petName == pets[j].petName){
                    if(pets[j].adopt == true){
                        petCot[i] = pets[j];
                        petFound = true;
                        pets[j].adopt = false;
                        index = j;
                        break;
                    }else{
                        cout << "This pet can not be adopted, select another pet" << endl;
                        getch();
                    }
                }
            }
            if(petFound == false){
                cout << "This pet does not exists" << endl;
                getch();
            }else{
                break;
            }
        }
    }
    showAdoptedPets(petCot);
}