#include<iostream>
#include<string>
using namespace std;
void defaultMask(string ipClass, string str) {
	string mask = "";
	int i = 0, dotCount = 0;
	if (ipClass == "A") {
		while (str[i] != '\0') {
			if (str[i] == '.') {
				dotCount++;
			}
			if (dotCount == 1)
				break;
			mask += str[i++];
		}
	}
	else if (ipClass == "B") {
		while (str[i] != '\0') {
			if (str[i] == '.') {
				dotCount++;
			}
			if (dotCount == 2)
				break;
			mask += str[i++];
		}

	}
	else if (ipClass == "C") {
		while (str[i] != '\0') {
			if (str[i] == '.') {
				dotCount++;
			}
			if (dotCount == 3)
				break;
			mask += str[i++];
		}
	}
	else if (ipClass == "D") {
		while (str[i] != '\0') {
			mask += str[i++];
		}
	}
	else {
		cout << "default mask : -" << endl;
		return;
	}
	cout << "default mask : " << mask << endl;
}
void calculate(string ipClass, string str) {
	char network[12], host[12];
	int i = 0, j = 0, dotCount = 0;
	for (int k = 0; k < 12; k++)
		network[k] = host[k] = '\0';
	if (ipClass == "A") {
		while (str[j] != '.')
			network[i++] = str[j++];
		i = 0;
		j++;
		while (str[j] != '\0')
			host[i++] = str[j++];
		cout << "Network ID is " << network << endl;
		cout << "Host ID is " << host << endl;
	}
	else if (ipClass == "B") {
		while (dotCount < 2)
		{
			network[i++] = str[j++];
			if (str[j] == '.')
				dotCount++;
		}
		i = 0;
		j++;

		while (str[j] != '\0')
			host[i++] = str[j++];
		cout << "Network ID is " << network << endl;
		cout << "Host ID is " << host << endl;
	}
	else if (ipClass == "C") {
		while (dotCount < 3)
		{
			network[i++] = str[j++];
			if (str[j] == '.')
				dotCount++;
		}
		i = 0;
		j++;

		while (str[j] != '\0')
			host[i++] = str[j++];
		cout << "Network ID is " << network << endl;
		cout << "Host ID is " << host << endl;
	}
	else if (ipClass == "D") {
		cout << "Network ID is " << str << endl;
		cout << "Host ID is -" << host << endl;
	}
	else {
		cout << "Network ID is -" << endl;
		cout << "Host ID is -" << endl;
		return;
	}

}
string findClass(int ip) {
	if (ip >= 1 && ip <= 126)
		return "A";

	else if (ip >= 128 && ip <= 191)
		return "B";

	else if (ip >= 192 && ip <= 223)
		return "C";

	else if (ip >= 224 && ip <= 239)
		return "D";

	else
		return "E";
}
int main() {
	char str[12];
	string temp = "", ipClass;
	int parts, arr_count = 0;
	cout << "enter the IP Address : ";
	cin >> str;
	cout << "\nThe IP Address is: " << str;

	for (int i = 0;str[i] != '\0';i++) {
		if (str[i] == '.') {
			parts = stoi(temp);
			temp = "";
			break;
		}
		else {
			temp = temp + str[i];
		}
	}
	ipClass = findClass(parts);
	cout << "\nClass of the IP : Class " << ipClass << endl;
	calculate(ipClass, str);
	defaultMask(ipClass, str);
	
	return 0;
}
