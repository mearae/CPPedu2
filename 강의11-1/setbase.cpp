#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int number;

	cout << "Enter a decimal number: ";
	cin >> number;

	cout << number << " in hesadecimal is: " << hex << number << "\n";

	cout << dec << number << " in octal is: " << oct << number << "\n";

	cout << setbase(10) << number << " in decimal is: " << number << endl;
}