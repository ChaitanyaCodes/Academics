#include<iostream>
#include<conio.h>
#include<string.h>
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
		cout << "Player name: " << name << endl;
		cout << "Player age: " << age << endl;
		cout << "Player team: " << team << endl;
		cout << "Number of goals: " << numberOfGoals << endl;
	}
};
int main()
{
	char name[30], teamName[30];
	int age, goals;
	cout << "Enter player's name: ";
	cin >> name;
	cout << "Enter player's age: ";
	cin >> age;
	cout << "Enter player's team name: ";
	cin >> teamName;
	cout << "Enter the no of goals scored by the player: ";
	cin >> goals;
	FootballPlayer player1(name,age,teamName,goals);
	
	cout << "----- Details -----" << endl;
	player1.show();
	_getch();
	return 0;
}
