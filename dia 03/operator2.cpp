///*
//	연산자 오버로딩(다중정의)3	- 객체를 더하는 함수 add() 만들기 -> 객체를 리턴
//*/
//#include <iostream>
//
//class Point {
//public:
//	int x, y;
//
//	// 기본 생성자 및 매개변수가 있는 생성자
//	Point(int ax = 0, int ay = 0) :x(ax), y(ay) {
//		printf("생성자 호출!!!\n");
//	}
//
//	// 복사 생성자
//	Point(const Point& other) {
//		printf("복사 생성자 호출!!\n");
//		x = other.x;
//		y = other.y;
//	}
//
//	// 두 개의 Point 객체를 더하는 함수
//	Point add(const Point& other) {
//		printf("add()\n");
//		// 현재 객체의 x,y와 other 객체의 x, y 값을 더한 새로운 Point 객체 반환
//		return Point(x + other.x, y + other.y);
//	}
//
//	// 좌표 값 출력 함수
//	void showPoint() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//
//};
//
//int main()
//{
//	// 두 개의 Point 객체 p, p2 생성
//	Point p(10, 20);
//	Point p2(30, 40);
//
//	std::cout << "+++++++++++++++++++++++++++++++++++++++++++" << std::endl;
//	
//	// p와 p2를 더한 결과를 p3에 저장
//	Point p3;
//	p3 = p.add(p2);		// p의 add() 함수 호출 -> p2를 더한 새로운 Point 객체 반환 -> p3에 대입
//	p3.showPoint();
// 
//	// p3를 p4에 복사
//	Point p4;
//	p4 = p3;
//	p4.showPoint();
// 
//	return 0;
//}


///*
//	연산자 오버로딩(다중정의)4	- 객체를 더하는 함수 add() 만들기 -> 참조를 리턴
//*/
//#include <iostream>
//
//class Point {
//public:
//	int x, y;
//
//	// 기본 생성자 및 매개변수가 있는 생성자
//	Point(int ax = 0, int ay = 0) : x(ax), y(ay) {
//		printf("생성자 호출!!!\n");
//	}
//
//	// 복사 생성자
//	Point(const Point& other) {
//		printf("복사 생성자 호출!!\n");
//		x = other.x;
//		y = other.y;
//	}
//
//	// 두 개의 Point 객체를 더하는 함수(참조 반환)
//	Point add(const Point& other) {
//		printf("add()!!!\n");
//
//		//return Point(x + other.x, y + other.y);		// 기존의 객체 값이 사라지는 문제가 발생하는 코드
//
//		/* 참조로 리턴하는 방식 */
//		x = other.x;		// 현재 객체의 x를 other의 x로 변경
//		y = other.y;		// 현재 객체의 y를 other의 y로 변경
//		return *this;		// 현재 객체의 참조를 반환
//	}
//
//	// 좌표 값 출력 함수
//	void showPoint() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//};
//
//int main()
//{
//	// 두 개의 Point 객체 생성
//	Point p(10, 20);
//	Point p2(30, 40);
//
//	std::cout << "+++++++++++++++++++++++++++++++++++++" << std::endl;
//
//	// 기존 코드(주석 처리)
//	/*
//	Point p3;
//	p3 = p.add(p2);
//	*/
//
//	// add () 함수 호출 결과를 p3에 저장(객체의 참조 반환)
//	Point p3 = p.add(p2);
//	p3.showPoint();
//
//	return 0;
//}