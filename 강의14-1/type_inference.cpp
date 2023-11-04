#include <iostream>
#include <array>
using namespace std;

template <typename T1, typename T2>
double add(T1 num1, T2 num2) {
	return num1 + num2;
}

template<typename T>
T add(T num1, T num2) {
	return num1 + num2;
}

int main() {
	cout << add(2, 3) << endl;
	cout << add<double>(2.1, 3.1) << endl;
	cout << add<double, int>(2.1, 3) << endl;

	array<int, 5> arr1{ 1,2,3 };
	for (int a : arr1)
		cout << a << endl;
	// 프로젝트-속성-구성 속성-C/C++-모든 옵션-C++ 언어 표준-C++17로 변경
	array arr2{ 1,2,3 };
	for (int a : arr2)
		cout << a << endl;
}