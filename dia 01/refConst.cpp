/*
	상수레퍼런스 : 상수도 참조 가능하다
*/

#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	//int& ref = n;
	const int& ref = 10;		// 상수레퍼런스로 선언하면 리터럴도 참조할 수 있다.
								// 임시객체를 저장할 수 있는 공간이 생성된다.
	
	cout << "ref: " << ref << endl;
	
	return 0;
}

/*
	상수레퍼런스2 - 출력인 경우 : 일반 변수
*/
#include <iostream>

int func(int &anum)
{
	anum++;
	return anum;
}

int main()
{
	int num = 10;
	const int& res = func(num);	// int res = func(num);으로 해도 상관없음 But, int& res = func(num)은 불가함.
								// func는 제 기능을 다하면 사라지기 때문.
								// 일반변수 or 상수(const)로 받을 수 있음

	std::cout << res << std::endl;

	return 0;
}

/*
	상수레퍼런스3 - 출력인 경우: 레퍼런스
*/

#include <iostream>

int& func(int& ref) {		// 레퍼런스 2와 달리 참조 타입임.
	ref++;
	return ref;		//lvalue
	//return ref++;		// rvalue
}
int main()
{
	int n = 10;
	//int& ref = func(n);		// 출력하는 타입과 같으면 오류 안뜸
	int ref = func(n);			// 일반변수 or 참조로 받아도 됨

	std::cout << ref << std::endl;

	return 0;
}