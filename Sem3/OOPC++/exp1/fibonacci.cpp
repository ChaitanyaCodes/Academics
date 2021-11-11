#include<iostream>
using namespace std;

int main() {

	int i1 = 0, i2 = 1, t, a;
	cout << "Enter the fibonacci number of values to display:";
	cin >> a;
	if (a == 1)
		cout << i1;
	else if (a == 2)
		cout << i1 << "\t" << i2;
	else if (a>2) {
		cout << i1 << "\t" << i2 << "\t";
		for (int i = 1; i <= a - 2; i++) {
			t = i1 + i2;
			cout << t << "\t";
			i1 = i2;
			i2 = t;
		}
	}
    
    return 0;
}