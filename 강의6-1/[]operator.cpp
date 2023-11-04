//#include <iostream>
//using namespace std;
//
//class Tmp {
//public:
//	Tmp(int size)
//		: _size{ size }, _p{ new int [_size] {} } {}
//	int& operator[](int index) {
//		return _p[index];
//	}
//	int operator[](int index) const {
//		return _p[index];
//	}
//private:
//	int _size;
//	int* _p;
//};
//
//void fun(const Tmp& t) {
//	cout << t[2] << endl;
//}
//
//int main() {
//	Tmp arr{ 5 };
//	arr[2] = 3;
//	fun(arr);
//}