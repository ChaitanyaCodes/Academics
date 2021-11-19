#include<iostream>
using namespace std;
class box {

public:
    float l, b, h, v;

    void get() {
        cout << "Enter the length breadth and height of the box\n=>";
        cin >> l >> b >> h;
    }

    void set() {
        cout << "Length=" << l<< endl;
        cout << "Breadth=" << b << endl;
        cout << "Height=" << h << endl;
    }

    void calvol() {
        v = l*b*h;
        cout << "Volume=" << v<<endl;
    }
};

void main() {
    box ob1,ob2;
    ob1.get();
    ob1.calvol();
    ob1.set();
    cout << "\n";
    ob2.get();
    ob2.calvol();
    ob2.set();
}