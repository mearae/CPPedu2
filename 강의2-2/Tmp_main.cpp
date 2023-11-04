//#include "Tmp.h"
//using namespace std;
//
//int main() {
//	Tmp t{ 5,"pby" };
//	t.display();
//
//	int a = 5;		// copy initialization
//	int b(5);		// direct initialization
//	int c{ 5 };		// uniform initialization
//
//	// int d = 4.5;		// 4만 저장됨.
//	// int e { 4.5 };	// error, 형변환 안 됨.
//
//	Tmp t1();		// 객체 생성 안 함, 출력 안 함.
//						// 함수 생성
//	Tmp t2{};		// uniform initialization
//						// 객체 생성, 출력.
//
//	return 0;
//}