#include <iostream>
using namespace std;

//template <typename T>
template <typename T, int arraySize>
class Array {
public:
	explicit Array(int size) :arraySize{ size } {
		ptr = new T[arraySize];
	}
	int getSize() const {
		return arraySize;
	}
	~Array() {
		delete[] ptr;
	}
private:
	T* ptr = nullptr;
	//int arraySize = 0;
};

int main() {
	//Array<int> arr{ 5 };
	Array<int, 5> arr{ 5 };
	cout << arr.getSize() << endl;
}