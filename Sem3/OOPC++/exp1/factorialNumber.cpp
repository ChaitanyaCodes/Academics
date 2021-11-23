#include<iostream>
using namespace std;

void factorial(int i)
{
	int fact = 1;
	for (int j = 1; j <= i; j++)
		fact = fact*j;
	cout << "Factorial: " << fact << endl;
}
int main() {
	int num;
	cout << "Enter the number: ";
	cin >> num;
	factorial(num);
    return 0;
}