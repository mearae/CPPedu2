//#include <iostream>
//using namespace std;
//
//// 복사 생성자도 자동 생성됨
//class Tmp {
//public:
//	Tmp(int a = 0) {
//		_a = a;
//	}
//	void display() const {
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//
//int main() {
//	Tmp t1{ 5 };
//	Tmp t2{ t1 };
//	Tmp t3 = t1;
//	t2.display();
//}
//
////
//class Tmp {
//public:
//	Tmp(int a = 0) {
//		_a = a;
//	}
//	Tmp(const Tmp& t) {
//		_a = t._a;
//	}
//	void display() const {
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//
//int main() {
//	Tmp t1{ 5 };
//	Tmp t2{ t1 };
//	t2.display();
//}