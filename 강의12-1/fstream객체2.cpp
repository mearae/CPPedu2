//#include <iostream>
//#include <string>
//#include <fstream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//	fstream inoutFile("test4.txt", ios::in | ios::out);
//
//	string name;
//	while (inoutFile >> name) {
//		cout << name << endl;
//	}
//	cout << endl << inoutFile.tellp() << endl;
//	inoutFile.clear();
//	cout << inoutFile.tellp() << endl;
//
//	name = "IU";
//	inoutFile.seekp(10);
//	inoutFile << left << setw(8) << name << endl;
//}