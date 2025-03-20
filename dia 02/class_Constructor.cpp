/*
	class - ������(constructor)
 - �����ڴ� Ŭ������ �̸��� �Լ��� �̸��� �����ϴ�.
 - ��ȯ���� ����Ǿ� ���� ������, ������ ��ȯ���� �ʴ´�.
		- �� ����� ����.
 - ������ ȣ��� ��ü�� ����� ����.
 - �ʱ�ȭ ��ɿ� ����Ѵ�.
*/

#include <iostream>

class AClass {
private:
	int n1;
	int n2;
public:
	AClass() {}
	void setData(int num){
		n1 = num;
		n2 = num;
	}
	void getData(){
		std::cout << "���� A Ŭ������ �ν��Ͻ���. " << "n1: " << n1 << std::endl;
		std::cout << "���� A Ŭ������ �ν��Ͻ���. " << "n2: " << n2 << std::endl;
	}
};
int main()
{
	AClass obj;			// �Է��� ���� �����ڴ� �⺻������ �����Ǵ� ����Ʈ �����ڰ� �ֱ⿡ ������ ���� ����
	// AClass obj(100, 200);	// �Է��� �ΰ��� ���� �����ڰ� ���⿡ ������ ��
	obj.setData(10);
	obj.getData();
	obj.setData(20);
	obj.getData();

	return 0;
}

/*
	class - ������(constructor) �� �� ��
	- ���α׷��Ӱ� �����ڸ� �ۼ��ϸ� �� �̻� ����Ʈ �����ڴ� �������� �ʴ´�. 
	- �����ε��� �����ϴ�.
*/

#include <iostream>

class MyClass {
private:
	int m_num1;
	int m_num2;
public:
	// �⺻ ������ -> �ؿ� �Է��� �ΰ� �޴� �����ڸ� ������⿡ �� �⺻ �����ڸ� ���� ������ ������ MyClass obj;�� ������
	MyClass(){}
	
	// �Է��� �ΰ��� �޴� ������ �����
	MyClass(int num1, int num2) {
		m_num1 = num1;
		m_num2 = num2;
	}

	// �Ҹ��� -> �⺻������ �տ� ~ �ٿ��ָ� ��
	~MyClass() {}

	void printData() {
		std::cout << "���� MyClass�� �ν��Ͻ� �Դϴ�.";
		std::cout << "m_num1: " << m_num1 << "    m_num2: " << m_num2 << std::endl;
	}
};

int main()
{
	//MyClass obj;		// �Է��� �ΰ� �޴� �����ڸ� ���� ������� ������ �⺻������ �����Ǵ� ����Ʈ �����ڴ� ��������� �ʴ´�.
	MyClass obj2(100, 200);
	obj2.printData();

	return 0; 
}