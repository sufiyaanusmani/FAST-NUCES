#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream fout;
    fout.open("test.txt");
    fout << "Sufiyaan" << " " << "Usmani" << endl;
    fout << "Ahsan Ashraf" << endl;
    fout << "Qasim Hasan" << endl;
    fout.close();
    ifstream fin;
    fin.open("test.txt");
    string first, last, line;
    while(fin){
       getline(fin, line);
       cout << line << endl; 
    }
    fin.close();
    return 0;
}