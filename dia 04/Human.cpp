///*
//	step3
//	char �������� name, intŸ���� age, ����� ����ϴ� showHuman()�� ������ Human Ŭ������ �ִ�.
//	name �� �����Ҵ��ϰ� ���� 30, �̸� ȫ���� man ��ü�� �����Ͻÿ�.
//	man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char* name;
//	int age;
//public:
//	// ������
//	Human(const char* n, int a) {
//		printf("������ ȣ��!!!\n");
//		name = new char[strlen(n) + 1];
//		strcpy(name, n);
//		age = a;
//	}
//	
//	// ���������
//	Human(const Human& other) {
//		printf("���� ������ ȣ��!!!\n");
//		name = new char[strlen(other.name) + 1];
//		strncpy(name, other.name, strlen(other.name) + 1);
//		age = other.age;
//	}
//	
//	// �Ҹ���
//	~Human() {
//		printf("�Ҹ��� ȣ��!!!\n");
//		delete[] name;
//	}
//
//	// ����Լ�����
//	void showHuman() {
//		printf("�̸�: %s, ����: %d\n", name, age);
//	}
//};
//
//int main()
//{
//	Human man("ȫ��", 30);
//	man.showHuman();
//
//	Human copyman(man);
//	copyman.showHuman();
//
//	return 0;
//}