#include <iostream>
using namespace std;

int main() {
	char str1[50];
	char str2[50];
	char str3[50];

	cout << "input: ";
	cin >> str1;
	cout << "1: " << str1 << endl;

	cout << "input2: ";
	cin.getline(str2, 50);
	cout << "2: " << str2 << endl;

	int num;
	cout << "num: ";
	cin >> num;

	// cin.ignore();

	cout << "input3: ";
	cin.getline(str3, 50);
	cout << "3: " << str3 << endl;
}