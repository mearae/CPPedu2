//#include <iostream>
//using namespace std;
//
//int main() {
//	// shallow copy ���� ����
//	int* p1{ new int{5} };
//	int* p2{ p1 };
//	// deep copy ���� ����
//	int* p3{ new int{3} };
//	int* p4{ new int{*p1} };
//
//	cout << *p1 << "\t" << p1 << endl;
//	cout << *p2 << "\t" << p2 << endl;
//	cout << *p3 << "\t" << p3 << endl;
//	cout << *p4 << "\t" << p4 << endl;
//
//	// ���� ����
//	delete p1;
//	delete p3;
//	cout << *p2 << "\t" << p2 << endl;
//	cout << *p4 << "\t" << p4 << endl;
//}