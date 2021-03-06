#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Strings
{
    char *str;
    int length;
    
public:
	Strings(){
		length = 0;
		str = new char[length +1];
	}
	
	Strings(char*s){
		length = strlen(s);
		str = new char[length + 1];
		strcpy_s(str, length, s);
	}
	
	void concat(Strings &a, Strings &b){
		length = a.length + b.length;
		delete str;
		str  = new char[length + 1];
		strcpy(str, length, a.str);
		strcat_s(str, length +1, b.str);
	}
	
	void display(){
		cout << "Concatenated string: " << str;
	}
};

int main(){
    char *str = "Hello";
    Strings str1(str), str2("World"), s1;
    s1.concat(str1,str2);
    s1.display();
    return 0;
}