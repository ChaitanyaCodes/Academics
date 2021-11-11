#include<iostream>
using namespace std;

int main ()
{
	int a;
	int b;
	int sum;
	int average;

	cout << "please enter a\n";
	cin >> a;

	cout << "Please enter b\n";
	cin >> b;

	sum = a + b;
	cout << "The sum is:" << sum;


	average = sum / 2;
	cout << "The avg is :" << average;
	
    return 0;
}