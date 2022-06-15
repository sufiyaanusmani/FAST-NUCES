#include <iostream>
using namespace std;

class Time{
	private:
		int hr;
		int min;
		int sec;
	public:
		Time(){
			
		}
		Time(int hr, int min, int sec){
			this->hr = hr;
			this->min = min;
			this->sec = sec;
		}
		void printTime(){
			cout << hr << ":" << min << ":" << sec << endl;
		}
		Time operator+(Time &t){
			Time temp;
			temp.hr = hr + t.hr;
			temp.min = min + t.min;
			temp.sec = sec + t.sec;
			return temp;
		}
		bool operator<(const Time &t){
			if(hr < t.hr){
				return true;
			}else{
				return false;
			}
		}
};

int main(){
	Time T1(2, 3, 10);
	Time T2(12, 43, 54);
	Time T3;
	T3 = T1 + T2;
	T3.printTime();
	return 0;
}
