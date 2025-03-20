/*
	cin - 입력을 담당하는 객체(C에서의 scanf!)
*/
#include <iostream>
using namespace std;

int main()
{
	int inVal;
	cout << "숫자 입력 > ";
	cin >> inVal;
	cout << "inVal: " << inVal << endl;

	return 0;
}

/*
	cin, cout 연습
*/
#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;

	cout << "첫 번째 숫자 입력: ";
	cin >> num1;

	cout << "두 번째 숫자 입력: ";
	cin >> num2;

	int res = num1 + num2;
	cout << "덧셈 결과: " << res << endl;

	return 0;
}