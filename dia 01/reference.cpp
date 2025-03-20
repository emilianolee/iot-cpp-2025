/*
	다른 함수에 선언된 지역변수의 값을 바꾸는 방법1
*/
#include <iostream>
using namespace std;

void chFunc(int* _n) {
	*_n = 20;
}

int main()
{
	int n = 10;

	cout << "호출 전 n: " << n << endl;

	chFunc(&n);

	cout << "호출 후 n: " << n << endl;

	return 0;
}

/*
	다른 함수에 선언된 지역변수의 값을 바꾸는 방법2
	레퍼런스 - 또 다른 이름, 보이지 않는 포인터, 메모리를 사용하지 않는다.
*/

#include <iostream>
using namespace std;

void chFunc(int& rn) {		// 레퍼런스(참조변수) 선언
	rn = 20;
}

int main()
{
	int n = 10;
	cout << "호출전 n: " << n << endl;

	chFunc(n);

	cout << "호출후 n: " << n << endl;

	return 0;
}

/*
	레퍼런스 - 선언과 동시에 반드시 초기화해야만 한다.
*/
#include <iostream>
using namespace std;

int main()
{
	int num = 10, num2 = 100;
	int& ref = num;			// num의 메모리 공간에 ref라는 별명이 붙는다. 
	int* pn = &num;			
	int& rref = ref;
	rref = num2;
	cout << rref << ", " << num2 << endl;
	//int& rref;
	//rref = ref;

	num++;
	ref++;
	(*pn)++;

	cout << "num++: " << num << endl;
	cout << "num++: " << num << endl;
	cout << "*(pn)++: " << *pn << endl;

	cout << "&num: " << &num << endl;
	cout << "&ref: " << &ref << endl;

	return 0;
}