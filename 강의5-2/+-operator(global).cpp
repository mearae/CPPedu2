//#include <iostream>
//using namespace std;
//
//class Tmp {
//	friend Tmp operator+(const Tmp& left, const Tmp& right);
//	friend Tmp operator-(const Tmp& left, const Tmp& right);
//public:
//	explicit Tmp(int a = 1) : _a{ a } {}
//	void display() const {
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//
//Tmp operator+(const Tmp& left, const Tmp& right) {
//	return Tmp{ left._a + right._a };
//}
//Tmp operator-(const Tmp& left, const Tmp& right) {
//	return Tmp{ left._a - right._a };
//}
