#include<iostream>
#include<conio.h>
using namespace std;

class box {
	int l, b, h;

public:
	box(int argL = 3, int argB = 4, int argH = 6){
		l = argL;
		b = argB;
		h = argH;
	}

	void display() {
		cout << "l: " << l << " b: " << b << " h: " << h << endl;
	}
};

int main() {
	int side;
	cout << "Enter the length of the side of the square box: ";
	cin >> side;
	box rect;
	box square(side, side, side);

	cout << "Reactangle: " << endl;
	rect.display();
	cout << "Square: " << endl;
	square.display();

	_getch();
	return 0;
}