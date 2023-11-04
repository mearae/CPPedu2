//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <fstream>
//#include <time.h>
//using namespace std;
//
//int main() {
//	clock_t start, end;
//	int time1, time2, time3;
//
//	ofstream outFile1{ "test5.txt",ios::out };
//	start = clock();
//	for (int i{ 0 }; i < 10000; ++i) {
//		outFile1 << i << '\n';
//	}
//	end = clock();
//	time1 = end - start;
//	
//	ofstream outFile2{ "test6.txt",ios::out };
//	start = clock();
//	for (int i{ 0 }; i < 10000; ++i) {
//		outFile2 << i << endl;
//	}
//	end = clock();
//	time2 = end - start;
//
//	FILE* f = fopen("test7.txt", "w");
//	start = clock();
//	for (int i{ 0 }; i < 10000; ++i) {
//		fprintf(f, "%d\n", i);
//	}
//	end = clock();
//	time3 = end - start;
//
//	cout << "outFile << i << '\\n': " << time1 << endl;
//	cout << "outFile << i << endl: " << time2 << endl;
//	cout << "fprintf(\"%d\\n\", i): " << time3 << endl;
//}