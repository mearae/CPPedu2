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
	// ������Ʈ-�Ӽ�-���� �Ӽ�-C/C++-��� �ɼ�-C++ ��� ǥ��-C++17�� ����
	array arr2{ 1,2,3 };
	for (int a : arr2)
		cout << a << endl;
}