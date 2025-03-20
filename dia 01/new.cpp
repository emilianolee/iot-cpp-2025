/*
	동적 할당받을 크기를 입력하고 원소를 저장하여 출력하시오. - c스타일
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>		// C 스타일 입출력을 사용하기 위해 필요
#include <stdlib.h>		// malloc(), free() 사용을 위해 필요

int main()
{
	int size; // 배열 크기 저장 변수
	int* p;	// 동적 할당 받을 포인터

	// 사용자에게 배열 크기 입력 요청
	printf("배열의 크기를 지정하시오 > ");
	scanf("%d", &size);

	// 동적 메모리 할당
	p = (int*)malloc(size * sizeof(int));

	// 사용자로부터 원소 입력받기
	printf("%d개의 원소 입력 >> ", size);
	for (int i = 0; i < size; i++) {
		printf("p[%d] = ", i);
		scanf("%d", &p[i]);
	}

	// 저장된 원소 출력
	printf("입력한 원소 출력:\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", p[i]);
	}
	printf("\n");

	free(p);

	return 0;
}	

/*
	메모리 동적 할당 : new - delete
	자료형 포인터 = new 자료형(크기)
	new는 생성자를 호출한다. 즉, new는 객체를 생성시킨다.
	객체를 생성하기 위해서는 생성자 호출이 있어야 한다.
*/

#include <iostream>
using namespace std;

int main()
{
	int size;
	int* pary;

	//int* pn = new int;		// 힙 영역에 int 크기로 동적 할당을 받는다.
	//delete pn;

	cout << "크기 > ";
	cin >> size;

	pary = new int[size];
	pary[0] = 1;
	pary[1] = 2;
	*(pary + 2) = 3;	// pary[2] = 3 과 같음

	cout << pary[0] << ", " << pary[1] << ", " << *(pary + 2) << endl;

	delete[] pary;

	return 0;
}

/*
	new는 생성자 호출이되므로 초기화가 가능하다.
	생성자 - 객체를 생성하고, 초기화시키는 기능을 가지는 특별한 메서드이다.
*/

#include <iostream>

int main()
{
	int* parr;

	// 이름없는 배열 객체 생성하고 10, 20, 30으로 초기화한다.
	parr = new int[3] {10, 20, 30};		// parr = new int[3] = {10, 20, 30};
	
	std::cout << parr[0] << ", " << parr[1] << ", " << parr[2] << std::endl;
	delete[] parr;

	return 0;
}