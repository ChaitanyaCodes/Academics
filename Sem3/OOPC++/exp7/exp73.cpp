#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	const int s = 100;
	char str[s];
	cout << "Enter sentence:" << endl;
	cin.read(str, 20);
	cout << "The string read was:" << endl;
	cout.write(str,cin.gcount());
	cout << "\nThe string had " << cin.gcount() << " characters";
	_getch();
	return 0;
}