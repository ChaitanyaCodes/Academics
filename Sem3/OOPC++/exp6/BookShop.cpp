#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class media
{
protected:
	char title[50];
	char publication[50];
public:
	media(char*titleN, char*publicationN)
	{
		strcpy(title, titleN);
		strcpy(publication, publicationN);
	}
	virtual void display()
	{}
};

class book :public media
{
	int pages;
public:
	book(char*titleN, char*publicationN, int noOfPages):media(titleN, publicationN)
	{
		pages = noOfPages;
	}
	void display()
	{
		cout << "Tiltle: " << title << endl;
		cout << "Publication: " << publication << endl;
		cout << "Number of pages: " << pages << endl;
	}
};

class video_tape :public media
{
	int time;
public:
	video_tape(char*titleN, char*publicationN, int timeOftape) :media(titleN, publicationN)
	{
		time = timeOftape;
	}
	void display()
	{
		cout << "Tiltle: " << title << endl;
		cout << "Publication: " << publication << endl;
		cout << "Playing time of tape: " << time << " Minutes." << endl;
	}
};

int main()
{
	char*title = new char[30];
	char*publication = new char[30];
	int noOfPages, timeOftape;
	cout << "----- Book Details -----" << endl;
	cout << "Enter book title: ";
	cin >> title;
	cout << "Enter book publication: ";
	cin >> publication;
	cout << "Enter number of pages: ";
	cin >> noOfPages;
	cout << endl;
	book b(title, publication, noOfPages);

	cout << "----- Video Tape Details -----" << endl;
	cout << "Enter video tape title: ";
	cin >> title;
	cout << "Enter book publication: ";
	cin >> publication;
	cout << "Enter playing time of tape: ";
	cin >> timeOftape;
	cout << endl;
	video_tape v(title, publication,timeOftape);

	media *list[2];
	list[0] = &b;
	list[1] = &v;
	cout << "----- Book Details -----" << endl;
	list[0]->display();
	cout << "\n\n----- Video Tape Details -----" << endl;
	list[1]->display();

	_getch();
	return 0;
	
}
