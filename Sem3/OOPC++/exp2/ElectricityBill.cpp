#include<iostream>
using namespace std;

class Bill {
public:
	float customerNo, units, totalBill;
	char customerName[20];

	void set() {
		cout << "Enter the Customer No. : ";
		cin >> customerNo;
		cout << "Enter the Customer Name : ";
		cin >> customerName;
		cout << "Enter the Units : ";
		cin >> units;
	}

	void calcBill() {
		if (units <= 100)
			totalBill = units * 1.20;
		else if (units <= 200)
			totalBill = 100 * 1.20 + (units - 100) * 2;
		else 
			totalBill = 100 * 1.20 + 100 * 2 + (units - 200) * 3;

		cout << "Total Bill : " << totalBill << endl;
	}
};

int main() {

	Bill b1, b2, b3;
	cout << "--- Customer 1 ---" << endl;
	b1.set();
	b1.calcBill();
	cout << endl;

	cout << "--- Customer 2 ---" << endl;
	b2.set();
	b2.calcBill();
	cout << endl;
	
	cout << "--- Customer 3 ---" << endl;
	b3.set();
	b3.calcBill();
	cout << endl;
	return 0;
}