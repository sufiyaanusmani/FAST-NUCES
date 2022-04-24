#include "user.h"
#include <fstream>
#include <string.h>

class UserData : public QSharedData
{
public:

};

User::User() : data(new UserData)
{

}

User::User(const User &rhs)
    : data{rhs.data}
{

}

User &User::operator=(const User &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

User::~User()
{

}

void User::setData(int id, char n[20], int age){
    using namespace std;
    this->ID = id;
    strcpy(name, n);
    name[strlen(name)] = '\0';
    this->age = age;
    ofstream fout;
    fout.open("user.dat", ios::app|ios::binary);
    fout.write((char*)this, sizeof(*this));
    fout.close();
}
