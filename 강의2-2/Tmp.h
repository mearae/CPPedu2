//// 전처리기에서 미리 처리해줌.
//// 모든 곳에서 지원해주지는 않음. 
//// 컴파일러 의존 -> 컴파일러가 바뀌면 제대로 작동 안 할 가능성 있음.
//#pragma once
//
//#include <iostream>
//class Tmp {
//public:
//	Tmp(int a, std::string s);
//	Tmp();
//	void display()const;
//private:
//	int _a = 0;
//	std::string _s;
//};
//
//// 어느 환경에서든 사용 가능
//// 매번 실행할 때마다 비교
////#ifndef Tmp_H
////#define Tmp_H
////
////#include <string>
////class Tmp {
////public:
////	Tmp(int a, std::string s);
////	Tmp();
////	void display()const;
////private:
////	int _a = 0;
////	std::string _s;
////};
////
////#endif