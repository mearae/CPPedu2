#include <iostream>
using namespace std;

int main() {
	int x{ 100 };

	cout << "Printing octal and hexadecimal values with showbase: \n"
		<< showbase;

	cout << x << endl;
	cout << oct << x << endl;
	cout << hex << x << endl;
}