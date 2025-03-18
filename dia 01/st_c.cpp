///*
//	C 구조체
//*/
//#include <iostream>
//
//typedef struct {
//	char name[20];
//	int age;
//	char job[10];
//} Human;
//
//void showHuman(Human ah) 
//{
//	printf("name: %s, age: %d, job: %s", ah.name, ah.age, ah.job);
//}
//
//int main()
//{
//	Human h = { "김철수", 30, "백수" };
//	showHuman(h);
//
//	return 0;
//}

///*
//	C++ 구조체
//*/
//#include <iostream>
//
//typedef struct human{
//	char name[20];
//	int age;
//	char job[10];
//
//	//C++에서는 멤버함수 + 멤버변수까지 구조체 변수안에 들어간다
//	void showHuman()
//	{
//		printf("name: %s, age: %d, job: %s", name, age, job);
//	}
//} Human;
//
//
//int main()
//{
//	Human h = { "김철수", 30, "백수" };
//
//	h.showHuman();
//
//	return 0;
//}

///*
//	C++ class
//*/
//#include <iostream>
//
//class Human {
//public:				// 외부에서도 클래스에 접근할 수 있게 해줌
//	char name[20];
//	int age;
//	char job[10];
//
//	//Human() {}		// 디폴트 생성자
//
//	void showHuman()
//	{
//		printf("name: %s, age: %d, job: %s", name, age, job);
//	}
//};
//
//
//int main()
//{
//	Human h = { "김철수", 30, "백수" };
//
//	h.showHuman();
//
//	return 0;
//}