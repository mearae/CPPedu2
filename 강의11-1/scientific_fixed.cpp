#include <iostream>
using namespace std;

int main() {
	double x{ 0.001234567 };
	double y{ 1.946e9 };

	cout << "Displayed in scientific format: \n"
		<< scientific << x << '\t' << y;

	cout << "\n\nDisplayed in fixed format: \n"
		<< fixed << x << '\t' << y << endl;
}