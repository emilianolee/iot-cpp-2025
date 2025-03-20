/*
	class를 구성하는 3가지
	1. 접근제어 지시자(private, public, protected)
		- private : 외부에서 접근 불가
		- public : 아무나 다 접근 가능	
		- protected : 상속 관계에서 상속받은 자신만 사용할 수 있음
	2. 멤버변수 : 속성 -> 외부에서 접근하지 못하도록 private(디폴트값임)영역으로 만들어야함
	3. 멤버함수(메서드) : 기능 -> 멤버함수를 통해 멤버변수에 접근해야 하기에 public 영역으로 만들어야함	

	ex) 코끼리 클래스
	속성(멤버변수)으로는? 코, 귀, 다리, 꼬리, 무게
	기능(멤버함수)으로는? 코로 먹이 먹음, 귀를 펄럭임 등등
*/

#include <iostream>
using namespace std;

class A {
public:
	int m_num = 0;				// 멤버변수(속성)

	void set(int num) {
		m_num = num;
	}
	void print() {			// 멤버함수(기능, 메서드)
		cout << "나는 A 클래스의 인스턴스다. " << "num: " << m_num << endl;
	}

};

int main()
{
	A obj;	// A타입의 변수 a
	// int n;	// int타입의 변수 n
	obj.print();
	obj.set(10);
	obj.print();

	return 0;
}