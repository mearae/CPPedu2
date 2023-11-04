#include <iostream>
using namespace std;

class TmpBase {
public:
	explicit TmpBase(int a) : _a{ a } {}
//	int getA() const { return _a; }
// protected:
// 	int _a{ 1 };
private:
	int _a{ 1 };
};

class TmpDr : public TmpBase {
public:
	explicit TmpDr(int a, int b) 
		: TmpBase{ a }, _b{ b } {}
	int getA() const { return _a; }
	int getB() const { return _b; }
private:
	int _b;
};

int main() {
	TmpDr d{ 2,12 };
	cout << d.getA() << endl;
	cout << d.getB() << endl;
	// cout << d._a << endl;
}
