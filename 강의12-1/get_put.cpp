#include <iostream>
#include <fstream>
using namespace std;

int main() {
	fstream inout("test4.txt", ios::in | ios::out);
	
	cout << "tellp: " << inout.tellp() << "\ttellg: " << inout.tellg() << endl;
	inout.seekp(3);
	cout << "tellp: " << inout.tellp() << "\ttellg: " << inout.tellg() << endl;
	inout.seekp(6);
	cout << "tellp: " << inout.tellp() << "\ttellg: " << inout.tellg() << endl;
}