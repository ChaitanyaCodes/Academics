#include<iostream>
#include<conio.h>
using namespace std;

class temperatureLoc {
	int tempDegree;

public:

	//constructor 
	temperatureLoc() {
		cout << "Enter the temperature of the location which is positive: ";
		cin >> tempDegree;
	}

	//operator minus overloading
	void operator -() {
		tempDegree = -tempDegree;
	}

	void display() {
		cout << "The temperature of the location is " << tempDegree << " degree." << endl;
		return;
	}

};

int main() {
	temperatureLoc loc;
	cout << "Positive Temperature: " << endl;
	loc.display();
	-loc;
	cout << "Negative Temperature: " << endl;
	loc.display();
	_getch();
	return 0;
}