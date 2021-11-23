#include<iostream>
using namespace std;
class box {

public:
    float l, b, h, v;

    void set() {
        cout << "Enter the length breadth and height of the box\n:";
        cin >> l >> b >> h;
    }

    void get() {
        cout << "Length = " << l<< endl;
        cout << "Breadth = " << b << endl;
        cout << "Height = " << h << endl;
    }

    void calvol() {
        v = l*b*h;
        cout << "Volume = " << v<<endl;
    }
};

int main() {
    box cube, cuboid;
    cube.set();
    cube.get();
    cube.calvol();
    cout << "\n";
    cuboid.set();
    cuboid.get();
    cuboid.calvol();
    return 0;
}