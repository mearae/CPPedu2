//#include <iostream>
//using namespace std;
//
//class Tmp {
//public:
//	void setA(int a) {
//		_a = a;
//	}
//	int getA() const {
//		return _a;
//	}
//private:
//	int _a;		// 안전성 증가, 외부에서 바로 접근 불가
//};
//
//int main() {
//	Tmp t;
//	// cout << t._a << endl;	// error
//	t.setA(5);
//	cout << t.getA() << endl;
//
//	return 0;
//}