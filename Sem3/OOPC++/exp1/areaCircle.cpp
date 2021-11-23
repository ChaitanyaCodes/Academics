#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float pi = 3.14, area, radius;

	cout << "please enter the radius of the circle: ";
	cin >> radius;

	area = pi*radius*radius;

	cout << "The area of the circle is :" << area << endl;
    return 0;
}