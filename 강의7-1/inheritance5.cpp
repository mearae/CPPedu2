#include <iostream>
using namespace std;

class TmpBase {
public:
	explicit TmpBase(int a) : _a{ a } {}
	void display() const { cout << _a << endl; }
private:
	int _a{ 1 };
};

class TmpDr : public TmpBase {
public:
	explicit TmpDr(int a, int b)
		: TmpBase{ a }, _b{ b } {}
	void display() const { cout << _b << endl; }
private:
	int _b;
};

int main() {
	TmpDr d{ 2,12 };
	d.display();
	d.TmpBase::display();
}
