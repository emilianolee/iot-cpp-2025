/*
	������۷��� : ����� ���� �����ϴ�
*/

#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	//int& ref = n;
	const int& ref = 10;		// ������۷����� �����ϸ� ���ͷ��� ������ �� �ִ�.
								// �ӽð�ü�� ������ �� �ִ� ������ �����ȴ�.
	
	cout << "ref: " << ref << endl;
	
	return 0;
}

/*
	������۷���2 - ����� ��� : �Ϲ� ����
*/
#include <iostream>

int func(int &anum)
{
	anum++;
	return anum;
}

int main()
{
	int num = 10;
	const int& res = func(num);	// int res = func(num);���� �ص� ������� But, int& res = func(num)�� �Ұ���.
								// func�� �� ����� ���ϸ� ������� ����.
								// �Ϲݺ��� or ���(const)�� ���� �� ����

	std::cout << res << std::endl;

	return 0;
}

/*
	������۷���3 - ����� ���: ���۷���
*/

#include <iostream>

int& func(int& ref) {		// ���۷��� 2�� �޸� ���� Ÿ����.
	ref++;
	return ref;		//lvalue
	//return ref++;		// rvalue
}
int main()
{
	int n = 10;
	//int& ref = func(n);		// ����ϴ� Ÿ�԰� ������ ���� �ȶ�
	int ref = func(n);			// �Ϲݺ��� or ������ �޾Ƶ� ��

	std::cout << ref << std::endl;

	return 0;
}