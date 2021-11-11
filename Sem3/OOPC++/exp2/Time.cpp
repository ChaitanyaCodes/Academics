#include<iostream>
using namespace std;

class Time{
public:
	int min, hr;
	void set() {
		cout << "Enter the Hours and minutes : ";
		cin >> hr >> min;
	}
    
	void display() {
		cout << "Time is " << hr << ":" << min;
	}
	void addTime(Time t1, Time t2 ) {
		min = t1.min + t2.min;
		hr = min / 60;
		min = min % 60;
		hr += t1.hr + t2.hr;
		display();
	}
};

int main() {

	Time t1, t2, t3;
	t1.set();
	t2.set();
	t3.addTime(t1, t2);

	return 0;
}