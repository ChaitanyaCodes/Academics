#include <iostream>
using namespace std;

void printPat(int n)
{
	
	for (int i = n; i > 0; i--) {

		for (int j = 0; j < n-i; j++)
			cout << "  ";


		for (int j = 0; j < i; j++) {
			
			cout << i << " ";
		}
		cout << endl;
	}
}

int main()
{
	int n = 4;
	printPat(n);
	return 0;
}
