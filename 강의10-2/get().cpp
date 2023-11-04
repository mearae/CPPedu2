#include <iostream>
using namespace std;

int main() {
	cout << "ASCII: " << cin.get() << endl;

	cin.ignore(1, '\n');

	char c;
	cin.get(c);
	cout << "char: " << c << endl;
}