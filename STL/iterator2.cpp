/*
	iterator2
	- vector<int>::reverse_iterator rit : 역방향 반복자 선언
	- 이놈을 생략하고 auto로 선언해도 됨
	- rbegin()은 마지막 주소, rend()은 처음 원소의 이전 주소
	
*/
#include <iostream>
#include <vector>
using namespace std;

void main()
{
	vector<int> v = { 10, 20, 30, 40, 50 };

	vector<int>::reverse_iterator rit;
	for (rit = v.rbegin(); rit != v.rend(); rit++) {
		cout << *rit << endl;
	}
	
	cout << endl;

	for (auto rit = v.rbegin(); rit != v.rend(); rit++) {
		cout << *rit << endl;
	}
}