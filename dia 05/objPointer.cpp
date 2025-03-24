///*
//	객체 포인터(Object Pointer)
//*/
//#include <iostream>
//
//class MyClass {
//public:
//	void showMyClass() {
//		std::cout << "Hello World!!!\n" << std::endl;
//	}
//
//};
//
//int main()
//{
//	MyClass obj;
//	MyClass* ptr;					// MyClass 타입의 객체 포인터 선언
//	ptr = &obj;
//
//	ptr->showMyClass();
//
//	return 0;
//}

///*
//	객체 포인터(Object Pointer)2 - 객체 동적 생성
//*/
//#include <iostream>
//
//class AClass {
//public:
//	void showAClass() {
//		std::cout << "Dynamically created object" << std::endl;
//	}
//};
//
//int main()
//{
//	AClass* ptr = new AClass{};		// 객체 동적 할당
//	ptr->showAClass();
//
//	delete ptr;						// 동적메모리 해제
//
//	return 0;
//}

///*
//	객체 포인터(Object Pointer)3
//*/
//#include <iostream>
//
//class MyClass {
//public:
//	int value;
//	
//	//MyClass() {}; // 기본생성자
//
//	MyClass(int v = 0): value(v){}
//	
//	void showMyClass(){
//		std::cout << "value: " << value << std::endl;
//	}
//};
//
//int main()
//{
//	MyClass* ptr = new MyClass{ 10 };
//	ptr->showMyClass();
//	printf("value: %d\n", ptr->value);
//	
//	delete ptr;
//
//	MyClass obj{};
//	ptr = &obj;
//
//	ptr->showMyClass();						// 역참조 형태1
//	(*ptr).showMyClass();					// 역참조 형태2 - 괄호 잘 써야함. 그래서 형태1을 더 많이 씀!
//	printf("value: %d\n", ptr->value);
//
//	return 0;
//}

///*
//	객체 포인터(Object Pointer)4
//*/
//#include <iostream>
//
//class MyClass {
//public:
//	void show() {
//		std::cout << "Holaa!!\n" << std::endl;
//	}
//};
//
//int main()
//{
//	MyClass* ptr = nullptr;
//	//printf("ptr: %p\n", *ptr);
//	if (ptr != nullptr) ptr->show();
//	else printf("ptr is null!!\n");
//
//	ptr = new MyClass{};
//	ptr->show();
//
//	return 0;
//}

///*
//	객체 포인터(Object Pointer)5 - 상속에서 객체포인터
//	- 부모타입의 포인터로 자식타입의 객체를 가리키면 객체가 부모타입으로 업캐스팅된다.
//*/
//#include <iostream>
//
//class Base {
//public:
//	void show() {
//		printf("Base Class!!!\n");
//	}
//};
//
//class Derived : public Base {				
//public:
//	void show() {
//		printf("Derived Class!!!\n");					// 오버라이딩(재정의)
//	}
//};
//
//int main()
//{
//	Base* bptr = nullptr;
//	Derived* dptr = nullptr;
//
//	Derived obj;				// 파생클래스 객체
//	dptr = &obj;
//	dptr->show();
//
//	bptr = &obj;				// 부모타입의 포인터로 자식타입의 객체를 가리킴(Upcasting)
//	bptr->show();
//	//bptr->Derived::show();
//	
//	return 0;
//}

///*
//	객체 포인터(Object Pointer)6 - 다운캐스팅: 자식 포인터로 부모 객체를 가리킬수 없다.
//*/
//#include <iostream>
//
//class Base {
//public:
//	void show() {
//		printf("Base Class!!!\n");
//	}
//};
//
//class Derived : public Base {
//public:
//	void show() {
//		printf("Derived Class!!!\n");
//	}
//};
//
//int main()
//{
//	Base bobj;
//	Derived* dptr = nullptr;
//	//dptr = &bobj;
//	/*
//	dptr = (Base*) & bobj;
//	dptr->show();
//	*/
//
//	dptr = (Derived*)&bobj;
//	dptr->show();
//
//	return 0;
//}