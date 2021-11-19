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
	
	box rect;
	box square(4, 4, 4);

	cout << "Reactangle: " << endl;
	rect.display();
	cout << "Square: " << endl;
	square.display();

	_getch();
	return 0;
}