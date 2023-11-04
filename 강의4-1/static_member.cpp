//#include <iostream>
//using namespace std;
//
//class Tmp {
//public:
//	Tmp() { ++total; }
//	static int get() { return total; }
//private:
//	static int total;
//};
//
//int Tmp::total{ 2 };
//
//int main() {
//	cout << Tmp::get() << endl;
//	Tmp t1;
//	cout << t1.get() << endl;
//	Tmp t2;
//	cout << t1.get() << endl;
//	cout << t2.get() << endl;
//}