/*

*/

#include <iostream>
#include "scope.h" // 우리가 만든 scope.h이라는 헤더파일에 있는 것들을 불러올 수 있음

A::A(int aa) {		// std::cout과 같은 형태
	a = aa;
}

void A::AInfo() {
	std::cout << "a: " << a << std::endl;
}

int main()
{
	A a(10);
	a.AInfo();

	return 0;
}