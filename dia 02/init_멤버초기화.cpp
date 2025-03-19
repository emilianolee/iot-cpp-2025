/*
	���� �ʱ�ȭ - ��� �ʱ�ȭ
	1. ��� ��� ����
	2. ���۷��� ��� ����
	3. ��ü�� ����� ������ ���
*/

#include <iostream>

// 1. ��� ��� ���� (const)
class ConstClass {
private:
	int m_value;		// �Ϲ� ��� ����(�ʱ�ȭ ��� ���� ����)
	const int m_value2;	// ��� ��� ����(�ݵ�� ����� ���ÿ� �ʱ�ȭ �ʿ�)
public:
	// �����ڿ��� ��� �ʱ�ȭ ����Ʈ(: m_value2(value))�� ����Ͽ� const ��� ���� �ʱ�ȭ
	ConstClass(int value, int value2) : m_value2(value) { 
		m_value = value;	// �Ϲ� ������ ������ ���ο��� �ʱ�ȭ ����
	}
	void showValue() {
		printf("m_value: %d, m_value2: %d\n", m_value, m_value2);
	}
};

// 2. ���۷��� ��� ���� (������)
class RefClass {
private:
	int& ref;			// ������ ��� ����(��ü�� ������ �� �ݵ�� �ʱ�ȭ �Ǿ�� ��)
public:
	// �ݷ� �ʱ�ȭ�� ���� �����ڰ� ������ ���(r)�� �ʱ�ȭ
	RefClass(int& r):ref(r) {}
	void showValue() {
		printf("ref: %d\n", ref);
	}
};

// 3. ��ü�� ����� ������ ���
class Position {
private:
	int m_x;
	int m_y;
public:
	// Position Ŭ������ ������
	Position(int x, int y) { 
		printf("Position ������!!\n");
		m_x = x; m_y = y; 
	}
	void getData() {
		printf("m_x: %d, m_y: %d\n", m_x, m_y);
	}
};

// Position Ŭ������ ����� ������ ObjClass
class ObjClass {
private:
	Position pos;				// Position ��ü ��� ����
public:
	// ObjClass�� �����ڿ��� ��� �ʱ�ȭ ����Ʈ(: pos(x,y))�� ����Ͽ� Position ��ü�� �ʱ�ȭ
	ObjClass(int x, int y) : pos(x, y) { 
		printf("ObjClass constructor!!\n"); 
	}

	void showValue() {
		pos.getData();
	}
};

int main()
{
	// 1. ConstClass ��ü ����
	ConstClass obj(10, 20);
	obj.showValue();

	// 2. RefClass ��ü ����
	int n = 50;
	RefClass obj2(n);
	obj2.showValue();

	std::cout << "=========================================" << std::endl;

	// 3. ObjClass ��ü ���� (���������� Position ��ü ����)
	ObjClass o(3, 6);
	o.showValue();

	return 0;
}