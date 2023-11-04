#include <iostream>
using namespace std;

int add(int num1, int num2) {
	return num1 + num2;
}
double add(double num1, double num2) {
	return num1 + num2;
}

template <typename T1, typename T2>
double sub(T1 num1, T2 num2) {
	return num1 - num2;
}

template <typename T>
T sub(T num1, T num2) {
	return num1 - num2;
}

int main() {
	cout << add(2, 3) << endl;
	cout << add(2.1, 3.1) << endl;
	// cout << add(2.1, 3) << endl;
	cout << sub(2, 3) << endl;
	cout << sub(2.1, 3.1) << endl;
	cout << sub(2.1, 3) << endl;
}