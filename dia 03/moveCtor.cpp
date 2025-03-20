///*
//	�̵� ������(Move Constructor)
//*/
//#include <iostream>
//
//int main()
//{
//	int n = 10;			// ���� n ���� �� �ʱ�ȭ (lvalue)
//	int& rn = n;		// ������ rn�� n�� ���ε� (lvalue ����)
//	// lvalue �����ڴ� �ݵ�� ���� ����(lvalue)���� ���ε� ����
//	
//	const int& ra = 10;	// const�� ����ϸ� ��� ���� ���� (��� lvalue ����)
//	// �Ϲ������� rvalue(���)�� lvalue �����ڷ� ���� �� ������, const�� ����ϸ� ����
//	// ��, const int&�� rvalue(10) �� ������ �� ����
//
//	int&& rrn = 10;		// rvalue ����(������ ����)
//	// rvalue(�ӽð�)���� ������ �� �ִ� &&������ ���
//	// rvalue ������ �̵� �����ڿ��� �ַ� ����
//
//	std::cout << n << ", " << rn << ", " << ra << ", " << rrn << std::endl;
//
//	return 0;
//}

///*
//	�̵� ������(Move Constructor)2
//	- rvalue reference �� �Ű������� ���� �̵� ������
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char m_name[10];		// �̸� ���� �迭
//	int m_age;				// ���� ���� ����
//public:
//	// (1) �Է� �� �� �޴� ������
//	Human(const char* name, int age){
//		printf("�Է� �ΰ� ������ ȣ��!\n");
//		strcpy(m_name, name);
//		m_age = age;
//	}
//
//	// (2) ���� ������
//	Human(const Human& other) {
//		printf("���� ������ ȣ��!!\n");
//		strncpy(m_name, other.m_name, strlen(other.m_name) + 1);
//		m_age = other.m_age;
//	}
//
//	// (3) �̵� ������ (rvalue ����)
//	Human(Human&& other) noexcept{
//		printf("�̵� ������ ȣ��!!!\n");
//		strncpy(m_name, other.m_name, strlen(other.m_name) + 1);	// �ӽ� ��ü�� �� ����
//		m_age = other.m_age;
//
//		//other.m_name = nullptr;	// ���� ���ڿ��� �ִ� ���� �ʱ�ȭ�ؾ� ������ �迭�̹Ƿ� ���� �Ұ�
//		other.m_age = 0;	// �̵� �� ���� ��ü�� ���� �ʱ�ȭ
//	}
//
//	// (4) ���� ��� �Լ�
//	void printHuman() {
//		printf("�̸�: %s, ����: %d\n", m_name, m_age);
//	}
//};
//
//int main()
//{
//	// (1) �Ϲ� ������ ȣ��
//	Human h("�̿���", 26);
//	h.printHuman();
//
//	// (2) ���� ������ ȣ�� (���� ��ü h�� h2�� ����)
//	Human h2(h);
//	h2.printHuman();
//
//	// (3) �̵� ������ ȣ�� (���� ��ü h�� �̵��Ͽ� h3 ����)
//	Human h3(std::move(h));
//	h3.printHuman();
//	h.printHuman();		// h�� ���� �̵� �� ����Ǿ����� Ȯ�� (���̸� 0���� ������)
//
//	return 0;
//}