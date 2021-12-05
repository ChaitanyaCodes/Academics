#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class StringCom {
	string str;
public:

	//constructor 
	StringCom() {
		cout << "Enter the string: ";
		cin >> str;
	}

	//operator equal check overloading
	int operator ==(StringCom& obj) {
		if (str == obj.str) {
			return 1;
		}
		else {
			return 0;
		}
	}

};

int main() {
	StringCom str1, str2;

	if (str1 == str2) {
		cout << "The strings are equal" << endl;
	}
	else {
		cout << "The strings are not equal" << endl;
	}

	_getch();
	return 0;
}