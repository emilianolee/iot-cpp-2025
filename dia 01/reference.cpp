/*
	�ٸ� �Լ��� ����� ���������� ���� �ٲٴ� ���1
*/
#include <iostream>
using namespace std;

void chFunc(int* _n) {
	*_n = 20;
}

int main()
{
	int n = 10;

	cout << "ȣ�� �� n: " << n << endl;

	chFunc(&n);

	cout << "ȣ�� �� n: " << n << endl;

	return 0;
}

/*
	�ٸ� �Լ��� ����� ���������� ���� �ٲٴ� ���2
	���۷��� - �� �ٸ� �̸�, ������ �ʴ� ������, �޸𸮸� ������� �ʴ´�.
*/

#include <iostream>
using namespace std;

void chFunc(int& rn) {		// ���۷���(��������) ����
	rn = 20;
}

int main()
{
	int n = 10;
	cout << "ȣ���� n: " << n << endl;

	chFunc(n);

	cout << "ȣ���� n: " << n << endl;

	return 0;
}

/*
	���۷��� - ����� ���ÿ� �ݵ�� �ʱ�ȭ�ؾ߸� �Ѵ�.
*/
#include <iostream>
using namespace std;

int main()
{
	int num = 10, num2 = 100;
	int& ref = num;			// num�� �޸� ������ ref��� ������ �ٴ´�. 
	int* pn = &num;			
	int& rref = ref;
	rref = num2;
	cout << rref << ", " << num2 << endl;
	//int& rref;
	//rref = ref;

	num++;
	ref++;
	(*pn)++;

	cout << "num++: " << num << endl;
	cout << "num++: " << num << endl;
	cout << "*(pn)++: " << *pn << endl;

	cout << "&num: " << &num << endl;
	cout << "&ref: " << &ref << endl;

	return 0;
}