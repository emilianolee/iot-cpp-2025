///*
//	연산자 오버로딩(다중정의)4	- 객체를 더하는 함수 add() 만들기 -> 객체를 리턴
//*/
//#include <iostream>
//
//class Point {
//public:
//	int x, y;
//	Point(int ax = 0, int ay = 0) :x(ax), y(ay) {
//		printf("생성자 호출!!!\n");
//	}
//	Point(const Point& other) {
//		printf("복사 생성자 호출!!\n");
//		x = other.x;
//		y = other.y;
//	}
//	Point add(const Point& other) {
//		printf("add()\n");
//		return Point(x + other.x, y + other.y);
//	}
//	void showPoint() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//
//};
//
//int main()
//{
//	Point p(10, 20);
//	Point p2(30, 40);
//	std::cout << "+++++++++++++++++++++++++++++++++++++++++++" << std::endl;
//	Point p3;
//	p3 = p.add(p2);
//	p3.showPoint();
// 
//	Point p4;
//	p4 = p3;
//	p4.showPoint();
// 
//	return 0;
//}
