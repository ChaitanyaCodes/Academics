#include<iostream>
#include<string.h>
using namespace std;

class Book {
	int accNumber, year, cost;
	string bookName, publisherName, authorName;

public:
	void set() {
		
		cout << "Enter name of the book: ";
		getline(cin, bookName);
		cout << "Enter name of the author:";
		getline(cin,authorName);
		cout << "Enter publishers name:";
		getline(cin, publisherName);
		cout << "Enter the year of publication:";
		cin >> year;
		cout << "Enter accession number:";
		cin >> accNumber;
		cout << "Enter the cost:";
		cin >> cost;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	void get()
	{
		cout << "\nName of the author : " << authorName << endl;
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
			cout << a.bookName << " is the most expensive book." << endl;
		else	
			cout << c.bookName << " is the most expensive book." << endl;
	else
		if (b.cost > c.cost)
			cout << b.bookName << " is the most expensive book." << endl;
		else
			cout << c.bookName << " is the most expensive book." << endl;	
}

int main() {

	Book book1, book2, book3;
	cout << "\nEnter Details for Book 1" << endl;
	book1.set();
	cout << "\nEnter Details for Book 2" << endl;
	book2.set();
	cout << "\nEnter Details for Book 3" << endl;
	book3.set();

	book1.get();
	book2.get();
	book3.get();
	max(book1, book2, book3);

	return 0;
}