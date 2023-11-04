#include <iostream>
using namespace std;

void function3() { throw 1; }
void function2() { function3(); }
void function1() { function2(); }

int main() {
	try {
		function1();
	}
	catch (int) {
		cout << "error" << endl;
	}
}