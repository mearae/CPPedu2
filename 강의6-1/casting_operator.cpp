//#include <iostream>
//using namespace std;
//
//class Tmp {
//public:
//	/* explicit */ Tmp(int day)
//		: _year{ day / 365 }, _day{ day % 365 } {}
//	void display() {
//		cout << "year: " << _year << ", day: " << _day << endl;
//	}
//	operator int() const {
//		return _year * 365 + _day;
//	}
//private:
//	int _year;
//	int _day;
//};
//
//int main() {
//	Tmp t{ 1000 };
//	t.display();
//
//	Tmp t2 = 2000;
//	t2.display();
//
//	static_cast<Tmp>(2000).display();
//	cout << static_cast<int>(t) << endl;
//}