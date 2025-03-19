///*
//	클래스 예제1 - 생성자 없이 setData를 활용한 MyClass 만들기
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class MyClass {
//private:
//	int id;
//	char name[20];
//	int age;
//public:
//	/*MyClass() {};
//
//	MyClass(int real_id, const char real_name[20], int real_age) {
//		id = real_id;
//		// name = real_name;	//배열을 선언한 후에 대입 연산자를 사용하여 값을 직접 할당할 수 없다
//		strcpy(name, real_name);		
//		age = real_age;
//	}*/
//
//	void setData(int real_id, const char real_name[20], int real_age) {		// 문자열에는 꼭 const를 붙여줘야함
//		id = real_id;
//		strcpy(name, real_name);
//		age = real_age;
//	}
//
//	void getData() {
//		std::cout << "나는 MyClass의 인스턴스 입니다.\n";
//		std::cout << "id: " << id << "\tname: " << name << "\tage: " << age << std::endl;
//	}
//};
//
//int main()
//{
//	MyClass obj;
//	obj.setData(1, "김철수", 20);
//	obj.getData();
//	return 0;
//}


///*
//	클래스 예제2 - 생성자를 활용한 MyClass 만들기
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class MyClass {
//private:
//	int id;
//	char name[20];
//	int age;
//public:
//	MyClass() {};
//
//	MyClass(int real_id, const char real_name[20], int real_age) {
//		id = real_id;
//		strcpy(name, real_name);
//		age = real_age;
//	}
// 
//	~MyClass() {}
//
//	void getData() {
//		std::cout << "나는 MyClass의 인스턴스 입니다.\n";
//		std::cout << "id: " << id << "\tname: " << name << "\tage: " << age << std::endl;
//	}
//};
//
//int main()
//{
//	MyClass obj(1, "김철수", 20);
//	obj.getData();
//	return 0;
//}

///*
//	클래스 예제3 - name을 동적 할당으로 받은 MyClass 만들기
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class MyClass {
//private:
//	int id;
//	char* name;		// 동적으로 할당되는 이름 문자열
//	int age;
//public:
//	// 기본 생성자
//	MyClass() {};	
//
//	/*
//		매개변수가 있는 생성자
//		- 객체 생성 시 학생의 ID, 이름, 나이를 초기화한다.
//		- 문자열(name)은 동적 할당하여 복사한다.
//	*/
//	MyClass(int real_id, const char *real_name, int real_age) {
//		id = real_id;
//		name = new char[strlen(real_name) + 1];		// name에 동적으로 메모리 할당(문자열 길이 + 1(null 값 포함)) 
//		strcpy(name, real_name);		// 동적으로 메모리 할당을 받을 때는 위 코드 처럼 공간을 먼저 만들어주고 문자열 복사해야 함.
//		age = real_age;
//	}
//
//	// 소멸자(자동 호출된다 -> 동적할당 경우 말고는 별도로 작성할 필요가 없다)
//	~MyClass() {
//		delete[] name;		// 동적 할당된 name 메모리 해제 -> 해제 시 소멸자 안에 있어야 함
//	}
//
//	void getData() {
//		std::cout << "나는 MyClass의 인스턴스 입니다.\n";
//		std::cout << "id: " << id << "\tname: " << name << "\tage: " << age << std::endl;
//	}
//};
//
//int main()
//{
//	MyClass obj(1, "김철수", 20);
//
//	obj.getData();
//
//	return 0;
//}