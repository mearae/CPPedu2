#include <iostream>
#include <cstring>
using namespace std;

void funA(int a) { cout << "funA" << endl; }
void funB(int& a) { cout << "funB" << endl; }
void funC(int&& a) { cout << "funC" << endl; }		
// rvalue의 경우 아래보다 위가 우선적으로 적용
// void funC(const int& a){ cout << "funD" << endl; }

int main() {
	int n{ 5 };
	funA(n);		funB(n);		/*funC(n);*/
	funA(1);		/*funB(1);*/		funC(1);
	funA(1+2);		/*funB(1+2);*/		funC(1+2);
}