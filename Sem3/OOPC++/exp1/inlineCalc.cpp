#include<iostream>
using namespace std;

inline int add(int a, int b) {
	return a + b;
}
inline int sub(int a, int b) {
	return a - b;
}
inline int division(int a, int b) {
	return a / b;
}
inline int multi(int a, int b) {
	return a * b;
}

int main() {
	int a, b;
	float ans;
	while (1) {
		cout << "1.Addition\n2.Subtraction\n3.Division\n4.Multipication\n5.Exit\n\n=>";
		cin >> a;
		switch (a) {
		case 1: cout << "Enter the numbers to find the sum\n=>"; cin >> a >> b; ans = add(a, b); break;
		case 2: cout << "Enter the numbers to find the difference\n=>"; cin >> a >> b; ans = sub(a, b); break;
		case 3: cout << "Enter the numbers to evaluate the division\n=>"; cin >> a >> b; ans = division(a, b); break;
		case 4: cout << "Enter the numbers to multiply\n=>"; cin >> a >> b; ans = multi(a, b); break;
		case 5: exit(0);
		}
		cout << "Ans=" << ans << endl << endl;
	} 
    return 0;
}