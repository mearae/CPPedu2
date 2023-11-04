#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
	return a + b;
}

template <>
const char*  add(const char* a, const char* b) {
	return "char*";
}

template<typename T>
class MyData {
public:
	explicit MyData(T value): data{value}{}
	T getData() const { return data; }
private:
	T data;
};

template<>
class MyData<char*> {
public:
	explicit MyData(const char* value) : data{ new char[strlen(value) + 1] } {
		strcpy_s(data, strlen(value) + 1, value);
	}
	const char* getData() const { return data; }
	~MyData() { delete[] data; }
private:
	char* data;
};
int main() {
	cout << add(1, 2) << endl;
	cout << add("wook", "lee") << endl;
	cout << MyData{ 5 }.getData() << endl;
	cout << MyData<char*>{"dlwlrma"}.getData() << endl;
}