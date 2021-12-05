#include<iostream>
#include<conio.h>
using namespace std;

class Time {
	int hours;
	int minutes;

public:

	//constructor 
	Time() {
		cout << "Enter the intial value of the hours: ";
		cin >> hours;
		cout << "Enter the intial value of the minutes: ";
		cin >> minutes;
	}

	//operator minus overloading
	void operator ++() {
		minutes = minutes + 1;
		if (minutes >= 60) {
			hours += 1;
			minutes = 0;
		}
	}

	//diplay current value of the members.
	void display() {
		cout <<"The time is " << hours<< ":"<< minutes<< endl;
		return;
	}

};

int main() {
	Time obj;
	for(int i = 0; i < 10; i++) {
		++obj;
		obj.display();
	}
	_getch();
	return 0;
}