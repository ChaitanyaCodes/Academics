#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float root1, root2, x, y, z, a, b, c;

	cout << "Enter the values of a , b , c\n";
	cin >> a >> b >> c;

	x = -b;
	y = sqrt((b*b) - (4 * a * c));
	z = 2 * a;

	root1 = (x + y) / z;
	root2 = (x - y) / z;

	cout << "root 1 : " << root1 << endl;
	cout << "root 2 : " << root2 << endl;

	return 0;
}