#include <iostream>
using namespace std;

int main() {
	char str1[50];
	char str2[50];

	cin.getline(str1, 50);
	cout << "1: " << str1 << endl;

	cin.get(str2, 50, '\n');
	cout << "2: " << str2 << endl;
}