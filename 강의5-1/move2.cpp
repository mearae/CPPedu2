#include <iostream>
#include <cstring>
using namespace std;

class Tmp {
public:
	Tmp(const char* name)
		: _name{ new char[strlen(name) + 1] } {
		for (int i{ 0 }; name[i] != '\0'; ++i)
			_name[i] = name[i];
		_name[strlen(name)] = '\0';
	}
	Tmp(const Tmp& t) : Tmp{ t._name } { cout << "copy" << endl; }
	Tmp(Tmp&& r) noexcept : _name{ r._name } {
		cout << "move" << endl;
		r._name = nullptr;
	}
	~Tmp() { delete[] _name; }
private:
	char* _name;
};

Tmp fun() {
	Tmp tmp{ "pby" };
	return tmp;
}

int main() {
	Tmp t = fun();
}