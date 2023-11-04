#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int x{ 12345 };

	cout << "Default is right justification:\n\"" << setw(10) << x << "\"";

	cout << "\n\nUse left to left justify x:\n\""
		<< left << setw(10) << x << "\"";

	cout << "\n\nUse right to right justify x:\n\""
		<< right << setw(10) << x << "\"" << endl;
}