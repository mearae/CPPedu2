//#include <iostream>
//using namespace std;
//
//class Tmp {
//	friend ostream& operator<<(ostream& out, const Tmp& right) {
//		out << right._a << endl;
//		return out;
//	}
//public:
//	explicit Tmp(int a = 0) : _a{ a } {}
//	Tmp operator+(const Tmp& right) {
//		return Tmp{ _a + right._a };
//	}
//private:
//	int _a;
//};
//
//int main() {
//	Tmp t1{ 4 };
//	Tmp t2{ 3 };
//	cout << (t1 + t2) << endl;
//}