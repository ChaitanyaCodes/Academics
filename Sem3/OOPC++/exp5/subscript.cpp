#include<iostream>
#include<conio.h>
using namespace std;


class Subscript {
	int size = 5;
	int arr[5] = { 0 };
public:

	Subscript() {
		int i = 0;
		cout << "Enter the values: " << endl;
		while (i < size) {
			cin >> arr[i];
			i++;
		}
	}

	 int &operator [](int i) {
		 if (i > size) {
			 cout << "Index out of bound"<<endl;
			 return arr[0];
		 }
		 else {
			 return arr[i];
		 }
	}
};

int main() {
	Subscript obj;
	
	obj.arr[](6);

	_getch();
	return 0;
}