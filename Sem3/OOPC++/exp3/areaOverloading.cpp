#include <iostream>
using namespace std;

const double pi = 3.14;


int area(int side){
    int areaS = side * side;
    cout <<"The area of the Square is "<< side * side <<endl;
    return side*side;
}

double area(double radius){
    double areaC = pi*radius*radius;
    cout << "The area of the Circle is "<< areaC <<endl;
    return areaC;
}

int area(int length, int breadth){
    int areaR  = length * breadth; 
    cout <<"The area of the rectangle is "<< areaR <<endl;
    return areaR;
}

int main()
{
    int side, length, breadth;
    double radius;
    
    cout << "Enter the side of the Square: "; 
    cin >> side; 
    area(side);
    
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    area(length, breadth);
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area(radius);
    return 0;
}