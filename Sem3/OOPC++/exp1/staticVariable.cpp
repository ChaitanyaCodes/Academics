#include <iostream>
using namespace std;

void count()
{
	static int c = 0;
	cout << c++;
}

int main()
{
	for (int i = 0; i<10; i++)
		count();
	return 0;
}