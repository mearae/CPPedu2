#include <iostream>
using namespace std;

class Tmp {
	friend Tmp operator-(int num, Tmp& right) {
		Tmp t{ num };
		return (t - right);
	}
public:
	explicit Tmp(int a = 1) : _a{ a } {}
	Tmp operator-(const Tmp& right) {
		Tmp t{ _a - right._a };
		return t;
	}
	Tmp operator-(int num) {
		return Tmp{ _a - num };
	}
	void display() const {
		cout << _a << endl;
	}
private:
	int _a;
};

int main() {
	Tmp t1{ 3 };
	Tmp t2 = t1 - 4;
	t2 = 2 - t2;
	t2.display();
}