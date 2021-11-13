#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class BankAccount {
	string name;
	double balance;

public:
	//default constructor
	BankAccount() {
		cout << "Enter the name of the account holder: ";
		getline(cin,name);
		balance = 0;
	}

	//copy constructor
	BankAccount(BankAccount &obj) {
		balance = obj.balance;
		name = obj.name;
	}

	~BankAccount(){
		cout<< "destructor called";
	}

	void deposit(int amount) {
		balance += amount;
		cout<< "Deposited : " << amount << endl;
		cout << "Total Balance: " << balance << endl;
		return;
	}

	void withdraw(int amount) {
		balance -= amount;
		cout << "Withdrawn : " << amount << endl;
		cout << "Total Balance: " << balance << endl;
		return;
	}

	// calculate interest
	void calculate_interest(int interestRate, int years) {
		double interest = 0.0;
		interest = (balance * interestRate * years) / 100;
		cout << "Interest amount : "<< interest << endl;
		return; 
	}

	friend void display(BankAccount&);
};

void display(BankAccount& obj) {
	cout << "NAME : " << obj.name << endl;
	cout<< "TOTAL BALANCE : "<< obj.balance << endl;
}

int main() {
	BankAccount customer1;
	BankAccount customer2(customer1);

	customer1.deposit(1000);
	customer1.withdraw(500);
	customer1.calculate_interest(10,2);

	/*customer2.deposit(2000);
	customer2.withdraw(500);
	customer1.calculate_interest(10, 4); */

	display(customer1);
	display(customer2);

	_getch();
	return 0;
}