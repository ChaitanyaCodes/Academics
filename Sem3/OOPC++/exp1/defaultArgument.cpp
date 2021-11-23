#include <iostream>
using namespace std;

int Add(int x = 10, int y = 20, int z = 30)
{
	return x + y + z;
}

int main(){
	int a;
	a = Add(5);
	cout << "The sum is : " << a << endl;
	a = Add(5, 10);
	cout << "The sum is : " << a << endl;
	a = Add(7, 3, 4);
	cout << "The sum is : " << a << endl;

	return 0;
}