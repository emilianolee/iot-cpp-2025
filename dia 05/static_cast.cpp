///*
//	static_cast 1
//	- 기본 자료형의 형변환으로 컴파일 타임에 타입을 변환
//	- static_cast<type-id>(expression)
//*/
//#include <iostream>
//
//int main()
//{
//	char ch;
//	int i = 100;
//	float f = 3.14;
//	double d;
//
//	ch = static_cast<char>(i);					// int --> char 변환
//	std::cout << ch << std::endl;
//	ch = (char)i;
//	std::cout << ch << std::endl;
//
//	d = static_cast<double>(f);
//	std::cout << d << std::endl;
//
//	i = static_cast<int>(d);
//	std::cout << i << std::endl;
//
//	std::cout << typeid(ch).name() << std::endl;
//	std::cout << typeid(d).name() << std::endl;
//
//	return 0;
//}

///*
//	static_cast 2
//*/
//#include <iostream>
//
//class Base {
//public:
//	void func1() { std::cout << "Base::func1()" << std::endl; }
//};
//
//class Derived :public Base {
//public:
//	void func() { std::cout << "Derived::func()" << std::endl; }
//	void func1() { std::cout << "Derived::func1()" << std::endl; }
//};
//
//class Derived2 :public Derived {
//public:
//	void func() { std::cout << "Derived::func()" << std::endl; }
//	void func1() { std::cout << "Derived::func1()" << std::endl; }
//};
//
//int main()
//{
//	Base* bptr;
//	Derived dobj;
//	bptr = static_cast<Base*>(&dobj);					// upcasting
//	bptr->func1();
//
//	Base bobj;
//	Derived* dptr;
//	dptr = static_cast<Derived*>(&bobj);				// downcasting
//	dptr->func();
//	dptr->func1();
//
//	Derived2* dptr2 = static_cast<Derived2*>(dptr);
//	dptr2->func();
//	dptr2->func1();
//	
//	return 0;
//}