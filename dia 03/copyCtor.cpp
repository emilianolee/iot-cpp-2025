///*
//	디폴트로 자동으로 제공받는 생성자: 디폴트 생성자, 복사 생성자, 소멸자 등이 있다.
//*/
//
///*
//	복사 생성자 (copy constructor)
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char m_name[20];		// 고정된 크기의 문자 배열(동적 할당 아님)
//	int m_age;
//public:
//	// 생성자
//	Person(const char *name, int age) {
//		printf("Constructor call!!\n");
//		strcpy(m_name, name);
//		m_age = age;
//	}
//
//	// 멤버 함수(객체 정보 출력)
//	void printPerson() {
//		printf("name: %s, age: %d\n", m_name, m_age);
//	}
//};
//
//int main()
//{
//	Person p("홍길동", 30);	// 기본 생성자 호출
//	p.printPerson();
//
//	Person p2(p);	// 복사 생성자 호출(기본 제공되는 복사 생성자 사용)
//	p2.printPerson();
//
//	Person p3(p);	// 복사 생성자 호출2 (기본 제공되는 복사 생성자 사용)
//	p3.printPerson();
//
//	return 0;
//}
//
///*
//	복사 생성자 (copy constructor)2
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char name[20];		// 이름을 지정할 문자 배열(고정 크기)
//	int age;			// 나이를 지정할 정수형 변수
//public:
//	// 생성자
//	Person(const char* name, int age) {
//		printf("Constructor call!!!\n");
//		strcpy(this->name, name);	// 매개변수로 받은 name 값을 멤버 변수 name에 복사
//		this->age = age;			// 매개변수로 받은 age 값을 멤버 변수 age에 저장
//	}
//	
//	// 복사생성자: 객체가 다른 객체로부터 복사될 때 호출됨 -> 디폴트 복사 생성자를 명시적으로 작성함
//	Person(const Person& other) {		// 복사 생성자의 매개변수는 반드시 참조자 형태로 사용해야함(참조자로 전달하여 불필요한 복사 방지)
//		printf("Copy Constructor!!!\n");
//		strncpy(this->name, other.name, strlen(other.name) + 1);	// 다른 객체의 name 값을 복사
//		this->age = other.age;		// 다른 객체의 age 값을 복사
//	}
//
//	// 멤버 함수: 객체의 정보 출력
//	void printPerson() {
//		printf("이름: %s, 나이: %d\n", this->name, this->age);
//	}
//};
//
//int main()
//{
//	Person p("홍길동", 20);	// 생성자 호출
//	p.printPerson();
//
//	Person p2(p);	// 복사 생성자 호출(기본 제공되는 복사 생성자 사용)
//	p2.printPerson();
//
//	Person p3(p);	// 복사 생성자 호출(기본 제공되는 복사 생성자 사용)
//	p3.printPerson();
//
//	return 0;
//}
//
///*
//	복사 생성자 (copy constructor)3 - 깊은 복사(deep copy)
//	- 깊은 복사는 동적 할당된 객체를 복사할 때, 새로운 메모리를 할당하여 별도로 저장해야 함
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char* m_name;		// 이름을 저장할 동적 할당된 문자열 포인터
//	int m_age;			// 나이를 저장할 정수형 변수
//public:
//	// 생성자
//	Person(const char* name, int age) {
//		printf("constructor call!!!\n");
//		m_name = new char[strlen(name) + 1];	// 문자열 크기만큼 동적 할당
//		strcpy(m_name, name);	// 문자열 복사
//		m_age = age;	// 나이 값 저장
//	}
//
//	// 깊은 복사 생성자 : 새로운 메모리를 할당하여 별도로 데이터를 복사
//	Person(const Person& other) {
//		printf("copy constructor!!\n");
//		m_name = new char[strlen(other.m_name) + 1];		// 새로운 메모리 할당 (깊은 복사)	
//		strncpy(m_name, other.m_name, strlen(other.m_name)+1);	// 문자열 복사
//		m_age = other.m_age;	// 나이값 복사
//	}
//
//	// 소멸자
//	~Person() {
//		delete[] m_name;
//	}
//
//	// 객체 정보 출력 함수
//	void printPerson() {
//		printf("name: %s, age: %d\n", m_name, m_age);
//	}
//};
//
//
//int main()
//{
//	Person p("홍길동", 30); // 생성자 호출
//	p.printPerson();	// p 객체 정보 출력
//
//	Person p2(p);	// 깊은 복사 생성자 호출(p의 데이터를 p2에 복사)
//	p.printPerson(); // p2 객체 정보 출력
//
//	Person p3(p);	// 깊은 복사 생성자 호출(p의 데이터를 p3에 복사)
//	p.printPerson(); // p3 객체 정보 출력
//
//	return 0;
//}