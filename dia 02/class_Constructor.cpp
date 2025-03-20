/*
	class - 생성자(constructor)
 - 생성자는 클래스의 이름과 함수의 이름이 동일하다.
 - 반환형이 선언되어 있지 않으며, 실제로 반환하지 않는다.
		- 즉 출력이 없다.
 - 생성자 호출로 객체가 만들어 진다.
 - 초기화 기능에 사용한다.
*/

#include <iostream>

class AClass {
private:
	int n1;
	int n2;
public:
	AClass() {}
	void setData(int num){
		n1 = num;
		n2 = num;
	}
	void getData(){
		std::cout << "나는 A 클래스의 인스턴스다. " << "n1: " << n1 << std::endl;
		std::cout << "나는 A 클래스의 인스턴스다. " << "n2: " << n2 << std::endl;
	}
};
int main()
{
	AClass obj;			// 입력이 없는 생성자는 기본적으로 제공되는 디폴트 생성자가 있기에 오류가 나지 않음
	// AClass obj(100, 200);	// 입력을 두개를 받은 생성자가 없기에 오류가 남
	obj.setData(10);
	obj.getData();
	obj.setData(20);
	obj.getData();

	return 0;
}

/*
	class - 생성자(constructor) 한 번 더
	- 프로그래머가 생성자를 작성하면 더 이상 디폴트 생성자는 제공되지 않는다. 
	- 오버로딩이 가능하다.
*/

#include <iostream>

class MyClass {
private:
	int m_num1;
	int m_num2;
public:
	// 기본 생성자 -> 밑에 입력을 두개 받는 생성자를 만들었기에 이 기본 생성자를 따로 만들지 않으면 MyClass obj;가 오류남
	MyClass(){}
	
	// 입력을 두개를 받는 생성자 만들기
	MyClass(int num1, int num2) {
		m_num1 = num1;
		m_num2 = num2;
	}

	// 소멸자 -> 기본생성자 앞에 ~ 붙여주면 됨
	~MyClass() {}

	void printData() {
		std::cout << "나는 MyClass의 인스턴스 입니다.";
		std::cout << "m_num1: " << m_num1 << "    m_num2: " << m_num2 << std::endl;
	}
};

int main()
{
	//MyClass obj;		// 입력을 두개 받는 생성자를 따로 만들었기 때문에 기본적으로 제공되는 디폴트 생성자는 만들어지지 않는다.
	MyClass obj2(100, 200);
	obj2.printData();

	return 0; 
}