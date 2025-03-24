///*
//	전역함수 오버로딩 : operator(p1, p2)
//		1. public 
//			- 연산자 오버로딩을 통해 객체 간 연산을 수행
//			- 클래스 멤버 함수 뿐만 아니라 전역 함수를 이용한 연산자 오버로딩도 가능
//*/
//#include <iostream>
//
//class Point {
//public:
//	int x, y;		// 2차원 좌표 값
//
//	// 생성자: x, y 값을 초기화
//	Point(int ax, int ay) :x(ax), y(ay) {}
//
//	// 객체 + 객체 연산자 오버로딩
//	Point operator+(const Point& other) {
//		return Point(x + other.x, y + other.y);		// 객체 + 객체
//	}
//
//	// 객체 + 정수 연산자 오버로딩
//	Point operator+(int n) {
//		return Point(x + n, y + n);					// 객체 + 정수
//	}
//
//	// 좌표 출력 함수
//	void showPoint() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//};
//
//// 전역 함수 오버로딩: 정수 + 객체 연산 지원
//inline Point operator+(int n, const Point& other) {
//	return Point(n + other.x, n + other.y);
//}
//
//int main()
//{
//	Point a(10, 20);
//	Point b(30, 40);
//
//	// 객체 + 객체 연산
//	Point c = a + b;
//	c.showPoint();
//
//	// 객체 + 정수 연산
//	Point d = a + 100;
//	d.showPoint();
//
//	// 정수 + 객체 연산 (전역 함수 활용)
//	Point e = 200 + b;
//	e.showPoint();
//
//	return 0;
//}


///*
//	전역함수 오버로딩
//	2. private
//		- private 멤버 접근을 위한 friend 선언 활용
//*/
//#include <iostream>
//
//class Complex {
//private:
//	double real, image;
//public:
//	// 생성자
//	Complex(double r, double i): real(r), image(i) {}
//
//	// 덧셈을 수행하는 멤버 함수
//	Complex add(const Complex& other) {
//		return Complex(real + other.real, image + other.image);
//	}
//
//	// 연산자 오버로딩: 복소수 + 복소수
//	Complex operator+(const Complex& other) {
//		return Complex(real + other.real, image + other.image);
//	}
//
//	// 연산자 오버로딩: 복소수 * 복소수
//	Complex operator*(const Complex& other) {
//		return Complex(real * other.real, image * other.image);
//	}
//
//	// 연산자 오버로딩: 복소수 * 정수
//	Complex operator*(int n) {
//		return Complex(real * n, image * n);
//	}
//
//	// 값 출력 함수
//	void showComplex() {
//		printf("real: %.1lf, image: %.1lf\n", real, image);
//	}
//
//	// 전역 함수 operator*()가 private(protected도 가능) 멤버 변수에 접근할 수 있도록 friend 선언
//	friend Complex operator*(int n, const Complex& other);
//	friend std::ostream& operator<<(std::ostream& out, const Complex& other);
//};
//
//// 전역 연산자 오버로딩
//inline Complex operator*(int n, const Complex& other) {
//	return Complex(n * other.real, n * other.image);		// 원래라면 private으로 선언된 변수는 정보 은닉이 되어 있기 때문에 접근이 불가함. 하지만 위의 friend 덕에 가능
//}
//
//// 출력 연산자 오버로딩
//inline std::ostream& operator<<(std::ostream& out, const Complex& other) {
//	out << other.real << ", " << other.image;
//	return out;
//}
//
//int main()
//{
//	// 객체 생성
//	Complex c(1.1, 2.2);
//	Complex c2(3.3, 4.4);
//	
//	// 복소수 덧셈 연산
//	Complex c3 = c + c2;
//	c3.showComplex();
//
//	// 복소수 * 정수 연산
//	Complex c4 = c * 100;
//	c4.showComplex();
//
//	// 정수 * 복소수 연산
//	Complex c5 = 100 * c3;
//	c5.showComplex();
//
//	// cout 객체를 통한 객체 출력(operator<< 오버로딩 덕분에 가능)
//	std::cout << c << std::endl;		// 출력연산자(<<)는 기본적으로 객체를 출력할 수 없다.
//
//	return 0;
//}

///*
//	단항 연산자 오버로딩: 반환형 operator[연산자]()
//*/
//#include <iostream>
//
//class Money {
//private:
//	int money;
//public:
//	// 생성자: money값을 초기화(기본값 0)
//	Money(int m = 0) : money(m){}
//
//	// 단항 연산자 오버로딩: 객체를 함수처럼 호출했을 때 금액 반환
//	int operator()() {
//		return money;
//	}
//
//	// 단항 연산자 오버로딩: 객체를 함수처럼 호출하면서 금액을 증가
//	void operator()(int m) {
//		money += m;
//	}
//};
//
//int main()
//{
//	// Money 객체 생성(초기 금액 0)
//	Money m;
//
//	// 현재 금액 출력(m.operator()() 호출)
//	printf("money: %d\n", m.operator()());
//	
//	// 객체를 함수처럼 호출하여 금액 추가 (m(1000) + m.operator()(1000))
//	m(1000);
//	printf("money: %d\n", m.operator()());
//
//	// 명시적으로 operator() 호출하여 금액 추가
//	m.operator()(1000);
//	printf("money: %d\n", m.operator()());
//
//	return 0;
//}