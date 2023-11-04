//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//
//int main() {
//	ofstream outFile("test2.txt", ios::out);
//
//	int account;
//	string name;
//	double balance;
//	int position{ 0 };
//
//	cout << "? ";
//	while (cin >> account >> name >> balance) {
//		outFile.seekp(position);
//		cout << "tellp():" << outFile.tellp() << endl;
//		position += 3;
//		outFile << account << ' ' << name << ' ' << balance << endl;
//		cout << "\n? ";
//	}
//}