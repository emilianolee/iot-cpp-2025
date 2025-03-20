///*
//	변환 생성자(Conversion Constructor)
//	- 다른 타입의 객체로 변환될 때 호출되는 생성자
//	- 입력을 한 개만 가짐(단일 매개변수)
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int val;		// 정수형 멤버 변수
//public:
//	// 변환 생성자: 정수(int)를 받아 MyClass 객체로 변환
//	MyClass(int value) {
//		printf("변환 생성자 호출!!!\n");
//		val = value;	// 멤버 변수 초기화
//	}
//
//	// 객체의 값을 출력하는 함수
//	void printMyClass() {
//		printf("value: %d\n", val);
//	}
//};
//
//int main()
//{
//	MyClass obj = 10;		// 변환 생성자 호출 -> MyClass obj(10); 과 동일한 동작
//	obj.printMyClass();		// obj의 값 출력
//
//	MyClass obj2(10);		// 일반적인 생성자 호출 -> MyClass obj2 = 10; 과 동일한 동작
//	obj.printMyClass();		// obj2의 값 출력
//
//	return 0;
//}
//
///*
//	변환 생성자(Conversion Constructor) 2
//*/
//#include <iostream>
//
//class Time {
//private:
//	int hour;
//	int min;
//	int sec;
//public:
//	// 디폴트 생성자
//	Time() {}
//	
//	// 변환생성자 : 초 단위(int)를 받아 시, 분, 초로 변환
//	Time(int abssec) {
//		hour = abssec / 3600;	// 전체 초를 3600으로 나누어 hour 계산
//		min = (abssec / 60) % 60;	// 전체 초를 60으로 나누고 60으로 나눈 나머지를 min으로 저장
//		sec = abssec % 60;		// 초는 60으로 나눈 나머지 값
//	}
//
//	// 시간 출력 함수
//	void printTime() {
//		printf("현재 시간은 %d시 %d분 %d초 입니다.", hour, min, sec);
//	}
//};
//
//int main()
//{
//	Time now = 9999; // 변환 생성자 호출 -> Time now(9999); 와 같은 결과
//	now.printTime();	// 변환된 시간 출력
//
//	return 0;
//}
//
///*
//	변환 생성자(Conversion Constructor) 3
//	- explicit 키워드를 사용하여 묵시적 변환을 방지할 수 있음
//*/
//
//#include <iostream>
//
//class MyClass {
//private:
//	int val;		// 정수 값을 저장하는 멤버 변수
//public:
//	// 변환 생성자
//	explicit MyClass(int value){		// explicit를 통해 묵시적 변환을 방지
//		printf("변환 생성자 호출!!!\n");
//		val = value;
//	}
//
//	// 객체에 값을 출력하는 함수
//	void printMyClass() {
//		printf("value: %d\n", val);
//	}
//};
//
//int main()
//{
//	//MyClass obj = 10;		// 오류 발생(형태의 변환이 허용되지 않음)! explicit 키워드로 인해 묵시적 변환이 금지됨
//	//obj.printMyClass();
//	
//	// 명시적 변환을 통해 객체 생성
//	MyClass obj2{ 10 };	// 중괄호 초기화 방식 사용(explicit이 있어야만 허용됨)
//	obj2.printMyClass();
//
//	return 0;
//}