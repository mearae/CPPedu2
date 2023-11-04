#include <iostream>
using namespace std;

class MyError {
public:
	MyError(const string& m)
		: message{ m } {
		cout << "constructor" << message << endl;
	}
	MyError(const MyError& r)
		: message(r.message + " (copy) ") {
		cout << "copy constructor: " << message << endl;
	}
	string what() const { return message; }
	~MyError() { cout << "destructor: " << message << endl; }
private:
	string message;
};

//int main() {
//	try {
//		MyError my{ "MyError!" };
//		throw my;
//	}
//	catch (MyError e) {
//		cout << e.what() << endl;
//	}
//}

int main() {
	try {
		MyError my{ "MyError!" };
		throw my;
	}
	catch (MyError& e) {
		cout << e.what() << endl;
	}
}