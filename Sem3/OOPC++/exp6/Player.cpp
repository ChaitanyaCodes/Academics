#include<iostream>
#include<conio.h>
#include<string.h>
#include<cstring>
using namespace std;
class person
{
protected :
	string name;
	int age;
public: 
	person(string s ,int a)
	{
		name = s;
		age = a;
	}
};
class FootballPlayer:public person
{
	string team;
	int numberOfGoals;
public:
	FootballPlayer(string s,int a,string t, int n) :person(s,a)
	{
		team = t;
		numberOfGoals = n;
	}
	void show()
	{
		cout << "Player name: ";
		puts(name);
		cout << "Player age: " << age;
		cout << "Player team: " << team;
		cout << "Number of goals: " << numberOfGoals;
	}
};
int main()
{
	char s[30], t[30];
	int a, n;
	cout << "Enter person's name, age, team and number of goals\n";
	cin >> s>> a>> t >> n;
	FootballPlayer p(s,a,t,n);

	p.show();
	_getch();
	return 0;
}
