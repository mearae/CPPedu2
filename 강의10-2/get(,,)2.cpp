#include <iostream>
using namespace std;

int main() {
	char str1[50];
	char str2[50];
	char str3[50];

	cin.get(str1, 50);
	cout << "1: " << str1 << endl;

	// cin.ignore();

	cin.get(str2, 50, '\n');
	cout << "2: " << str2 << endl;

	// cin.ignore();

	cin.get(str3, 50, '\n');
	cout << "3: " << str3 << endl;
}