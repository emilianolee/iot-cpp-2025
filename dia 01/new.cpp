/*
	���� �Ҵ���� ũ�⸦ �Է��ϰ� ���Ҹ� �����Ͽ� ����Ͻÿ�. - c��Ÿ��
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>		// C ��Ÿ�� ������� ����ϱ� ���� �ʿ�
#include <stdlib.h>		// malloc(), free() ����� ���� �ʿ�

int main()
{
	int size; // �迭 ũ�� ���� ����
	int* p;	// ���� �Ҵ� ���� ������

	// ����ڿ��� �迭 ũ�� �Է� ��û
	printf("�迭�� ũ�⸦ �����Ͻÿ� > ");
	scanf("%d", &size);

	// ���� �޸� �Ҵ�
	p = (int*)malloc(size * sizeof(int));

	// ����ڷκ��� ���� �Է¹ޱ�
	printf("%d���� ���� �Է� >> ", size);
	for (int i = 0; i < size; i++) {
		printf("p[%d] = ", i);
		scanf("%d", &p[i]);
	}

	// ����� ���� ���
	printf("�Է��� ���� ���:\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", p[i]);
	}
	printf("\n");

	free(p);

	return 0;
}	

/*
	�޸� ���� �Ҵ� : new - delete
	�ڷ��� ������ = new �ڷ���(ũ��)
	new�� �����ڸ� ȣ���Ѵ�. ��, new�� ��ü�� ������Ų��.
	��ü�� �����ϱ� ���ؼ��� ������ ȣ���� �־�� �Ѵ�.
*/

#include <iostream>
using namespace std;

int main()
{
	int size;
	int* pary;

	//int* pn = new int;		// �� ������ int ũ��� ���� �Ҵ��� �޴´�.
	//delete pn;

	cout << "ũ�� > ";
	cin >> size;

	pary = new int[size];
	pary[0] = 1;
	pary[1] = 2;
	*(pary + 2) = 3;	// pary[2] = 3 �� ����

	cout << pary[0] << ", " << pary[1] << ", " << *(pary + 2) << endl;

	delete[] pary;

	return 0;
}

/*
	new�� ������ ȣ���̵ǹǷ� �ʱ�ȭ�� �����ϴ�.
	������ - ��ü�� �����ϰ�, �ʱ�ȭ��Ű�� ����� ������ Ư���� �޼����̴�.
*/

#include <iostream>

int main()
{
	int* parr;

	// �̸����� �迭 ��ü �����ϰ� 10, 20, 30���� �ʱ�ȭ�Ѵ�.
	parr = new int[3] {10, 20, 30};		// parr = new int[3] = {10, 20, 30};
	
	std::cout << parr[0] << ", " << parr[1] << ", " << parr[2] << std::endl;
	delete[] parr;

	return 0;
}