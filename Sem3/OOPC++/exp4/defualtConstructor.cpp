#include<iostream>
#include<conio.h>
using namespace std;

class fraction {
	int num;
	int den;

public: 
	//default constructor
	fraction() {
		num = 0;
		den = 0;
	}

	//parametrised constructor with two arguments
	fraction(int n, int d) {
		num = n; 
		den = d;
	}

	//copy constructor
	fraction(fraction &obj) {
		num = obj.num;
		den = obj.den;
	}

	// evaluating rational numbers
	void eval_func() {
		double result;
		if (num == den) {
			result = 1;
		}
		else if (den == 0) {
			cout << "Invalid denominator"<< endl;
			result = num;
			return;
		}
		else {
			result = double(num / den);
		}
		cout << "The result of the evaluation is " << result << endl;
	}

	//friend function to display the
	friend void display(fraction &obj);
};

void display(fraction& obj){
	cout << obj.num << "/" << obj.den << endl;
}

int main() {
	int pause = 0;
	fraction obj;
	fraction obj2(20,10);
	fraction obj3(obj2);

	display(obj);
	display(obj2);
	obj2.eval_func();
	display(obj3);

	_getch();
	return 0;
}