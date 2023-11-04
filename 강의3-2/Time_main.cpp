//#include <iostream>
//#include "Time.h"
//using namespace std;
//
//int main() {
//	Time t;
//
//	// 위험!
//	unsigned int& hourRef{ t.badSetHour(20) };
//
//	cout << "Valid hour before modification: " << hourRef;
//	hourRef = 30;	// 일반 함수로 멤버 변수를 외부에서 접근 및 변경 가능
//	cout << "\nInvalid hour after modification: " << t.getHour();
//
//	t.badSetHour(12) = 74;
//
//	cout << "\n\n***********************************************\n"
//		<< "POOR PROGRAMMING PRACTICE!!!!!\n"
//		<< "t.badSetHour(12) as an lvalue, invalid hout: "
//		<< t.getHour()
//		<< "\n***********************************************" << endl;
//}