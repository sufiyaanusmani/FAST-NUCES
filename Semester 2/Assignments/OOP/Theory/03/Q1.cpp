// Sufiyaan Usmani (21K-3195)
// Qasim Hasan (21K-3210)
// Section: BCS-2J

#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
using namespace std;

int main()
{
    fstream fin, fout;

    // input file will be created when program runs
    fout.open("input.txt", ios::out);
    fout << "Hello this t3xt is 4 the 6060 1st try 25 31"; // enter sample text here
    fout.close();

    char encrypted, ch;
    int num = 0;
    bool digitExists = false;
    fin.open("input.txt", ios::in);
    if (!fin)   // this will give error if input.txt doesn't opens properly
    {
        cout << "Error" << endl;
    }
    else
    {
        fout.open("output.txt", ios::out);
        while(fin.eof() == 0){  // loop will run until end of file is reached
            ch = fin.get();     // reading character by character from file
            if(ch >= '0' && ch <= '9'){         // checks if character is a number
                num = (num * 10) + (ch - '0');
                digitExists = true;
            }else{
                if(num >= 1 && num <= 26 && digitExists == true){   // checks if number is between 1-26
                    encrypted = num + 64;
                    fout.put(encrypted);    // storing encrypted character to output.txt
                }else if((num < 1 || num > 26) && digitExists == true){
                    fout.put('Z');      // storing encrypted character to output.txt
                }
                num = 0;
                digitExists = false;
            }
        }
    }
    fin.close();
    fout.close();
    cout << "Data encrypted successfully..." << endl;
    return 0;
}