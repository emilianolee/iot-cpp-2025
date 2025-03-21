///*
//	step4.
//	char 포인터의 name, int타입의 age, 출력을 담당하는 showHuman()을 가지는 Human 클래스가 있다.
//	name 을 동적할당하고 나이 30, 이름 홍명보인 man 객체를 생성하시오.
//	man 객체를 복사하여 copyman 객체를 생성하시오.
//	xman = man 이 가능하게 만드시오.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char* name;
//	int age;
//public:
//	Human () {}
//	// 생성자
//	Human(const char* n, int a) {
//		printf("생성자 호출!!!\n");
//		name = new char[strlen(n) + 1];
//		strcpy(name, n);
//		age = a;
//	}
//	// 복사 생성자
//	Human(const Human& other) {
//		printf("복사 생성자 호출!!!\n");
//		name = new char[strlen(other.name) + 1];
//		strcpy(name, other.name);
//		age = other.age;
//	}
//
//	// 출력함수구현
//	void showHuman() {
//		printf("이름: %s, 나이: %d\n", name, age);
//	}
//	const Human& operator=(const Human& rhs);
//};
//
//const Human& Human::operator=(const Human& rhs) {
//	if (this != &rhs) {
//		//delete[] name;
//		printf("생성자 오버로딩!!\n");
//		name = new char[strlen(rhs.name) + 1];
//		strcpy(name, rhs.name);
//		age = rhs.age;
//	}
//	return *this;
//}
//
//int main()
//{
//	Human man("홍명보", 30);
//	man.showHuman();
//
//	Human copyman(man);
//	copyman.showHuman();
//
//	Human xman;
//	xman = copyman;
//	xman.showHuman();
//
//	return 0;
//}