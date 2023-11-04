//#include <iostream>
//using namespace std;
//
//class Tmp {
//public:
//	Tmp() { cout << "born" << endl; }		// t1
//	Tmp(const Tmp& t) = default;		// t2
//	Tmp& operator = (const Tmp & t) = delete;		// t3
//	~Tmp() { cout << "die" << endl; }
//
//	void add(double a) = delete;
//	void add(int a) {
//
//	}
//private:
//	int _a{ 0 };
//};
//
//int main() {
//	Tmp t1;
//	Tmp t2 = t1;
//	Tmp t3;
//	// t3 = t1;		// error
//
//	t1.add(3);
//	// t1.add(3.5);		// error
//}