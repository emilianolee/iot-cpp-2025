///*
//	step3
//	char 포인터의 name, int타입의 age, 출력을 담당하는 showHuman()을 가지는 Human 클래스가 있다.
//	name 을 동적할당하고 나이 30, 이름 홍명보인 man 객체를 생성하시오.
//	man 객체를 복사하여 copyman 객체를 생성하시오.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char* name;
//	int age;
//public:
//	// 생성자
//	Human(const char* n, int a) {
//		printf("생성자 호출!!!\n");
//		name = new char[strlen(n) + 1];
//		strcpy(name, n);
//		age = a;
//	}
//	
//	// 복사생성자
//	Human(const Human& other) {
//		printf("복사 생성자 호출!!!\n");
//		name = new char[strlen(other.name) + 1];
//		strncpy(name, other.name, strlen(other.name) + 1);
//		age = other.age;
//	}
//	
//	// 소멸자
//	~Human() {
//		printf("소멸자 호출!!!\n");
//		delete[] name;
//	}
//
//	// 출력함수구현
//	void showHuman() {
//		printf("이름: %s, 나이: %d\n", name, age);
//	}
//};
//
//int main()
//{
//	Human man("홍명보", 30);
//	man.showHuman();
//
//	Human copyman(man);
//	copyman.showHuman();
//
//	return 0;
//}