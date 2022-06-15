#include <iostream>
#include <string>
#define SIZE 5
using namespace std;

struct Player{
    string playerName;
    int homeRuns;
    int numberOfHits;
};

void search(Player [], string);

int main(){
    Player list[SIZE] = {
        {"Sufiyaan", 200, 14},
        {"Ahsan", 180, 10},
        {"Qasim", 177, 11},
        {"Shahmir", 170, 13},
        {"Huzaifa", 175, 12}
    };

    string name;
    cout << "Enter name of player to search: ";
    cin >> name;

    search(list, name);
    return 0;
}

void search(Player list[SIZE], string name){
    int i;
    bool playerFound = false;
    for(i=0;i<SIZE;i++){
        if(list[i].playerName == name){
            playerFound = true;
            cout << "Player Name: " << list[i].playerName << endl;
            cout << "Home Runs: " << list[i].homeRuns << endl;
            cout << "Number of hits: " << list[i].numberOfHits << endl;
            break;
        }
    }
    if(playerFound == false){
        cout << "This player does not exists" << endl;
    }
}