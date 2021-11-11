#include<iostream>
using namespace std;

void factorial(int i)
{
	int temp = 1;
	for (int j = 1; j <= i; j++)
		temp = temp*j;
	cout << "Factorial:" << temp;
}
int main() {
	int num;
	cout << "Enter the number:";
	cin >> num;
	factorial(num);
    return 0;
}