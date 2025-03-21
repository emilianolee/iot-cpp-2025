///*
//	연산자 오버로딩(다중정의)7
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int x, y;
//public:
//	//기본 생성자 호출
//	MyClass(int a, int b) : x(a), y(b) {
//		printf("생성자 호출!!! \n");
//	}
//	
//	// 복사 생성자 호출
//	MyClass(const MyClass& other) {
//		x = other.x;
//		y = other.y;
//	}
//
//	MyClass add(const MyClass& other){
//		return MyClass(x + other.x, y + other.y);
//	}
//
//	MyClass operator+(const MyClass& other){
//		printf("+ 오버로딩!!!\n");
//		return MyClass(x + other.x, y + other.y);
//	}
//
//	MyClass operator+(int n) {
//		return MyClass(x + n, y + n);
//	}
//
//	void showMyClass() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//};
//
//int main()
//{
//	MyClass obj(10, 20);
//	obj.showMyClass();
//
//	MyClass obj2(20, 30);
//	obj2.showMyClass();
//
//	MyClass obj3 = obj.add(obj2);
//	obj3.showMyClass();
//	
//	MyClass obj4 = obj.operator+(obj3);
//	obj4.showMyClass();
//
//	MyClass obj5 = obj4 + 100;		// obj4.operator+(100);
//	obj5.showMyClass();
//
//	return 0;
//}
//
//// 오버로딩 할 수 없는 연산자 -> ::, ., *, sizeof