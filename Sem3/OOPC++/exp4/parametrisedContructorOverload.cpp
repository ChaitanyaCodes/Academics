#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class vehicle {
	string name;
	int no_of_wheels;
	double cost;

public:
	//Passing only two arguments to the constructor
	vehicle(string nameV, int wheels) {
		name = nameV;
		no_of_wheels = wheels;
		cout << "Enter the cost of the vehicle : ";
		cin >> cost;
	}

	//Passing three argument to the constructor
	vehicle(string nameV, int wheels, int costI) {
		name = nameV;
		no_of_wheels = wheels;
		cost = costI;
	}

	void display() {
		cout << "The "<< name << " has " << no_of_wheels << " wheels." << "The cost of the vehicle is Rs." << cost << endl;
	}
};

int main() {
	int wheels, costI;
	double costD;
	string name; 

	cout << "Enter the model name of the vehicle : ";
	cin >> name;
	cout << "Enter the number of wheels the vehicle has : ";
	cin >> wheels;
	cout << "Enter the cost of the vehicle : ";
	cin >> costI; 
	vehicle obj1(name, wheels, costI);

	cout << "Enter the model name of the vehicle : ";
	cin >> name;
	cout << "Enter the number of wheels the vehicle has : ";
	cin >> wheels;
	vehicle obj2(name, wheels);
	
	obj1.display();
	obj2.display();

	_getch();
	return 0;
}