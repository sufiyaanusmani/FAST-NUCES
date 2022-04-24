#include<iostream>
using namespace std;
class foo
{
  private:
    int x;
    int y;
  public:
    foo& setx(int x_){   
		x = x_;
        return *this; 
	}
    foo& sety(int y_){   
		y = y_;
        return *this; 
	}
    foo& print(){
		cout << x << ' ' << y;
     	return *this;
	}
};
int main()
{
    foo bar;
    bar.setx(1).sety(2).setx(55).print();
    //*this is a pointer that always points to Current pointer of the class
}