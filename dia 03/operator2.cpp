///*
//	연산자 오버로딩(다중정의)2
//*/
//#include <iostream>
//
//class Point {
//public:
//	int x, y;
//	Point(int ax = 0, int ay = 0) : x(ax), y(ay) {
//		printf("생성자 호출!\n");
//	}
//
//	Point(const Point& other) {
//		printf("복사 생성자 호출!!\n");
//		x = other.x;
//		y = other.y;
//	}
//
//	const Point& add(const Point& other) {
//		printf("add() 함수 호출!!!\n");
//		return Point(x + other.x, y + other.y);
//	}
//
//	void showPoint() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//};
//
//int main()
//{
//	Point obj(10, 20);
//	//obj.showPoint();
//
//	Point obj2(30, 40);
//	//obj2.showPoint();
//
//	Point obj3;
//	obj3 = obj.add(obj2);
//	obj3.showPoint();
//
//	return 0;
//}