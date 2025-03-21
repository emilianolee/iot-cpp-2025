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