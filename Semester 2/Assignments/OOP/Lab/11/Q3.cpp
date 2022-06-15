#include <iostream>
#include <string.h>
using namespace std;

template <class T1, class T2>
class MyClass{
    private:
        T1 x;
        T2 y;
    public:
        MyClass(T1 x, T2 y){
            this->x = x;
            this->y = y;
        }
        void add(){
            cout << x + y << endl;
        }
};

// using specialized templates for char*
template <>
class MyClass<char *, char *>{
    private:
        char *x;
        char *y;
    public:
        MyClass(char *a, char *b){      // as class contains pointers as members, deep copy constructor is used
            x = new char;
            y = new char;
            strcpy(x, a);
            strcpy(y, b);
        }
        void add(){
            char *str = new char;
            strcpy(str, x);
            strcat(str, y);
            puts(str);
        }
};



int main(){
    MyClass<int, double> n1(10, 0.23);
    n1.add();

    char str1[] = "Now";
    char str2[] = "Then";
    MyClass<char *, char *> n2(str1, str2);
    n2.add();

    return 0;
}