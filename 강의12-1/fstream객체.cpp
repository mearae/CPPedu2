//#include <iostream>
//#include <string>
//#include <fstream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//	fstream inoutFile("test4.txt", ios::out);
//	string name;
//	cout << "? ";
//	while (cin >> name) {
//		inoutFile << left << setw(8) << name << endl;
//		cout << "? ";
//	}
//	inoutFile.close();
//
//	inoutFile.open("test4.txt", ios::in | ios::out);
//	inoutFile.seekg(10);
//	inoutFile >> name;
//	cout << endl << name << endl;
//}