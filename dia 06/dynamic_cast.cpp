///*
//	dynamic_cast
//	- 기본 클래스를 참조하는 lvalue를 파생된 클래스에 대한 참조로 변환
//	- 상속관계에서 안전하게 형변환을 지원함			
//	- 업캐스팅 -> 아무 이상없음
//	- 다운캐스팅 -> 다형성을 위해 virtual 메서드가 꼭 있어야함
//*/
//#include <iostream>
//
//class Super {
//public:
//	int n1, n2;
//};
//
//class Sub : public Super {
//public:
//	int n3, n4;
//};
//
//class Sub2 : public Sub {
//public:
//	int n5, n6;
//};
//
//int main()
//{
//	Super* sp;
//	Sub* sup;
//	Sub2* sup2;
//	Sub2 obj{};
//
//	sup2 = dynamic_cast<Sub2*>(&obj);
//	sup = dynamic_cast<Sub*>(sup2);				// upcasting
//	sp = dynamic_cast<Super*>(sup2);			// upcasting
//
//	return 0;
//}


///*
//	dynamic_cast2
//	- dynamic_cast를 이용하여 다운캐스팅 하는 경우는 가상함수가 있어야 함
//*/
//#include <iostream>
//using namespace std;
//
//class Super {
//public:
//	virtual void func() { cout << "Super::func()" << endl; }
//	void func1() { cout << "Super::func1()" << endl; }
//	void fx() { cout << "Super::fx()" << endl; }
//};
//
//class Sub :public Super {
//public:
//	void func() { cout << "Sub::func()" << endl; }
//	void func2() { cout << "Sub::func2()" << endl; }
//	void fx() { cout << "Sub::fx()" << endl; }
//};
//
//int main()
//{
//
//	Super* sp = new Super{};
//	sp->func();
//	sp->func1();
//	sp->fx();
//	cout << "+++++++++++++++++++++ Upcasting +++++++++++++++++++++" << endl;
//	Super* sp2 = new Sub{};
//	sp2->func();
//	sp2->func1();
//	sp2->fx();
//	//sp2->func2();		// 오류!!
//	cout << "+++++++++++++++++++++ downcasting +++++++++++++++++++++" << endl;
//	Sub* sp3 = dynamic_cast<Sub*>(sp2);
//	sp3->func();
//	sp3->func1();
//	sp3->func2();
//	sp3->fx();
//
//	delete sp;
//	delete sp2;
//
//	return 0;
//}