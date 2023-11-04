#include <iostream>
using namespace std;

class TmpBase {
public:
	TmpBase() {
		cout << "constructor of base class" << endl;
	}
	~TmpBase() {
		cout << "destructor of base class" << endl;
	}
};

class TmpDr : public TmpBase {
public:
	TmpDr() {
		cout << "constructor of derived class" << endl;
	}
	~TmpDr() {
		cout << "destructor of derived class" << endl;
	}
};

int main() {
	TmpDr d;
}
