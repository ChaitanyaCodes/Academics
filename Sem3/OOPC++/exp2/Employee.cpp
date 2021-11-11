#include<iostream>

using namespace std;

class employee {
public:
	char firstName[20], lastName[20];
	float monthlySalary, yearlySalary;

	void set() {
		cout << "Enter First Name : ";
		cin >> firstName;
		cout << "Enter Last Name : ";
		cin >> lastName;
		cout << "Enter Monthly Salary : ";
		cin >> monthlySalary;
	}

	void calcYearlySalary() {
		yearlySalary = monthlySalary * 12;
		cout << "Yearly Salary Calculated" << endl;
	}

	void display() {
		cout << "First Name : " << firstName << endl;
		cout << "Last Name : " << lastName << endl;
		cout << "Monthly Salary : " << monthlySalary << endl;
		cout << "Yearly Salary : " << yearlySalary << endl;
	}
};

int main() {
	employee e1, e2;
	e1.set();
	e1.calcYearlySalary();
	e1.display();
	cout << endl;
	e2.set();
	e2.calcYearlySalary();
	e2.display();
	return 0;
}