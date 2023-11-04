//#include <iostream>
//using namespace std;
//
//int main() {
//	// shallow copy 얕은 복사
//	int* p1{ new int{5} };
//	int* p2{ p1 };
//	// deep copy 깊은 복사
//	int* p3{ new int{3} };
//	int* p4{ new int{*p1} };
//
//	cout << *p1 << "\t" << p1 << endl;
//	cout << *p2 << "\t" << p2 << endl;
//	cout << *p3 << "\t" << p3 << endl;
//	cout << *p4 << "\t" << p4 << endl;
//
//	// 원본 삭제
//	delete p1;
//	delete p3;
//	cout << *p2 << "\t" << p2 << endl;
//	cout << *p4 << "\t" << p4 << endl;
//}