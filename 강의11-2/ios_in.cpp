#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	ifstream inFile{ "test.txt", ios::in };

	int account;
	string name;
	double balance;

	while (inFile >> account >> name >> balance) {
		cout << account << ' ' << name << ' ' << balance << endl;
		cout << "?";
	}
}