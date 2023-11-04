//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//
//class Tmp {
//public:
//	Tmp(string pa, int pb, double pc) :b{ pb }, c{ pc }{
//		pa.copy(a, pa.length());		// strcpy(a, pa.c_str());
//		a[pa.length()] = '\0';
//	}
//	string getChar() { return a; }
//	int getInt() { return b; }
//	double getDouble() { return c; }
//private:
//	char a[5];
//	int b;
//	double c;
//};
//
//int main() {
//	Tmp t{ " ", 0, 0 };
//	ifstream in{ "testfile.bin",ios::in | ios::binary };
//	in.seekg(sizeof(Tmp));
//	in.read(reinterpret_cast<char*>(&t), sizeof(Tmp));
//	cout << t.getChar() << " " << t.getInt() << " " << t.getDouble() << endl;
//}