//#include <iostream>
//using namespace std;
//
//class Tmp {
//public:
//	explicit Tmp(int a = 1) : _a{ a } {}
//	Tmp operator+(const Tmp & right) {
//		Tmp t;
//		t._a = _a + right._a;
//		return t;
//	}
//	Tmp operator-(const Tmp& right) {
//		return Tmp(_a - right._a);
//	}
//	void display() const {
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//
//int main() {
//	Tmp t1{ 3 };
//	Tmp t2{ 5 };
//	Tmp t3 = t1 + t2;
//	// Tmp t3 = t1.operator+(t2)
//	Tmp t4;
//	t4 = t1 - t2;
//	t3.display();
//	t4.display();
//}