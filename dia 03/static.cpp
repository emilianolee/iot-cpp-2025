///*
//	static
//	- Ŭ���� �����.
//	- ��, this �����Ͱ� ����
//	- ��ü���� �����Ѵ�.
//*/
//#include <iostream>
//
//class StaticTest {
//public:
//	int n;						// �Ϲ� ��� ����(��ü���� ���������� ����)
//	static int static_n;		// static �������(��� ��ü�� ����)
//
//	StaticTest();				// ������ ����
//	void print();				// ��� �Լ� ����
//};
//
//// static ��������� Ŭ���� �ܺο��� �ݵ�� �ʱ�ȭ�ؾ� ��
//int StaticTest::static_n = 10;		
//
//StaticTest::StaticTest() {
//	n = 20;					// �Ϲ� ��� ���� �ʱ�ȭ
//	//static_n = 10;		// static ������ ��ü���� �������� �ʱ� ������ �����ڿ��� �ʱ�ȭ �� �ʿ� ����
//}
//
//void StaticTest::print() {
//	std::cout << "Static_n: " << static_n << "\tn: " << n << std::endl;
//}
//
//int main()
//{
//	StaticTest ob1, ob2;	// �ΰ��� ��ü ����
//
//	ob1.print();			// �ʱⰪ ��� (static_n = 10, n = 20)
//	ob2.print();			// ob2�� ���� �� (static_n = 10, n = 20)
//
//	ob2.static_n = 1000;	// static ���� ���� (��� ��ü�� �����)
//	ob2.n = 50;				// ob2�� �Ϲ� ��� ���� ����(ob1���� ���� ����)
//	
//	ob2.print();			// static_n = 1000, n = 50
//	ob1.print();			// ob1�� static_n ���� 1000���� ����� (static�� ��� ��ü�� ����)
//
//	return 0;
//}

///*
//	static2
//*/
//#include <iostream>
//
//class AAA {
//private:
//	static int static_a;	// static ��� ����(��� ��ü�� ����)
//	int n;					// �Ϲ� ��� ����(��ü���� ���������� ����)
//public:
//	AAA(int n);							// ������ ����
//	static void setStatic_a(int a);		// static ��� �Լ� ����
//	void print();						// ��� �Լ� ����
//};
//
//// static ��� ������ Ŭ���� �ܺο��� �ݵ�� �ʱ�ȭ�ؾ� ��
//int AAA::static_a = 100;
//
//// ������ ����
//AAA::AAA(int n) {
//	this->n = n;		// �Ϲ� ��� ���� �ʱ�ȭ
//}
//
//// ��� ���� ��� �Լ�
//void AAA::print() {
//	printf("static_a: %d, n: %d\n", static_a, n);
//}
//
//// static ��� �Լ� ����
//void AAA::setStatic_a(int a) {
//	static_a = a;		// static ��� ������ ���� ����
//	//n = 0;			// ����!! �Ϲ� ��� �������� ���� �Ұ�(������ ���� �߻�)
//}
//
//int main()
//{
//	AAA obj1(10), obj2(20);		// �� ���� ��ü ����
//
//	obj1.print();				// static_a = 100, n = 10
//	obj2.print();				// static_a = 100, n = 20
//
//	obj1.setStatic_a(50);		// static ��� ���� ����(��� ��ü�� �����)
//	obj1.print();				// static_a = 50, n = 10
//
//	return 0;
//}