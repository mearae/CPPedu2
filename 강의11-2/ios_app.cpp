#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	ofstream appFile{ "test.txt", ios::app };

	int account;
	string name;
	double balance;

	cout << "? ";
	while (cin >> account >> name >> balance) {
		appFile << account << ' ' << name << ' ' << balance << endl;
		cout << "? ";
	}
}