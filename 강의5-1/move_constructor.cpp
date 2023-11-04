#include <iostream>
#include <cstring>
using namespace std;

class Tmp {
public:
	Tmp() { cout << "constructor" << endl; }
	Tmp(const Tmp& t) { cout << "copy constructor" << endl; }
	Tmp(Tmp&& r) noexcept { cout << "move constructor" << endl; }
private:
	int _num{ 0 };
};

Tmp fun() {
	cout << "function" << endl;
	Tmp tmp;
	return tmp;
}

int main() {
	Tmp t = fun();
}