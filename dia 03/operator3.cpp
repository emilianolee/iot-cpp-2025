///*
//	연산자 오버로딩(다중정의)3
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class MyClass {
//private:
//	int m_a, m_b;
//	//const char* m_name;
//public:
//	MyClass(int a = 0, int b = 0) : m_a(a), m_b(b){ }
//	void showMyClass() {
//		std::cout << m_a << ", " << m_b << ", " << m_name << std::endl;
//	}
//};
//
//int main()
//{
//	//MyClass obj{ 1, 2, "홍길동" };
//	//obj.showMyClass();
//
//	//MyClass obj2;		// 디폴트 매개변수를 생성했기에 입력 값을 받지 않는 객체를 만들 수 있다.
//	//obj2 = obj;			// num = 10; 디폴트 대입 연산자
//	//obj2.showMyClass();
//
//	MyClass obj{ 10, 20 };
//	MyClass obj2{ 30, 40 };
//	MyClass obj3 = obj + obj2;
//
//	return 0;
//}