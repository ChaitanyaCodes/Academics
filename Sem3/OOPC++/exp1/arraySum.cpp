#include<iostream>
using namespace std;

int main() {
	int i, sum = 0;
	cout << "Enter the no. of elements of the array\n";
	cin >> i;
	int a[50];
	cout << "Enter the elements of the array\n";
	for (int j = 0; j < i; j++) {
		cin >> a[j];
		sum = sum + a[j];
	}
	cout << "\nSum:" << sum;
	
    return 0;
}