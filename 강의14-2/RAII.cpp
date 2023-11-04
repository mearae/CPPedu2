#include <iostream>
#include <stdexcept>
using namespace std;

class Tmp {
public:
	Tmp() : pa{ new int[5] } {}
	~Tmp() { delete[] pa; }
private:
	int* pa;
};

void function() {

}