#include <iostream>
using namespace std;

int main() {
	cout << "Printing uppercase letters in scientific\n"
		<< "notation exponents and hexadecimal values: \n";

	cout << uppercase << 4.34e10 << "\n"
		<< hex << showbase << 123456789 << endl;
}