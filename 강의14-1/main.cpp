#include <iostream>
#include "Class.h"
#include "Class.cpp"
using namespace std;

int main() {
	cout << MyData<int>{5}.getData() << endl;
}