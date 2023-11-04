#include <iostream>
//class DivideByZeroException {
//public:
//	DivideByZeroException(const std::string& m)
//		: message{ m } {}
//	std::string what() const { return message; }
//private:
//	std::string message;
//};
class DivideByZeroException : public std::runtime_error {
public:
	DivideByZeroException()
		: std::runtime_error{ "attempted to divide by zero" } {}
};

using namespace std;

//double quotient(int numerator, int denominator) {
//	if (denominator == 0)
//		throw DivideByZeroException{ "attempted to divide by zero" };
//	return static_cast<double>(numerator) / denominator;
//}
double quotient(int numerator, int denominator) {
	if (denominator == 0)
		throw DivideByZeroException{};
	return static_cast<double>(numerator) / denominator;
}

int main() {
	int number1{ 5 };
	int number2{ 0 };
	try {
		cout << quotient(number1,number2);
	}
	catch (const DivideByZeroException& e) {
		cout << e.what() << endl;
	}
}