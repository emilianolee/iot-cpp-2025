///*
//	 함수 템플릿 : 여러 자료형을 템플릿 인자로 받아 함수 내부에서 활용한다.
//	 다형성과 재활용
//*/
//#include <iostream>
//
//// 기존의 함수 오버로딩 형식
///*
//int Add(int a, int b) {
//	return a + b;
//}
//
//double Add(double a, double b) {
//	return a + b;
//}
//*/
//
///* 템플릿 적용 */
//template <typename T>		// 템플릿 선언
//T Add(T a, T b) {			// 템플릿 함수 정의
//	return a + b;
//}
//
//int main()
//{
//	std::cout << Add(10, 20) << std::endl;		// 정수형 템플릿 함수 호출
//	std::cout << Add(1.1, 2.2) << std::endl;	// 실수형 템플릿 함수 호출
//
//	return 0;
//}
//
///*
//	템플릿 2
//	- 템플릿은 선언과 함수정의가 분리될 수 없다.
//*/
//#include <iostream>
//using namespace std;
//
//// 일반적인 템플릿 함수 정의
//template <typename T>		// 템플릿 선언
//T func(T a, T b) {			// 템플릿 함수 정의
//	cout << "type: T" << endl;
//	return a + b;
//}
//
//// 특정한 타입(int)에 대한 템플릿 특수화
//template <>					// 템플릿 특수화 -> 템플릿 일반화 중 특별한 타입을 처리할 경우 사용
//int func<int>(int a, int b) {
//	cout << "type: <int>" << endl;
//	return a + b;
//}
//
//int main()
//{
//	cout << func(10, 20) << endl;				// int 타입에 대한 특수화 적용
//	cout << func(10.5, 20.5) << endl;			// 일반 템플릿 적용
//	
//	cout << func<double>(10.1, 20.2) << endl;	// 명시적 템플릿 타입 지정
//	cout << func<int>(10, 10) << endl;			// 명시적 특수화 적용
//
//	return 0;
//}
//
///*
//	템플릿 3 - 템플릿의 typename이 여러개인 경우
//*/
//#include <iostream>
//using namespace std;
//
//// 두개의 서로 다른 타입을 받을 수 있는 템플릿 함수
//template <typename T, typename T2>
//void func(T a, T2 b) {
//	cout << a << endl;
//	cout << b << endl;
//}
//
//int main()
//{
//	func(10, 3.14);									// int와 double 타입의 혼합
//	func("Template", 3.14);							// const char*와 double 타입 혼합
//	func<const char*, double>("Hola", 3.1415);		// 명시적 타입 지정
//
//	return 0;
//}
//
///*
//	템플릿4 - 클래스 템플릿
//*/
//#include <iostream>
//
//// 클래스 템플릿 선언 및 정의
//template <typename T>
//class CTemplate {
//private:
//	T data;
//public:
//	CTemplate(T d){
//		data = d;
//	}
//	T getData(){
//		return data;
//	}
//};
//
//int main()
//{
//	CTemplate<int> obj(100);			// int 타입 클래스 인스턴스 생성
//	printf("data: %d", obj.getData());
//
//	CTemplate<std::string> obj2("클래스 템플릿 테스트");		// std::string 타입 인스턴스 생성
//	std::cout << obj2.getData() << std::endl;
//
//
//	return 0;
//}
//
///*
//	템플릿5 - 클래스 템플릿 특수화
//*/
//#include <iostream>
//
//// 일반적인 클래스 템플릿
//template <typename T>
//class CTest {
//private:
//	T num;
//public:
//	CTest(T n): num(n){}
//	T getData() {
//		return num;
//	}
//};
//
//// 특정 타입(char)에 대한 클래스 템플릿 특수화
//template<>						// 클래스 템플릿의 특수화
//class CTest<char> {
//private:
//	char data;
//public:
//	CTest(char d): data(d) {}
//	char getData() {
//		return data;
//	}
//};
//
//int main()
//{
//	CTest<int> obj(10);			// int 타입의 클래스 인스턴스 생성(클래스 템플릿은 인스턴스 생성시 typename을 반드시 작성해야함)
//	std::cout << obj.getData() << std::endl;
//	
//	CTest<char> obj2('a');		// char 타입의 클래스 인스턴스 생성
//	std::cout << obj2.getData() << std::endl;
//
//	return 0;
//}
//
///*
//	템플릿6 - 템플릿 매개변수
//*/
//#include <iostream>
//using namespace std;
//
//// 템플릿 클래스: 배열 크기를 매개변수로 받음
//template <typename T, int sz>
//class CTest {
//private:
//	T ary[sz];
//public:
//	T& operator[](int idx) {				// 배열의 인덱스 접근 연산자 오버로딩(쓰기 가능 인덱스)
//		if (idx < 0 || idx >= sz) {
//			cout << "Error" << endl;
//			exit(1);
//		}
//		return ary[idx];
//	}
//
//	void getData() {
//		for (int i = 0; i < sz; i++) {
//			cout << ary[i] << endl;
//		}
//	}
//};
//
//int main()
//{
//	CTest<int, 5> obj;			// 크기가 5인 int 배열 템플릿 클래스 생성
//	obj.operator[](0) = 10;
//
//	obj[1] = 20;
//	obj[2] = 30;
//	obj[3] = 40;
//	obj[4] = 50;
//
//	obj.getData();		// 배열 데이터 출력
//
//	cout << obj[0] << endl;
//	return 0;
//}