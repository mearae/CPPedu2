//#include <iostream>
//using namespace std;
//
//class Tmp {
//public:
//	explicit Tmp(int x=0,int y=0)
//		: _x{x},_y{y} {}
//	bool operator==(const Tmp& right) {
//		if (_x == right._x && _y == right._y)
//			return true;
//		else
//			return false;
//	}
//	bool operator!=(const Tmp& right) {
//		return !(*this == right);
//	}
//private:
//	int _x;
//	int _y;
//};
//
//int main() {
//	Tmp t1{ 1,2 };
//	Tmp t2{ 1,2 };
//	if (t1 != t2)
//		cout << "t1 != t2" << endl;
//	else
//		cout << "t1 == t2" << endl;
//}