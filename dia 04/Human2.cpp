///*
//	step4.
//	char �������� name, intŸ���� age, ����� ����ϴ� showHuman()�� ������ Human Ŭ������ �ִ�.
//	name �� �����Ҵ��ϰ� ���� 30, �̸� ȫ���� man ��ü�� �����Ͻÿ�.
//	man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
//	xman = man �� �����ϰ� ����ÿ�.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char* name;
//	int age;
//public:
//	Human () {}
//	// ������
//	Human(const char* n, int a) {
//		printf("������ ȣ��!!!\n");
//		name = new char[strlen(n) + 1];
//		strcpy(name, n);
//		age = a;
//	}
//	// ���� ������
//	Human(const Human& other) {
//		printf("���� ������ ȣ��!!!\n");
//		name = new char[strlen(other.name) + 1];
//		strcpy(name, other.name);
//		age = other.age;
//	}
//
//	// ����Լ�����
//	void showHuman() {
//		printf("�̸�: %s, ����: %d\n", name, age);
//	}
//	const Human& operator=(const Human& rhs);
//};
//
//const Human& Human::operator=(const Human& rhs) {
//	if (this != &rhs) {
//		//delete[] name;
//		printf("������ �����ε�!!\n");
//		name = new char[strlen(rhs.name) + 1];
//		strcpy(name, rhs.name);
//		age = rhs.age;
//	}
//	return *this;
//}
//
//int main()
//{
//	Human man("ȫ��", 30);
//	man.showHuman();
//
//	Human copyman(man);
//	copyman.showHuman();
//
//	Human xman;
//	xman = copyman;
//	xman.showHuman();
//
//	return 0;
//}