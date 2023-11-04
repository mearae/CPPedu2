#include <iostream>
using namespace std;

class Tmp {
	friend ostream& operator<<(ostream& out, const Tmp& right) {
		out << right._a;
		return out;
	}
	friend Tmp& operator++(Tmp&);
	friend Tmp operator++(Tmp&, int);
public:
	Tmp(int a = 1) : _a{ a } {}
	//Tmp& operator++() {
	//	++_a;
	//	return *this;
	//}
	//Tmp operator++(int) {
	//	Tmp t{ *this };
	//	++_a;
	//	return t;
	//}
private:
	int _a;
};

Tmp& operator++(Tmp& t) {
	++(t._a);
	return t;
}

Tmp operator++(Tmp& t, int n) {
	Tmp t1{ t };
	++t1._a;
	return t1;
}

int main() {
	Tmp t{ 3 };
	cout << t++ << endl;
	cout << ++t << endl;
}