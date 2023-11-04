#include <iostream>
using namespace std;

int main() {
	int widthValue{ 4 };
	char sentence[10];

	cout << "Enter a sentence:\n";
	cin.width(5);

	while (cin >> sentence) {
		cout.width(widthValue++);
		cout << sentence << "\n";
		cin.width(5);
	}
}