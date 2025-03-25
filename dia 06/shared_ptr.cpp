///*
//	스마트 포인터2: shared_ptr <-> make_shared
//	- shared_ptr
//	  - 참조 카운트를 통해 객체의 소유권을 공유한다. 
//	  - 여러개의 shared_ptr이 객체를 참조할 수 있으며 레퍼런스 카운트가 0이되면 메모리가 자동 해제된다.
//	- make_shared 
//	  - 객체와 참조 카운트를 하나의 메모리블록에 같이 할당시킨다. 
//	  - shared_ptr을 생성하는 함수이다
//*/
//
//#include <iostream>
//using namespace std;
//
//class MyClass {
//public:
//	MyClass() { std::cout << "MyClass Constructor!!" << std::endl; }
//	~MyClass(){ std::cout << "MyClass Destructor!!" << std::endl; }
//	void func() { std::cout << "Hi Shared_ptr" << std::endl; }
//};
//
//int main()
//{
//	shared_ptr<MyClass>ptr = make_shared<MyClass>();
//	shared_ptr<MyClass>ptr2 = ptr;
//	printf("ptr과 ptr2는 동일한 객체를 가리킨다. 즉, 공유한다\n");
//
//	ptr2->func();
//
//	return 0;
//}