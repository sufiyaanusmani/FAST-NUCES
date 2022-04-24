#ifndef INFO_H
#define INFO_H
#include <fstream>

class User{
private:
    int ID;
    char name[20];
    int age;
public:
    void setData();
    void showData();
};

void User::setData(){
    ofstream fout;
    fout.open("user.dat", ios::app|ios::binary);
}

#endif // INFO_H
