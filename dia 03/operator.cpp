///*
//   연산자 오버로딩(다중정의) -> +연산자 오버로딩 없이 함수로 구현
//*/
//#include <iostream>
//
//class Point {
//public:
//    int x, y;
//
//    // 생성자
//    Point(int ax = 0, int ay = 0) : x(ax), y(ay) {
//        printf("생성자 호출!\n");
//    }
//
//    // 복사생성자
//    Point(const Point& other) {
//        printf("복사 생성자 호출!!\n");
//        x = other.x;
//        y = other.y;
//    }
//
//    // add() 함수: 새로운 Point 객체 반환
//    const add(const Point& other) {
//        printf("add() 함수 호출!!!\n");
//        return Point(x + other.x, y + other.y);
//    }
//
//    // 출력함수
//    void showPoint() {
//        printf("x: %d, y: %d\n", x, y);
//    }
//};
//
//int main()
//{
//    Point obj(10, 20);
//    //obj.showPoint();
//
//    Point obj2(30, 40);
//    //obj2.showPoint();
//
//     // add() 함수 호출 후 반환된 새로운 Point 객체를 obj3에 저장 
//    Point obj3 = obj.add(obj2);
//    obj3.showPoint();
//
//    return 0;
//}

///*
//   연산자 오버로딩(다중정의)2 - 오류 나는 코드니까 참고할 것!!
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class MyClass {
//private:
//    int m_a, m_b;
//    //const char* m_name;
//public:
//    // 생성자: 두 개의 정수 값을 받아 초기화
//    MyClass(int a = 0, int b = 0) : m_a(a), m_b(b) {}
//
//    // 정보 출력 함수
//    void showMyClass() {
//        std::cout << m_a << ", " << m_b << ", " << m_name << std::endl;
//    }
//};
//
//int main()
//{
//    //MyClass obj{ 1, 2, "홍길동" };    // 현재 생성자에 문자열을 받을 수 없으므로 주석 처리
//    //obj.showMyClass();
//
//    //MyClass obj2;      // 디폴트 매개변수 덕분에 기본 생성자를 사용하여 객체 생성 가능
//    //obj2 = obj;         // num = 10; 디폴트 대입 연산자
//    //obj2.showMyClass();
//
//    MyClass obj{ 10, 20 };
//    MyClass obj2{ 30, 40 };
//    MyClass obj3 = obj + obj2;      // 오류!!! 연산자 오버로딩이 없기 때문에 오류 발생!!
//
//    return 0;
//}