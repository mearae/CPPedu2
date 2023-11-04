//#include <iostream>
//using namespace std;
//
//class Basic {		// friend 클래스가 먼저 인식되어야 함.
//public:
//	friend class Tmp;
//	int getNum() const { return num; }
//private:
//	int num{ 3 };
//};
//
//class Tmp {
//	friend void addValue(Tmp& t, int value);
//public:
//	int getValue() const { return _number; }
//	void add(int);
//	void getBNum(Basic&);
//private:
//	int _number{ 2 };
//};
//
//void Tmp::add( int val) {
//	_number += val;
//}
//
//void Tmp::getBNum(Basic& b) {
//	b.num += _number;
//}
//
//int main() {
//	Tmp t;
//	Basic b;
//	addValue(t, 3);
//	cout << t.getValue() << endl;
//	t.add(3);
//	cout << t.getValue() << endl;
//	t.getBNum(b);
//	cout << b.getNum() << endl;
//}
//
//void addValue(Tmp& t, int value) {
//	t._number += value;
//}