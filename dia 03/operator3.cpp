///*
//	연산자 오버로딩(다중정의)5 - 멤버 함수 연산자 오버로딩 : p1 operator연산자(p2)	ex) p1 operator + (p2)
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int value;
//public:
//	// 생성자: 초기값을 받아 value 설정
//	MyClass(int n) : value(n){}
//
//	// 연산자 오버로딩 + 연산자 오버로딩
//	MyClass operator+(const MyClass& other) {
//		printf("+ 오버로딩!!!\n");
//		return MyClass(value + other.value);		// 두객체의 value를 더한 새로운 객체 반환
//	}
//
//	// 변수 값 출력 함수
//	void showMyClass() {
//		printf("vlaue: %d\n", value);
//	}
//};
//
//int main()
//{
//	// 초기값을 가지는 객체 생성
//	MyClass obj(10);			
//	obj.showMyClass();
//	
//	// obj를 복사해서 새로운 객체 obj2 생성
//	MyClass obj2(obj);			
//	obj2.showMyClass();
//
//	// obj를 복사해서 새로운 객체 obj3 생성
//	MyClass obj3 = obj2;		
//	obj3.showMyClass();
//
//	// 객체 연산 수행: obj + obj2 + obj3 (즉 10 + 10 + 10)
//	MyClass obj4 = obj + obj2 + obj3;
//	/*
//		연산 과정:
//		obj + obj2 실행 -> 새로운 객체(값: 20) 반환
//		반환된 객체(값: 20) + obj3 실행 -> 새로운 객체(값: 30) 반환 -> obj4에 저장
//	*/
//
//	obj4.showMyClass();
//
//	return 0;
//}

///*
//	연산자 오버로딩(다중정의)6
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int x, y;		// 두개의 정수형 멤버변수
//public:
//	//기본 생성자 호출
//	MyClass(int a, int b) : x(a), y(b) {
//		printf("생성자 호출!!! \n");
//	}
//	
//	// 복사 생성자 호출(기본 복사 생성자)
//	MyClass(const MyClass& other) {
//		x = other.x;
//		y = other.y;
//	}
//
//	// add() 함수: 두 객체의 값을 더한 새로운 객체 반환
//	MyClass add(const MyClass& other){
//		return MyClass(x + other.x, y + other.y);
//	}
//
//	// + 연산자 오버로딩(객체 간 연산)
//	MyClass operator+(const MyClass& other){
//		printf("+ 오버로딩!!!\n");
//		return MyClass(x + other.x, y + other.y);
//	}
//
//	// + 연산자 오버로딩(정수와 객체 간 연산)
//	MyClass operator+(int n) {
//		return MyClass(x + n, y + n);
//	}
//
//	// 정보 출력 함수
//	void showMyClass() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//};
//
//int main()
//{
//	// 객체 생성 및 초기값 설정
//	MyClass obj(10, 20);
//	obj.showMyClass();
//
//	MyClass obj2(20, 30);
//	obj2.showMyClass();
//
//	// add() 함수 사용(명시적 함수 호출)
//	MyClass obj3 = obj.add(obj2);
//	obj3.showMyClass();
//	
//	// + 연산자 오버로딩 사용(객체간 연산)
//	MyClass obj4 = obj.operator+(obj3);
//	obj4.showMyClass();
//
//	// + 연산자 오버로딩 사용(객체와 정수 연산)
//	MyClass obj5 = obj4 + 100;		// obj4.operator+(100);
//	obj5.showMyClass();
//
//	return 0;
//}
//
//// 오버로딩 할 수 없는 연산자 -> ::, ., *, sizeof