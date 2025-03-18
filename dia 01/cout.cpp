///*
//	std::cout << 은 출력!
//	std::endl 은 개행(줄바꿈)!
//*/
//#include <iostream>
//using namespace std;		// std를 활용한 객체를 불러오면 std 안써도 됨!
//
//int main()
//{
//	int num = 100;
//	char str[100] = "홍길동";
//	double db = 3.14;
//
//	std::cout << "abcdefg";			// abcdefg100이 출력됨. << std::endl(개행)이 없기 때문!		
//	std::cout << num << std::endl;
//	std::cout << str << std::endl;
//	cout << db << endl;				// using namespace std; 를 선언했기에 std:: 생략이 가능함.
//
//	return 0;
//}

///*
//	cout - 출력을 담당하는 객체
//*/
//#include <iostream>
//
//int main()
//{
//	int num = 100;		// C 스타일 변수 선언
//	int num2(200);		// C++ 스타일 변수 선언
//
//	std::cout << num << std::endl;
//	std::cout << num2 << std::endl;
//
//	return 0;
//}