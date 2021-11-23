#include<iostream>
using namespace std;

int main() {
	int i, temp, largest = 0;
	int a[50];

	cout << "Enter the no. of elements of the array: ";
	cin >> i;
	for (int j = 0; j < i; j++) {
		cout << "Enter element: ";
		cin >> a[j];
		if (largest < a[j])
			largest = a[j];
	}
	cout << "\nLargest: " << largest << endl;
	
    return 0;
}