/*
	
*/
#include <iostream>
namespace aName {
	void func() {
		printf("aName::func()\n");
	}
}

namespace bName {
	void func() {
		printf("bName::func()\n");
	}
}

namespace cName {
	void func() {
		printf("cName::func()\n");
	}
}

using namespace cName;
int main()
{
	aName::func();		// aName에 있는 func를 사용
	bName::func();		// bName에 있는 func를 사용
	func();				// using namespace cName을 사용했기때문에 자동적으로 cName에 있는 func를 사용
	return 0;
}