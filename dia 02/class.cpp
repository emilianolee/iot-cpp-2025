/*
	class�� �����ϴ� 3����
	1. �������� ������(private, public, protected)
		- private : �ܺο��� ���� �Ұ�
		- public : �ƹ��� �� ���� ����	
		- protected : ��� ���迡�� ��ӹ��� �ڽŸ� ����� �� ����
	2. ������� : �Ӽ� -> �ܺο��� �������� ���ϵ��� private(����Ʈ����)�������� ��������
	3. ����Լ�(�޼���) : ��� -> ����Լ��� ���� ��������� �����ؾ� �ϱ⿡ public �������� ��������	

	ex) �ڳ��� Ŭ����
	�Ӽ�(�������)���δ�? ��, ��, �ٸ�, ����, ����
	���(����Լ�)���δ�? �ڷ� ���� ����, �͸� �޷��� ���
*/

#include <iostream>
using namespace std;

class A {
public:
	int m_num = 0;				// �������(�Ӽ�)

	void set(int num) {
		m_num = num;
	}
	void print() {			// ����Լ�(���, �޼���)
		cout << "���� A Ŭ������ �ν��Ͻ���. " << "num: " << m_num << endl;
	}

};

int main()
{
	A obj;	// AŸ���� ���� a
	// int n;	// intŸ���� ���� n
	obj.print();
	obj.set(10);
	obj.print();

	return 0;
}