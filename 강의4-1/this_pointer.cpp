//#include <iostream>
//using namespace std;
//
//class Tmp {
//public:
//	Tmp(int n) {
//		int _number;
//		_number = n;
//		this->_number = 1;
//		cout << _number << endl;
//	}
//	void display(int _number) {
//		cout << _number << endl;
//		cout << this->_number << endl;
//	}
//	Tmp& fun() { 
//		cout << 2 << endl;
//		return *this; }
//private:
//	int _number;
//};
//
//int main() {
//	Tmp t(3);
//	t.display(5);
//	Tmp& ref = t.fun();		// ���� ������ ���
//	t.fun().fun().fun();
//}