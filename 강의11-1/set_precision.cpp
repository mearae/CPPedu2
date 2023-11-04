#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	double root2{ sqrt(2.0) };

	cout << "Square root of 2 with precisions 0-9.\n"
		<< "Precision set by ostream member funtion precision: \n";
	cout << fixed;

	for (int places{ 0 }; places <= 9; ++places) {
		cout.precision(places);
		cout << root2 << "\n";
	}

	cout << "\nPrecision set by stream manipulator setprecision: \n";
	
	for (int places{ 0 }; places <= 9; ++places) {
		cout << setprecision(places) << root2 << "\n";
	}

}