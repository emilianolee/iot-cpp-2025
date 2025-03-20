///*
//	이동 생성자(Move Constructor)
//*/
//#include <iostream>
//
//int main()
//{
//	int n = 10;			// 변수 n 선언 및 초기화 (lvalue)
//	int& rn = n;		// 참조자 rn을 n에 바인딩 (lvalue 참조)
//	// lvalue 참조자는 반드시 기존 변수(lvalue)에만 바인딩 가능
//	
//	const int& ra = 10;	// const를 사용하면 상수 참조 가능 (상수 lvalue 참조)
//	// 일반적으로 rvalue(상수)는 lvalue 참조자로 받을 수 없지만, const를 사용하면 가능
//	// 즉, const int&는 rvalue(10) 를 참조할 수 있음
//
//	int&& rrn = 10;		// rvalue 참조(우측값 참조)
//	// rvalue(임시값)만을 참조할 수 있는 &&연산자 사용
//	// rvalue 참조는 이동 생성자에서 주로 사용됨
//
//	std::cout << n << ", " << rn << ", " << ra << ", " << rrn << std::endl;
//
//	return 0;
//}

///*
//	이동 생성자(Move Constructor)2
//	- rvalue reference 를 매개변수로 갖는 이동 생성자
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char m_name[10];		// 이름 저장 배열
//	int m_age;				// 나이 저장 변수
//public:
//	// (1) 입력 두 개 받는 생성자
//	Human(const char* name, int age){
//		printf("입력 두개 생성자 호출!\n");
//		strcpy(m_name, name);
//		m_age = age;
//	}
//
//	// (2) 복사 생성자
//	Human(const Human& other) {
//		printf("복사 생성자 호출!!\n");
//		strncpy(m_name, other.m_name, strlen(other.m_name) + 1);
//		m_age = other.m_age;
//	}
//
//	// (3) 이동 생성자 (rvalue 참조)
//	Human(Human&& other) noexcept{
//		printf("이동 생성자 호출!!!\n");
//		strncpy(m_name, other.m_name, strlen(other.m_name) + 1);	// 임시 객체의 값 복사
//		m_age = other.m_age;
//
//		//other.m_name = nullptr;	// 원래 문자열이 있는 곳을 초기화해야 하지만 배열이므로 적용 불가
//		other.m_age = 0;	// 이동 후 원본 객체의 값을 초기화
//	}
//
//	// (4) 정보 출력 함수
//	void printHuman() {
//		printf("이름: %s, 나이: %d\n", m_name, m_age);
//	}
//};
//
//int main()
//{
//	// (1) 일반 생성자 호출
//	Human h("이예찬", 26);
//	h.printHuman();
//
//	// (2) 복사 생성자 호출 (기존 객체 h를 h2로 복사)
//	Human h2(h);
//	h2.printHuman();
//
//	// (3) 이동 생성자 호출 (기존 객체 h를 이동하여 h3 생성)
//	Human h3(std::move(h));
//	h3.printHuman();
//	h.printHuman();		// h의 값이 이동 후 변경되었는지 확인 (나이만 0으로 설정됨)
//
//	return 0;
//}