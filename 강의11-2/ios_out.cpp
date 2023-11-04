#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	ofstream outFile{ "test.txt", ios::out };
	cout << "Enter the account, name, and balance.\n";
	cout << "Enter end-of-file to end input.\n?";

	int account;
	string name;
	double balance;

	while (cin >> account >> name >> balance) {
		outFile << account << ' ' << name << ' ' << balance << endl;
		cout << "?";
	}
}