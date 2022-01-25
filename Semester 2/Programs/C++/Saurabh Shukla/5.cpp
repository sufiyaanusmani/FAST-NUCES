#include <iostream>
using namespace std;

class Time{
	private:
		int hour, min, second;
	public:
		void setTime(int, int, int);
		void showTime();
		void normalize();
};

int main(){
	Time t;
	t.setTime(4, 100, 100);
	t.showTime();
	t.normalize();
	t.showTime();
	return 0;
}

void Time::setTime(int hour, int min, int second){
	this->hour = hour;
	this->min = min;
	this->second = second;
}

void Time::showTime(){
	cout << hour << ":" << min << ":" << second << endl;
}

void Time::normalize(){
	min = min + (second / 60);
	second = second % 60;
	hour = hour + (min / 60);
	min = min % 60;
}
