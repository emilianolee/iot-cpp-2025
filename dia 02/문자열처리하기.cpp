///*
//	문자열 처리하기
//	- 문자열 리터럴이란 큰따옴표("")로 감싼 문자열 상수를 의미
//		- 문자열 리터럴은 "읽기 전용(Read-Only) 메모리"에 저장되며, 직접 수정 불가
//		- const char* 을 사용하면 문자열 리터럴을 안전하게 다룰 수 있음(const가 없으면 문자열 수정 시 오류 발생)
//		- 문자열을 수정하려면 char배열 또는 동적 할당을 사용헤야함
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// 1. 문자열 리터럴을 배열에 초기화
//	char str[20] = "홍길동";	// 크기가 20인 문자 배열 str을 선언하고 "홍길동"으로 초기화
//	cout << str << endl;
//
//	// 2. 문자열 복사하기
//	char str2[20];		// 크기가 20인 문자 배열 str2 선언
//	//str2 = "김영희";	// 오류! Cuz, 문자열 리터럴을 배열에 직접 대입할 수 없음 
//	strcpy(str2, "김영희");	// strcpy()를 사용해 "김영희"를 str2에 복사 
//	cout << str2 << endl;
//
//	// 3. 사용자 입력 받기
//	//char* str3;	// 오류! Cuz 포인터 변수 선언만 하면 메모리를 할당 받지 않아서 사용 불가능
//	char str3[100];	// 크기가 100인 문자 배열 str3 선언
//	cout << "이름 입력 > ";
//	cin >> str3;
//	cout << str3 << endl;
//
//	// 4. const char*을 사용한 문자열 처리
//	const char* name;	// name은 문자열 리터럴을 가리키는 포인터
//	name = "김철수";	// "김철수"는 문자열 리터럴이므로, name이 이를 가리킬 수 있음
//	cout << name << endl;
//
//
//	return 0;
//}