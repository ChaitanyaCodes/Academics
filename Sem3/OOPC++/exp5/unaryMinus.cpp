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
		cout << "The temperature of the location is " << tempDegree << endl;
		return;
	}

};

//int main() {
///	temperatureLoc loc;
//	loc.display();
///	-loc;
///	loc.display();
//	_getch();
//	return 0;
//}