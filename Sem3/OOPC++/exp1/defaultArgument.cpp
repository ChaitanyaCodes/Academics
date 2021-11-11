#include <iostream>
using namespace std;

int Add(int x, int y, int z);

int main()
{
	int a;

	a = Add(5);
	cout << "\n\tThe sum is : " << a;

	a = Add(5, 10);
	cout << "\n\tThe sum is : " << a;

	a = Add(7, 3, 4);
	cout << "\n\tThe sum is : " << a;


	return 0;
}

int Add(int x = 10, int y = 20, int z = 30)
{
	return x + y + z;
}