#ifndef USER_H
#define USER_H

#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class UserData;

class User
{
public:
    User();
    User(const User &);
    User &operator=(const User &);
    ~User();
    void setData(int, char [], int);
    void showData();

private:
    QSharedDataPointer<UserData> data;
    int ID;
    char name[20];
    int age;
};

#endif // USER_H
