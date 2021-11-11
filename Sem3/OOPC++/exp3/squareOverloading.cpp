#include <iostream>
using namespace std;


int square(int x){
    cout <<"Square of integer number is "<< x*x <<endl;
    return x*x;
}

double square(double x){
    cout <<"square of double number is "<< x*x <<endl;
    return x*x;
}

int main()
{
    int x; double y;
    
    cout << "Enter the Int Number: ";
    cin >> x;
    square(x);
    
    cout << "Enter the double Number: ";
    cin >> y;
    square(y);
    return 0;
}
