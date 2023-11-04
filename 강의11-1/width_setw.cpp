#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout.width(5);
	cout << "lee" << setw(7) << "wook" << endl;
	cout.width(5);
	cout << "dlwlrma" << setw(7) << "wook" << endl << endl;

	char str[10];
	cin >> setw(5) >> str;
	cout << str << endl;
	cin >> setw(5) >> str;
	cout << str << endl;
}