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
	// 1. �Ͻ��� ���� = ���� ����
	// Tmp(const Tmp& t) : _name{ t._name } {}
	// 2. ���� ����
	//Tmp(const Tmp& t)	: Tmp{t._name}{}
	// �Ǵ�
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
	t.display();		// 1.error	2.���� �۵�
}