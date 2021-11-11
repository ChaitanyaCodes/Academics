#include<iostream>
using namespace std;

int main() {
	int i, temp, max = 0;
	int a[50];

	cout << "Enter the no. of elements of the array\n";
	cin >> i;
	for (int j = 0; j < i; j++) {
		cin >> a[j];
		if (max < a[j])
			max = a[j];
	}
	cout << "\nMax:" << max;
	
    return 0;
}