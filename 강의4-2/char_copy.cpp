#include <iostream>
#include <cstring>
using namespace std;

int main() {
	const char* s1{ "pby" };
	const char* s2{ s1 };
	char* s3{ new char[strlen(s1) + 1] };
	for (int i{ 0 }; s1[i] != '\0'; ++i) {
		s3[i] = s1[i];
	}
	s3[strlen(s1)] = '\0';

	cout << s1 << "\t" << static_cast<const void*>(s1) << endl;
	cout << s2 << "\t" << static_cast<const void*>(s2) << endl;
	cout << s3 << "\t" << static_cast<void*>(s3) << endl;

	int* iptr = new int{};
	void* vptr = iptr;
	double* dptr = vptr;
	static_cast<double*>(vptr);
}