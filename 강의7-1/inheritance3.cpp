#include <iostream>
using namespace std;

class TmpBase {
public:
	// explicit TmpBase(int a) : _a{ a } {}
	int getA()const { return _a; }
private:
	int _a{ 1 };
};

class TmpDr : public TmpBase {
public:
	explicit TmpDr(int b) : _b { b } {}
	void display() const {
		cout << getA() << endl;
	}
private:
	int _b;
};

int main() {
	TmpDr d{ 3 };
	d.display();
}
