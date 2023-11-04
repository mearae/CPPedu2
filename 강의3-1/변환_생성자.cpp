//#include <iostream>
//using namespace std;
//
////
//class Tmp {
//public:
//	Tmp(int a) {
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
//	Tmp t2 = 3;
//	t2.display();
//}
//// 변환을 막음
//class Tmp {
//public:
//	explicit Tmp(int a) {
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
//	Tmp t2 = 3;
//	t2.display();
//}