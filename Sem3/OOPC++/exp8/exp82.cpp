#include <iostream>
using namespace std;
 
template <typename T>
void print(T num1){
	cout << "Number : " << num1 << endl;
}

template <typename T>
void print(T num1, int inNum){
	cout << "Number 1: " << num1 << endl;
	cout << "Number 2: " << inNum << endl;
}
 
int main() {
	int inNum;
	float flNum;
	cout << "Enter a number of interger type : ";
	cin >> inNum;
	print(inNum);
	cout << "Enter a number of float type : ";
	cin >> flNum;
	print(flNum);
	cout << endl << "--- overloaded function ---" << endl;
	print(flNum, inNum);
    return 0;
}