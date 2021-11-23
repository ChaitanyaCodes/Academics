#include<iostream>
using namespace std;

int main ()
{
	int a, b, sum;
	float average;

	cout << "Enter A value: ";
	cin >> a;
	cout << "Enter B value: ";
	cin >> b;

	sum = a + b;
	cout << "The sum is:" << sum << endl;
	average = sum / 2;
	cout << "The avgerage is :" << average << endl;
    return 0;
}