/*
	변수 초기화 - 멤버 초기화
	1. 상수 멤버 변수
	2. 레퍼런스 멤버 변수
	3. 객체를 멤버로 가지는 경우
*/

#include <iostream>

// 1. 상수 멤버 변수 (const)
class ConstClass {
private:
	int m_value;		// 일반 멤버 변수(초기화 방법 제한 없음)
	const int m_value2;	// 상수 멤버 변수(반드시 선언과 동시에 초기화 필요)
public:
	// 생성자에서 멤버 초기화 리스트(: m_value2(value))를 사용하여 const 멤버 변수 초기화
	ConstClass(int value, int value2) : m_value2(value) { 
		m_value = value;	// 일반 변수는 생성나 내부에서 초기화 가능
	}
	void showValue() {
		printf("m_value: %d, m_value2: %d\n", m_value, m_value2);
	}
};

// 2. 레퍼런스 멤버 변수 (참조자)
class RefClass {
private:
	int& ref;			// 참조자 멤버 변수(객체가 생성될 때 반드시 초기화 되어야 함)
public:
	// 콜론 초기화를 통해 참조자가 참조할 대상(r)을 초기화
	RefClass(int& r):ref(r) {}
	void showValue() {
		printf("ref: %d\n", ref);
	}
};

// 3. 객체를 멤버로 가지는 경우
class Position {
private:
	int m_x;
	int m_y;
public:
	// Position 클래스의 생성자
	Position(int x, int y) { 
		printf("Position 생성자!!\n");
		m_x = x; m_y = y; 
	}
	void getData() {
		printf("m_x: %d, m_y: %d\n", m_x, m_y);
	}
};

// Position 클래스를 멤버로 가지는 ObjClass
class ObjClass {
private:
	Position pos;				// Position 객체 멤버 변수
public:
	// ObjClass의 생성자에서 멤버 초기화 리스트(: pos(x,y))를 사용하여 Position 객체를 초기화
	ObjClass(int x, int y) : pos(x, y) { 
		printf("ObjClass constructor!!\n"); 
	}

	void showValue() {
		pos.getData();
	}
};

int main()
{
	// 1. ConstClass 객체 생성
	ConstClass obj(10, 20);
	obj.showValue();

	// 2. RefClass 객체 생성
	int n = 50;
	RefClass obj2(n);
	obj2.showValue();

	std::cout << "=========================================" << std::endl;

	// 3. ObjClass 객체 생성 (내부적으로 Position 객체 생성)
	ObjClass o(3, 6);
	o.showValue();

	return 0;
}