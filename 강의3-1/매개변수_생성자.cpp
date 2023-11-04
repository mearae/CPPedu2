//#include <iostream>
//#include <string>
//using namespace std;
//
//// 매개변수 값을  미리 정해놓으면 기본생성자처럼 
//// 작동 가능
//class Tmp {
//public:
//	Tmp(int a = 0, string s = "pby") {
//		_a = a;
//		_s = s;
//	}
//	void display() const {
//		cout << _a << endl;
//	}
//private:
//	int _a;
//	string _s;
//};
//
//int main() {
//	Tmp t;
//	Tmp t2(2,"asdf");
//	t.display();
//	t2.display();
//}
//
//// 1. 생성자를 선언할 때에는 매개변수의 값을 적지만,
//// 생성자를 정의할 때는 적지 않음
//// 2. 매개변수가 여러 개 있을 경우 오른쪽부터 채움
//// main함수에서 객체 호출 시 적는 매개변수는 
//// 왼쪽부터 적용
//class Tmp {
//public:
//	Tmp(int a = 0, string s = "pby");
//	void display() const;
//private:
//	int _a;
//	string _s;
//};
//
//Tmp::Tmp(int a, string s) {
//	_a = a;
//	_s = s;
//}
//void Tmp::display() const {
//	cout << _a << endl;
//}
//
//int main() {
//	Tmp t;
//	t.display();
//}