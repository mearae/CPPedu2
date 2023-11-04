#include <iostream>
using namespace std;

int main() {
	int  integerValue;

	cout << "Before a bad input operation:"
		<< "\ncin.rdstate(): " << cin.rdstate()
		<< "\n    cin.eof(): " << cin.eof()
		<< "\n   cin.fail(): " << cin.fail()
		<< "\n    cin.bad(): " << cin.bad()
		<< "\n   cin.good(): " << cin.good()
		<< "\n\nExpects an integer, but enter a character: ";

	cin >> integerValue;

	cout << "\nAfter a bad input operation:"
		<< "\ncin.rdstate(): " << cin.rdstate()
		<< "\n    cin.eof(): " << cin.eof()
		<< "\n   cin.fail(): " << cin.fail()
		<< "\n    cin.bad(): " << cin.bad()
		<< "\n   cin.good(): " << cin.good();

	cin.clear();

	cout << "\n\nAfter cin.clear()" << "\ncin.fail(): " << cin.fail()
		<< "\ncin.good(): " << cin.good() << endl;

}