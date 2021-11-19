#include<iostream>

using namespace std;

class Book {
	int accNumber, year, cost;
	char bookName[50], publisherName[30], authorName[30];

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

	friend void max(Book, Book, Book);
};

void max(Book a, Book b, Book c) {
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

	Book book1, book2, book3;
	cout << "Enter Details for Book 1" << endl;
	book1.set();
	cout << "Enter Details for Book 2" << endl;
	book2.set();
	cout << "Enter Details for Book 3" << endl;
	book3.set();

	book1.get();
	book2.get();
	book3.get();

	max(book1, book2, book3);

	return 0;
}