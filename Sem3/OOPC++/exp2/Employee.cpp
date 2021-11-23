#include<iostream>
using namespace std;

class employee {
public:
	char firstName[20], lastName[20];
	float monthlySalary, yearlySalary;

	void setFName() {
		cout << "Enter First Name : ";
		cin >> firstName;
	}
	
	void setLName(){
		cout << "Enter Last Name : ";
		cin >> lastName;
	}
	
	void setMSalary(){
		cout << "Enter Monthly Salary : ";
		cin >> monthlySalary;
	}
	
	void set(){
		setFName();
		setLName();
		setMSalary();
	}

	void calcYearlySalary() {
		yearlySalary = monthlySalary * 12;
		cout << "Calculated yearly salary." << endl;
	}

	void display() {
		cout << "----- Details -----" << endl;
		cout << "First Name : " << firstName << endl;
		cout << "Last Name : " << lastName << endl;
		cout << "Monthly Salary : " << monthlySalary << endl;
		cout << "Yearly Salary : " << yearlySalary << endl;
	}
};

int main() {
	employee emp1, emp2;
	emp1.set();
	emp1.calcYearlySalary();
	emp1.display();
	cout << endl;
	emp2.set();
	emp2.calcYearlySalary();
	emp2.display();
	return 0;
}