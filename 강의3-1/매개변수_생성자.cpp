//#include <iostream>
//#include <string>
//using namespace std;
//
//// �Ű����� ����  �̸� ���س����� �⺻������ó�� 
//// �۵� ����
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
//// 1. �����ڸ� ������ ������ �Ű������� ���� ������,
//// �����ڸ� ������ ���� ���� ����
//// 2. �Ű������� ���� �� ���� ��� �����ʺ��� ä��
//// main�Լ����� ��ü ȣ�� �� ���� �Ű������� 
//// ���ʺ��� ����
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