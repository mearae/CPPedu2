#include <iostream>
#include <string>
using namespace std;

class Phone {
public:
	Phone(string n) { cout << "Phone constructor" << endl; }
	Phone(const Phone& P) {
		_name = P._name;
		cout << "Phone2 constructor" << endl; }
	~Phone() { cout << "Phone destructor" << endl; }
private:
	string _name;
};

class Person {
public:
	Person(string n, Phone& p) : _name{n}, _phone{p} 
	{cout << "Person constructor" << endl; }
	~Person() { cout << "Person destructor" << endl; }
private:
	string _name;
	const Phone _phone;
};

int main() {
	Phone ip{ "iPhone 12" };
	Phone ii{ ip };
	Person psn{ "pby", ip };
}

// 복사생성자 실행과 다른 생성자 실행은 다르게 작용
// 복사생성자에도 내용을 적어야 출력되는 생성자 내용과 소멸자 내용의 수가 같아짐.