#include <iostream>
using namespace std;

void swap(int a, int b){
    int temp;
    temp = a; 
    a = b;
    b = temp;
    cout << "The value of int 'a' is " << a << " and the value of int 'b' is " << b <<endl;
    return;
}

void swap(float a, float b){
    float temp;
    temp = a; 
    a = b;
    b = temp;
    cout << "The value of float 'c' is " << a << " and the value of float 'd' is " << b <<endl;
    return; 
}

void swap(char a, char b){
    char temp;
    temp = a; 
    a = b;
    b = temp;
    cout << "The value of char 'e' is " << a << " and the value of char 'f' is " << b <<endl;
    return; 
}

int main()
{
    int a, b;
    float c, d;
    char e, f;
    
    cout << "Enter the int value of a : "; 
    cin >> a; 
    cout << "Enter the int value of b: "; 
    cin >> b;
    swap(a,b);
    
    cout << "Enter the float value of a: ";
    cin >> c;
    cout << "Enter the float value of b: ";
    cin >> d;
    swap(c, d);
    
    
    cout << "Enter the char value of e: ";
    cin >> e;
    cout << "Enter the char value of f: ";
    cin >> f;
    swap(e, f);
    
    return 0;
}