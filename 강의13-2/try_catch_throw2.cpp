#include <iostream>
using namespace std;

void Myhandler() {
	cout << "ó������ ���� ����" << endl;
	exit(EXIT_FAILURE);
}

int main() {
	set_terminate(Myhandler);

	int number1{ 5 };
	int number2{ 0 };
	try {
		if (number2 == 0)
			throw number2;
		else
			cout << number1 / number2 << endl;
	}
	catch (char) {
		cout << "error: int" << endl;
	}
}