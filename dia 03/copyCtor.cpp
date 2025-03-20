///*
//	����Ʈ�� �ڵ����� �����޴� ������: ����Ʈ ������, ���� ������, �Ҹ��� ���� �ִ�.
//*/
//
///*
//	���� ������ (copy constructor)
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char m_name[20];		// ������ ũ���� ���� �迭(���� �Ҵ� �ƴ�)
//	int m_age;
//public:
//	// ������
//	Person(const char *name, int age) {
//		printf("Constructor call!!\n");
//		strcpy(m_name, name);
//		m_age = age;
//	}
//
//	// ��� �Լ�(��ü ���� ���)
//	void printPerson() {
//		printf("name: %s, age: %d\n", m_name, m_age);
//	}
//};
//
//int main()
//{
//	Person p("ȫ�浿", 30);	// �⺻ ������ ȣ��
//	p.printPerson();
//
//	Person p2(p);	// ���� ������ ȣ��(�⺻ �����Ǵ� ���� ������ ���)
//	p2.printPerson();
//
//	Person p3(p);	// ���� ������ ȣ��2 (�⺻ �����Ǵ� ���� ������ ���)
//	p3.printPerson();
//
//	return 0;
//}
//
///*
//	���� ������ (copy constructor)2
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char name[20];		// �̸��� ������ ���� �迭(���� ũ��)
//	int age;			// ���̸� ������ ������ ����
//public:
//	// ������
//	Person(const char* name, int age) {
//		printf("Constructor call!!!\n");
//		strcpy(this->name, name);	// �Ű������� ���� name ���� ��� ���� name�� ����
//		this->age = age;			// �Ű������� ���� age ���� ��� ���� age�� ����
//	}
//	
//	// ���������: ��ü�� �ٸ� ��ü�κ��� ����� �� ȣ��� -> ����Ʈ ���� �����ڸ� ��������� �ۼ���
//	Person(const Person& other) {		// ���� �������� �Ű������� �ݵ�� ������ ���·� ����ؾ���(�����ڷ� �����Ͽ� ���ʿ��� ���� ����)
//		printf("Copy Constructor!!!\n");
//		strncpy(this->name, other.name, strlen(other.name) + 1);	// �ٸ� ��ü�� name ���� ����
//		this->age = other.age;		// �ٸ� ��ü�� age ���� ����
//	}
//
//	// ��� �Լ�: ��ü�� ���� ���
//	void printPerson() {
//		printf("�̸�: %s, ����: %d\n", this->name, this->age);
//	}
//};
//
//int main()
//{
//	Person p("ȫ�浿", 20);	// ������ ȣ��
//	p.printPerson();
//
//	Person p2(p);	// ���� ������ ȣ��(�⺻ �����Ǵ� ���� ������ ���)
//	p2.printPerson();
//
//	Person p3(p);	// ���� ������ ȣ��(�⺻ �����Ǵ� ���� ������ ���)
//	p3.printPerson();
//
//	return 0;
//}
//
///*
//	���� ������ (copy constructor)3 - ���� ����(deep copy)
//	- ���� ����� ���� �Ҵ�� ��ü�� ������ ��, ���ο� �޸𸮸� �Ҵ��Ͽ� ������ �����ؾ� ��
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char* m_name;		// �̸��� ������ ���� �Ҵ�� ���ڿ� ������
//	int m_age;			// ���̸� ������ ������ ����
//public:
//	// ������
//	Person(const char* name, int age) {
//		printf("constructor call!!!\n");
//		m_name = new char[strlen(name) + 1];	// ���ڿ� ũ�⸸ŭ ���� �Ҵ�
//		strcpy(m_name, name);	// ���ڿ� ����
//		m_age = age;	// ���� �� ����
//	}
//
//	// ���� ���� ������ : ���ο� �޸𸮸� �Ҵ��Ͽ� ������ �����͸� ����
//	Person(const Person& other) {
//		printf("copy constructor!!\n");
//		m_name = new char[strlen(other.m_name) + 1];		// ���ο� �޸� �Ҵ� (���� ����)	
//		strncpy(m_name, other.m_name, strlen(other.m_name)+1);	// ���ڿ� ����
//		m_age = other.m_age;	// ���̰� ����
//	}
//
//	// �Ҹ���
//	~Person() {
//		delete[] m_name;
//	}
//
//	// ��ü ���� ��� �Լ�
//	void printPerson() {
//		printf("name: %s, age: %d\n", m_name, m_age);
//	}
//};
//
//
//int main()
//{
//	Person p("ȫ�浿", 30); // ������ ȣ��
//	p.printPerson();	// p ��ü ���� ���
//
//	Person p2(p);	// ���� ���� ������ ȣ��(p�� �����͸� p2�� ����)
//	p.printPerson(); // p2 ��ü ���� ���
//
//	Person p3(p);	// ���� ���� ������ ȣ��(p�� �����͸� p3�� ����)
//	p.printPerson(); // p3 ��ü ���� ���
//
//	return 0;
//}