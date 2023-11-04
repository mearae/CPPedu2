//#include <iostream>
//using namespace std;
//
//class Tmp {
//public:
//	explicit Tmp(int a = 0, int b = 0) : _a{ a }, _b{ b } {}
//	Tmp& operator=(const Tmp& right) {
//		_a = right._a; _b = right._b;
//		return *this;
//	}
//	Tmp& operator=(Tmp& right) noexcept {
//		_a = right._a; _b = right._b;
//		return *this;
//	}
//private:
//	int _a;
//	int _b;
//};
//
//int main() {
//	Tmp t1;
//	t1 = Tmp{ 3 };
//}