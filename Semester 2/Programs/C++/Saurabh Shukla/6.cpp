#include <iostream>
using namespace std;

class Time{
	private:
		int hour, min, sec;
	public:
		void setTime(int, int, int);
		void showTime();
		Time operator +(Time);
		void normalize();
};

int main(){
	Time t1, t2;
	t1.setTime(4, 35, 26);
	t2.setTime(3, 50, 45);
	Time t3 = t1 + t2;
	t3.showTime();
	return 0;
}

void Time::setTime(int hour, int min, int sec){
	this->hour = hour;
	this->min = min;
	this->sec = sec;
}

void Time::showTime(){
	cout << hour << ":" << min << ":" << sec << endl;
}

Time Time::operator +(Time t){
	Time temp;
	temp.hour = hour + t.hour;
	temp.min = min + t.min;
	temp.sec = sec + t.sec;
	temp.normalize();
	return temp;
}

void Time::normalize(){
	min = min + (sec / 60);
	sec = sec % 60;
	hour = hour + (min / 60);
	min = min % 60;
}
