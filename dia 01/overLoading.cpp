///*
//	함수의 다형성
//	- 함수 오버로딩 : 함수의 다중정의 (C언어에서와는 달리 C++에서는 매개변수의 선언 형태(타입, 갯수 등)가 
//					  다르다면 동일한 이름의 함수정의를 허용)
//	- 함수 오버라이딩 : 함수의 재정의 --> 상속 관계에서 구현
//*/
//#include <iostream>
//using namespace std;
//
//int func() {		// 매개변수가 없음
//	return 10;
//}
//
//int func(char c) {	// char c가 매개변수
//	return c;
//}
//
//int func(int n) {	// int n이 매개변수
//	return 10 + n;
//}
//
//int func(int n1, int n2) {	// int n1, int n2가 매개변수
//	return n1 + n2;
//	}
//
////char func(char c) {	// 함수이름과 매개변수의 형태와 갯수가 같기 때문에 출력이 다르더라도 사용이 불가함
////	return c;
////}
//
//int main()
//{
//	cout << func() << endl;
//	cout << func('a') << endl;	// 정수 형태인 97이 화면에 출력됨
//	cout << func(10) << endl;
//	cout << func(20, 50) << endl;
//
//	return 0;
//}