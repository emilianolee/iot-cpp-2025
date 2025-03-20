///*
//	static3 
//	- StaticTest라는 클래스를 만드는데 
//	- 멤버변수로는 이름, 전화번호, 주소, 회원번호(cnt)를 가지고
//	- 3개입력을 받는 생성자를 작성한다.
//	- 회원번호는 자동으로 증가시킬 것이기 때문!
//	- 출력 담당의 showMember() 메서드 구현
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class StaticTest {
//private:
//	char mname[20];
//	char mphone[20];
//	char madr[100];
//	static int cnt;
//public:
//	StaticTest(const char* name, const char* phone, const char* adr) {
//		strcpy(mname, name);
//		strcpy(mphone, phone);
//		strcpy(madr, adr);
//	}
//	
//	void cntAutoPlus();
//
//	void showMember();
//};
//
//void StaticTest::showMember() {
//	std::cout << "회원번호: " << cnt << std::endl;
//	printf("이름: %s, 전화번호: %s, 주소: %s\n", mname, mphone, madr);
//}
//
//void StaticTest::cntAutoPlus() {}
//
//int main()
//{
//	StaticTest m1("홍길동", "010-1111-1111", "부산");
//	m1.showMember();
//	StaticTest m2("김영희", "010-2222-2222", "서울");
//	m2.showMember();
//	StaticTest m3("김철수", "010-3333-3333", "대전");
//	m3.showMember();
//
//	return 0;
//}