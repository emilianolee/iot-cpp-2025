///*
//	STL(Standard Template Library)
//	container: 객체를 저장하고 관리하는 자료구조
//	container 종류
//		1. 시퀀스 컨테이너 - 선형적으로 데이터 저장. 순서가 있어야 함 (ex. vector, list, queue)
//		2. 연관 컨테이너 - 일정한 규칙에 따라 저장 (ex. set, multiset, map, multimap
//		3. 컨테이너 어댑터 - 변형
//*/
///*
//	vector
//	- vector.size(): 원소 크기(갯수)를 반환
//	- vector.begin(): 첫 번째 주소를 반환
//	- vector.end(): 마지막 주소의 다음 주소를 반환
//*/
//#include <iostream>
//#include <vector>					// vector 헤더파일 포함
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	vector<int>v1{ 10 };
//	vector<int>v2(5);
//	vector<int>v3 = { 1,2,3,4,5,6 };
//
//	cout << "v size: " << v.size() << endl;
//	cout << "v1 size: " << v1.size() << endl;
//	cout << "v2 size: " << v2.size() << endl;
//	cout << "v3 size: " << v3.size() << endl;
//
//	for (int i = 0; i < 5; i++) {
//		printf("v2[%d]: %d\t", i, v2[i]);
//	}
//	
//	cout << endl;
//	
//	for (auto i : v3) {					// 범위기반 for문 - 인덱스 사용이 불가
//		//cout << v3[i] << endl;
//		cout << i << endl;
//	}
//
//	/* begin(), end()는 iterator(반복자) 타입을 반환한다. (포인터) */
//	cout << "v3의 첫번째 요소값: " << *v3.begin() << endl;				// 포인터기 때문에 간접참조 필수!
//	cout << "v3의 마지막 요소값: " << *v3.end() - 1 << endl;			// 마지막 요소 그 다음 값을 반환하기 때문에 -1 필수!!!
//
//	return 0;
//}
