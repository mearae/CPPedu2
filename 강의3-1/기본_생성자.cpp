//#include <iostream>
//using namespace std;
//
//// �⺻ ������(defalt constructor)
//class Tmp {
//public:
//	Tmp() {}
//	void display() const {
//		cout << _a << endl;
//	}
//private:
//	int _a{ 0 };
//};
//
//int main() {
//	Tmp t;
//	t.display();
//}
//
////1. �����ڰ� ���� ��� �ڵ����� ����
//class Tmp2 {
//public:
//	//Tmp2() {}
//	void display() const {
//		cout << _a << endl;
//	}
//private:
//	int _a{ 0 };
//};
//
//int main() {
//	Tmp2 t;
//	t.display();
//}
//
////2. �����ڰ� �ִ� ��� �ڵ����� �������� ����
//class Tmp3 {
//public:
//	//Tmp3() {}
//	Tmp3(int a) { _a = a; }
//	void display() const {
//		cout << _a << endl;
//	}
//private:
//	int _a{ 0 };
//};
//
//int main() {
//	Tmp3 t1;
//	Tmp3 t2(1);
//	t1.display();
//	t2.display();
//}