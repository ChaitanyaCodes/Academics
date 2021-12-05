#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>

using namespace std;
class BasicInfo
{
	string name, gender;
	int empID;
public:
	void getb()
	{
		cout << "Enter employee name: ";
		cin >> name;
		cout << "Enter employee ID: ";
		cin >> empID;
		cout << "Enter employee gender: ";
		cin >> gender;
	}
	void displayb()
	{
		cout << "Employee name: " << name << endl;
		cout << "Employee ID: " << empID << endl;
		cout << "Employee gender: " << gender << endl;
	}
};
class DeptInfo:public BasicInfo
{
	string deptName, designation;
	int salary;
public:
	void getd()
	{
		BasicInfo::getb();
		cout << "Enter department name: ";
		cin >> deptName;
		cout << "Enter designation: ";
		cin >> designation;
		cout << "Enter salary: ";
		cin >> salary;
	}
	void displayd()
	{
		BasicInfo::displayb();
		cout << "Employee department name: " << deptName << endl;
		cout << "Employee designation: " << designation << endl;
		cout << "Employee salary: " << salary << endl;
	}
};
class LoanInfo:public BasicInfo
{
	string LoanType, Amount;
public:
	void getl()
	{
		BasicInfo::getb();
		cout << "Enter loan type: ";
		cin >> LoanType;
		cout << "Enter loan amount: ";
		cin >> Amount;
	}
	void displayl()
	{
		BasicInfo::displayb();
		cout << "Loan type: " << LoanType << endl;
		cout << "Loan Amount: " << Amount << endl;
	}
};
int main()
{
	DeptInfo d;
	LoanInfo l;
	
	cout << "----- Employee & Department Information -----" << endl;
	d.getd();
	cout << "\n----- Details -----" << endl;
	d.displayd();
	
	cout << endl;
	
	cout << "----- Employee & Loan Information -----" << endl;
	l.getl();
	cout << "\n ----- Details -----" << endl;
	l.displayl();

	_getch();
	return 0;
}
