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
//	Tmp t1{ "pby",17,100.0 };
//	Tmp t2{ "wI",2,12.34 };
//	ofstream out{ "testfile.bin",ios::out | ios::binary };
//	out.write(reinterpret_cast<const char*>(&t1), sizeof(Tmp));
//	out.write(reinterpret_cast<char*>(&t2), sizeof(Tmp));
//	cout << sizeof(Tmp);
//}