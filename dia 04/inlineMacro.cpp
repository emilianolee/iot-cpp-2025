///*
//    Inline & Macro
//*/
//
//#include <iostream>
//#define ADD(a, b) #a "+" #b // 매크로: 두 정수를 문자열로 변환하고 '+' 기호를 포함하여 문자열 생성
//#define PI 3.14 // 원주율 상수 매크로
//#define MSG(x, y) x #y "z" // 매크로: 문자열 결합을 위해 사용됨
//
//int main()
//{
//    // ADD 매크로: 10과 20을 문자열로 변환하여 "10+20"으로 출력
//    printf("ADD(a,b): %s\n", ADD(10, 20));
//
//    // MSG 매크로: "macro+operatorz" 문자열 생성
//    printf("MSG(x,y,z): %s\n", MSG("macro+", operator));
//
//    return 0;
//}
//
///*
//    매크로는 전처리기가 처리하지만, inline 함수는 컴파일러가 처리한다.
//*/
//#include <iostream>
//
//// 매크로: 주어진 값 x를 두 번 더하는 방식으로 정의
//#define SQUARE(x) ((x)+(x))
//
//// 인라인 함수: 주어진 값 x를 제곱하여 반환
//inline int func(int x) {
//    return x * x;
//}
//
//int main()
//{
//    std::cout << SQUARE(2) << std::endl;	// SQUARE 매크로 출력
//    std::cout << func(2) << std::endl;		// inline 함수 func() 출력
//    return 0;
//}