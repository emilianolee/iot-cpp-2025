/*
	cin - �Է��� ����ϴ� ��ü(C������ scanf!)
*/
#include <iostream>
using namespace std;

int main()
{
	int inVal;
	cout << "���� �Է� > ";
	cin >> inVal;
	cout << "inVal: " << inVal << endl;

	return 0;
}

/*
	cin, cout ����
*/
#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;

	cout << "ù ��° ���� �Է�: ";
	cin >> num1;

	cout << "�� ��° ���� �Է�: ";
	cin >> num2;

	int res = num1 + num2;
	cout << "���� ���: " << res << endl;

	return 0;
}