#include<iostream>
#include<conio.h>
using namespace std;

const int SIZE = 5; 

class Subscript {
	int arr[SIZE];
public:

	Subscript() {
		int i = 0;
		cout << "Enter the values: " << endl;
		while (i < SIZE) {
			cout << "arr[" << i << "] = ";
			cin >> arr[i];
			i++;
		}
	}

	int &operator [](int i) {
		if (i > SIZE) {
			cout << "Index out of bound" << endl;
			return arr[0];
		}
		else {
			return arr[i];
		}
	}
};

int main() {
	Subscript obj;
	cout << "--- DISPLAY ---" << endl;
	cout << "arr[ 3 ] = ";
	cout<<obj[3]<<endl;
	cout << "arr[ 4 ] = ";
	cout << obj[4] << endl;
	cout << "arr[ 7 ] = ";
	obj[7];
	_getch();
	return 0;
}