//#include <iostream>
//using namespace std;
//
//class Tmp {
//public:
//	explicit Tmp(int a = 0) : _a{a}{}
//	Tmp& operator+=(int num) {
//		for (int i{ 0 }; i < num; ++i)
//			increment();
//		return *this;
//	}
//	void display() const {
//		cout << _a << endl;
//	}
//private:
//	int _a;
//	void increment() { ++_a; }
//};
//
//int main() {
//	Tmp t{ 4 };
//	(t += 3) += 5;
//	t.display();
//}