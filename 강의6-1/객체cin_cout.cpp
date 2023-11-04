//#include <iostream>
//using namespace std;
//
//class Tmp {
//	friend istream& operator>>(istream& in, Tmp& right) {
//		in >> right._a;
//		in.ignore(10, '-');
//		in >> right._b;
//		return in;
//	}
//	friend ostream& operator<<(ostream& out, const Tmp& right) {
//		out << right._a << "-" << right._b << endl;
//		return out;
//	}
//public:
//	explicit Tmp(int a = 0, int b = 0) : _a{ a }, _b{ b }{}
//private:
//	int _a;
//	int _b;
//};
//
//int main() {
//	Tmp t;
//	cin >> t;
//	cout << t;
//}