#include <iostream>
#include <conio.h>
using namespace std;
class student
{
	int rollNo;

public:
	void getinfo()
	{
		cout << "Enter Roll no: ";
		cin >> rollNo;
		cout << endl;
	}
};

class test : public student
{
	int marks[5];

protected:
	double total;

public:
	void gett()
	{
		cout << "Enter marks for the following subjects out of 25:\n";
		for (int i = 0; i <= 4; i++)
		{
			cout << "CE" << i << " = ";
			cin >> marks[i];
		}
	}
	void showt()
	{
		for (int i = 0; i <= 4; i++)
			total += marks[i];
	}
	void displayt()
	{
		cout << "Entered marks are: \n";
		for (int i = 0; i <= 4; i++)
			cout << marks[i] << " ";
	}
};

class sports
{
protected:
	int sMarks;

public:
	void gets()
	{
		cout << "Enter sports marks: ";
		cin >> sMarks;
	}
	void displays()
	{
		cout << "\nSports marks are: " << sMarks << endl;
	}
};

class result : public sports, public test
{
	float res;

public:
	void totalr()
	{
		res = total + sMarks;
		res = (res/ 150) * 100;
	}
	void displayr()
	{
		cout << "\nResult : " << res << "%" << endl;
	}
};

int main()
{
	result r;
	r.getinfo();
	r.gett();
	r.gets();
	cout << endl;
	r.showt();
	r.displayt();
	r.displays();
	r.totalr();
	r.displayr();
	_getch();
	return 0;
}
