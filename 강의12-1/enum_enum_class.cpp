#include <iostream>
using namespace std;

int main() {
	enum E1 { a, b, c = 5, d };
	enum class E2 { e, f, g, h };

	// int d{ 10 };
	int h{ 10 };

	cout << a << endl;
	cout << static_cast<int>(E2::e) << endl;

	if (a == 0) {
		cout << "a" << endl;
	}
	if (static_cast<int>(E2::e) == 0) {
		cout << "e" << endl;
	}
}