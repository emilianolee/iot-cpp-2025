///*
//	연산자 오버로딩(다중정의)5	- 객체를 더하는 함수 add() 만들기 -> 참조를 리턴
//*/
//#include <iostream>
//
//class Point {
//public:
//	int x, y;
//	Point(int ax = 0, int ay = 0) : x(ax), y(ay) {
//		printf("생성자 호출!!!\n");
//	}
//	Point(const Point& other) {
//		printf("복사 생성자 호출!!\n");
//		x = other.x;
//		y = other.y;
//	}
//	Point add(const Point& other) {
//		printf("add()!!!\n");
//		//return Point(x + other.x, y + other.y);
//		
//		/* 참조로 리턴 */
//		x = other.x;
//		y = other.y;
//		return *this;
//	}
//	void showPoint() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//};
//
//int main()
//{
//	Point p(10, 20);
//	Point p2(30, 40);
//	std::cout << "+++++++++++++++++++++++++++++++++++++" << std::endl;
//	/*
//	Point p3;
//	p3 = p.add(p2);
//	*/
//	Point p3 = p.add(p2);
//	p3.showPoint();
//
//	return 0;
//}