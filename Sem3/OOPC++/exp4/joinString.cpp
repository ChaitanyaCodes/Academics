#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Strings
{
    char *str = new char;

public:
    void getStr(){
        cin >> str;
    }

    void concat(Strings b){
        strcat_s(str, b.str);
        cout << str;
    }
};

int main(){
    Strings str1, str2;
    cout << "Enter First string: ";
    str1.getStr();
    cout << "Enter Second string: ";
    str2.getStr();
    cout << "Concatenated string is: ";
    str1.concat(str2);
    return 0;
}