/*
	����Ʈ �Ű����� : �Է��� ���� �� ����Ʈ �Ű������� ����ȴ�.
*/
#include <iostream>

int func(int num = 20) {
	return num * num;
}

int main()
{
	int res;
	res = func(10);
	std::cout << res << std::endl;			// ��°� : 100

	int res2;
	res2 = func(0);
	std::cout << res2 << std::endl;			// ��°� : 0

	int res3;
	res3 = func();			// ����Ʈ �Ű������� ����ȴ�.
	std::cout << res2 << std::endl;			// ��°� : 400

	return 0;
}

/*
	
*/
#include <iostream>
#include <math.h>
using namespace std;

// default���� ����(����)���� �ۼ��Ѵ�. defalut �Ű����� ������ �ۼ� �� ���� �����ʺ��� ������� �ۼ��ؾ���
int coordinates(int x, int y = 0, int z = 0);		// default �Ű����� 2�� �ۼ��� ���	

int main()
{
	cout << "(10, 20, 30): " << coordinates(10, 20, 30) << endl;
	cout << "(10, 20, def): " << coordinates(10, 20) << endl;
	cout << "(10, def, def): " << coordinates(10) << endl;

	return 0;
}

int coordinates(int x, int y, int z) {
	int res = 0;
	res = pow(x, 2) + pow(y, 2) + pow(z, 2);		// ����
	return sqrt(res);						// ������
}

/*
	�Լ� �����ε��߿��� ����Ʈ �Ű������� �Է��� ���� ������ �Լ� ���ǰ� ���� ��,
	�Է� ���� �Լ� ȣ��� ������ �߻��Ѵ�.
*/
#include <iostream>
using namespace std;

int func(int n = 0) {
	return n * n;
}

int func() {
	return 10;
}

int main()
{
	cout << func(10) << endl;
	//cout << func() << endl;	-> ���� �߻� ����

	return 0;
}