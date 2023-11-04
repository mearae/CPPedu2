#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double num1{ 0.00056789 };
	double num2{ 12.34 };

	cout << setprecision(4);
	cout << num1 << '\t' << num2 << endl;
	cout << scientific;
	cout << num1 << '\t' << num2 << endl;
	cout << fixed;
	cout << num1 << '\t' << num2 << endl;
	cout.unsetf(ios::fixed);
	cout << num1 << '\t' << num2 << endl;
}