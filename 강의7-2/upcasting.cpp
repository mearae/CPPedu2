#include <iostream>
using namespace std;

class TmpBase {
public:
	void display() { cout << "base" << endl; }
};
class TmpDr : public TmpBase {
public:
	void display() { cout << "derived" << endl; }
};

int main() {
	TmpBase* base = new TmpBase;
	base->display();
	TmpDr* dr = new TmpDr;
	dr->display();
	base = dr;		// upcasting
	// base = static_cast<TmpBase*>(dr);
	base->display();
}