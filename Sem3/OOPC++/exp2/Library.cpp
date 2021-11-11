#include<iostream>

using namespace std;

class book {
	int accNumber, year, cost;
	char publisherName[70], authorName[70], bookName[70];

public:
	void set() {
		cout << "Enter name of the author:";
		cin >> authorName;
		cout << "Enter the year of publication:";
		cin >> year;
		cout << "Enter name of the book:";
		cin >> bookName;
		cout << "Enter publishers name:";
		cin >> publisherName;
		cout << "Enter accession number:";
		cin >> accNumber;
		cout << "Enter the cost:";
		cin >> cost;
	}
	void get()
	{
		cout << "Name of the author : " << authorName << endl;
		cout << "Year of publication  : " << year << endl;
		cout << "Name of book : " << bookName << endl;
		cout << "Publishers name : " << publisherName << endl;
		cout << "Name of accession number : " << accNumber << endl;
		cout << "Cost of book : " << cost << endl;
	}

	friend void max(book, book, book);
};

void max(book a, book b, book c) {
	if (a.cost > b.cost)
		if (a.cost > c.cost)
			cout << a.bookName << " is the most expensive" << endl;
		else	
			cout << c.bookName << " is the most expensive" << endl;
	else
		if (b.cost > c.cost)
			cout << b.bookName << " is the most expensive" << endl;
		else
			cout << c.bookName << " is the most expensive" << endl;
			
}

int main() {

	book b1, b2, b3;
	cout << "Enter Details for Book 1" << endl;
	b1.set();
	cout << "Enter Details for Book 2" << endl;
	b2.set();
	cout << "Enter Details for Book 3" << endl;
	b3.set();

	b1.get();
	b2.get();
	b3.get();

	max(b1, b2, b3);

	return 0;
}