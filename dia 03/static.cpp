///*
//	static
//	- 클래스 멤버다.
//	- 즉, this 포인터가 없다
//	- 객체들이 공유한다.
//*/
//#include <iostream>
//
//class StaticTest {
//public:
//	int n;						// 일반 멤버 변수(객체마다 개별적으로 존재)
//	static int static_n;		// static 멤버변수(모든 객체가 공유)
//
//	StaticTest();				// 생성자 선언
//	void print();				// 멤버 함수 선언
//};
//
//// static 멤버변수는 클래스 외부에서 반드시 초기화해야 함
//int StaticTest::static_n = 10;		
//
//StaticTest::StaticTest() {
//	n = 20;					// 일반 멤버 변수 초기화
//	//static_n = 10;		// static 변수는 객체마다 존재하지 않기 때문에 생성자에서 초기화 할 필요 없음
//}
//
//void StaticTest::print() {
//	std::cout << "Static_n: " << static_n << "\tn: " << n << std::endl;
//}
//
//int main()
//{
//	StaticTest ob1, ob2;	// 두개의 객체 생성
//
//	ob1.print();			// 초기값 출력 (static_n = 10, n = 20)
//	ob2.print();			// ob2도 같은 값 (static_n = 10, n = 20)
//
//	ob2.static_n = 1000;	// static 변수 변경 (모든 객체에 적용됨)
//	ob2.n = 50;				// ob2의 일반 멤버 변수 변경(ob1에는 영향 없음)
//	
//	ob2.print();			// static_n = 1000, n = 50
//	ob1.print();			// ob1의 static_n 값도 1000으로 변경됨 (static은 모든 객체가 공유)
//
//	return 0;
//}

///*
//	static2
//*/
//#include <iostream>
//
//class AAA {
//private:
//	static int static_a;	// static 멤버 변수(모든 객체가 공유)
//	int n;					// 일반 멤버 변수(객체마다 개별적으로 존재)
//public:
//	AAA(int n);							// 생성자 선언
//	static void setStatic_a(int a);		// static 멤버 함수 선언
//	void print();						// 멤버 함수 선언
//};
//
//// static 멤버 변수는 클래스 외부에서 반드시 초기화해야 함
//int AAA::static_a = 100;
//
//// 생성자 정의
//AAA::AAA(int n) {
//	this->n = n;		// 일반 멤버 변수 초기화
//}
//
//// 멤버 변수 출력 함수
//void AAA::print() {
//	printf("static_a: %d, n: %d\n", static_a, n);
//}
//
//// static 멤버 함수 정의
//void AAA::setStatic_a(int a) {
//	static_a = a;		// static 멤버 변수는 접근 가능
//	//n = 0;			// 오류!! 일반 멤버 변수에는 접근 불가(컴파일 오류 발생)
//}
//
//int main()
//{
//	AAA obj1(10), obj2(20);		// 두 개의 객체 생성
//
//	obj1.print();				// static_a = 100, n = 10
//	obj2.print();				// static_a = 100, n = 20
//
//	obj1.setStatic_a(50);		// static 멤버 변수 변경(모든 객체에 적용됨)
//	obj1.print();				// static_a = 50, n = 10
//
//	return 0;
//}

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
//    char mname[20];  // 이름 저장 변수
//    char mphone[20]; // 전화번호 저장 변수
//    char madr[100];  // 주소 저장 변수
//    int mnum;        // 개별 회원번호
//    static int cnt;  // 회원번호 자동 증가를 위한 정적 변수
//public:
//    // 생성자: 이름, 전화번호, 주소를 매개변수로 받아 초기화하고, 회원번호 자동 증가 함수 호출
//    StaticTest(const char* name, const char* phone, const char* adr) {
//        strcpy(mname, name);   // 이름 복사
//        strcpy(mphone, phone); // 전화번호 복사
//        strcpy(madr, adr);     // 주소 복사
//        cntAutoPlus();         // 회원번호 증가 함수 호출
//        mnum = cnt;            // 증가된 회원번호를 mnum에 저장
//    }
//
//    void cntAutoPlus(); // 회원번호 자동 증가 함수
//
//    void showMember();  // 회원 정보 출력 함수
//};
//
//// 정적 변수 초기화 (회원번호는 0부터 시작, 첫 회원은 1번)
//int StaticTest::cnt = 0;
//
//// 회원번호 증가 함수 구현
//void StaticTest::cntAutoPlus() {
//    cnt++; // 회원번호 증가
//}
//
//// 회원 정보 출력 함수 구현
//void StaticTest::showMember() {
//    std::cout << "회원번호: " << mnum << std::endl;  // 현재 회원번호 출력
//    printf("이름: %s, 전화번호: %s, 주소: %s\n", mname, mphone, madr); // 회원 정보 출력
//}
//
//// main 함수: 프로그램 실행 시작
//int main()
//{
//    StaticTest m1("홍길동", "010-1111-1111", "부산");
//    m1.showMember();  // 회원 정보 출력
//
//    StaticTest m2("김영희", "010-2222-2222", "서울");
//    m2.showMember();  // 회원 정보 출력
//
//    StaticTest m3("김철수", "010-3333-3333", "대전");
//    m3.showMember();  // 회원 정보 출력
//
//    return 0;  // 프로그램 정상 종료
//}