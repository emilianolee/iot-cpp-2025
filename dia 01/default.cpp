/*
	디폴트 매개변수 : 입력이 없을 때 디폴트 매개변수가 적용된다.
*/
#include <iostream>

int func(int num = 20) {
	return num * num;
}

int main()
{
	int res;
	res = func(10);
	std::cout << res << std::endl;			// 출력값 : 100

	int res2;
	res2 = func(0);
	std::cout << res2 << std::endl;			// 출력값 : 0

	int res3;
	res3 = func();			// 디폴트 매개변수가 적용된다.
	std::cout << res2 << std::endl;			// 출력값 : 400

	return 0;
}

/*
	
*/
#include <iostream>
#include <math.h>
using namespace std;

// default값은 선언(원형)에만 작성한다. defalut 매개변수 여러개 작성 시 제일 오른쪽부터 순서대로 작성해야함
int coordinates(int x, int y = 0, int z = 0);		// default 매개변수 2개 작성한 경우	

int main()
{
	cout << "(10, 20, 30): " << coordinates(10, 20, 30) << endl;
	cout << "(10, 20, def): " << coordinates(10, 20) << endl;
	cout << "(10, def, def): " << coordinates(10) << endl;

	return 0;
}

int coordinates(int x, int y, int z) {
	int res = 0;
	res = pow(x, 2) + pow(y, 2) + pow(z, 2);		// 제곱
	return sqrt(res);						// 제곱근
}

/*
	함수 오버로딩중에서 디폴트 매개변수와 입력이 없는 순수한 함수 정의가 있을 때,
	입력 없는 함수 호출시 문제가 발생한다.
*/
#include <iostream>
using namespace std;

int func(int n = 0) {
	return n * n;
}

int func() {
	return 10;
}

int main()
{
	cout << func(10) << endl;
	//cout << func() << endl;	-> 문제 발생 예시

	return 0;
}