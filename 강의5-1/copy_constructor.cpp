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
	// 1. 암시적 복사 = 얕은 복사
	// Tmp(const Tmp& t) : _name{ t._name } {}
	// 2. 깊은 복사
	//Tmp(const Tmp& t)	: Tmp{t._name}{}
	// 또는
	//Tmp(const Tmp& t)
	//	: _name{ new char[strlen(t._name) + 1] } {
	//	for (int i{ 0 }; t._name[i] != '\0'; ++i)
	//		_name[i] = t._name[i];
	//	_name[strlen(t._name)] = '\0';
	//}
	void display() const {
		cout << _name << "\t" << static_cast<void*>(_name) << endl;
	}
	~Tmp() { delete[] _name; }
private:
	char* _name;
};

int main() {
	Tmp* ptr{ new Tmp{ "pby" } };
	Tmp t{ *ptr };
	ptr->display();
	delete ptr;
	t.display();		// 1.error	2.정상 작동
}