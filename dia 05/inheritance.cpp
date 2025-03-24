///*
//	 상속(Inheritance)
//	 - 상속 이전까지의 접근 제한자는 private, public
//	 - 상속에서는 protected 접근 제한자 추가
//	 - is a(무엇은 무엇이다. 관계의 측면!), has a(소유의 측면!) 관계가 성립해야 한다.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class Human {						// 부모 클래스, 기초 클래스, 슈퍼 클래스, 베이스 클래스	
//private:
//	char name[20];
//	int age;
//public:
//	Human(const char*, int);		// 외부에서 생성했기 때문에 type만 작성
//	void getData();					// 외부에서 생성했기 때문에 type만 작성
//};
//
//class Student : public Human {		// 자식 클래스, 파생 클래스, 서브 클래스, 드라이버드 클래스
//private:
//	int stdID;
//public:
//	// 상속자
//	Student(const char* name, int age, int stdID);
//	
//	void showStudent();
//};
//
//// 외부에서 선언
//Human::Human(const char* aname, int aage){
//	strcpy(name, aname);
//	age = aage;
//}
//
//void Human::getData(){				// 외부에서 출력함수 선언시 'type 클래스이름::선언함수이름' 순으로 와야함
//	std::cout << "이름: " << name << "\t나이: " << age << std::endl;
//}				
//
///* 상속받은 멤버들은 상속한 부모 클래스의 생성자에서 초기화를 한다 */
//Student::Student(const char* aname, int aage, int astdID) : Human(aname, aage){			// 콜론 초기화로 부모 객체 생성 준비
//	//strcpy(name, aname);			// 부모의 객체가 미리 생성 되어있어야 자식 객체 생성 가능 - 사용 x
//	//age = aage;					// 부모의 객체가 미리 생성 되어있어야 자식 객체 생성 가능 - 사용 x
//	stdID = astdID;
//}
//
//void Student::showStudent() {
//	//std::cout << "이름: " << name << "\t나이: " << age << std::endl;		// 자식 클래스에서 부모클래스로 접근하면 오류 발생
//	std::cout << "학번: " << stdID << std::endl;
//}
//
//int main()
//{
//	Human h("홍길동", 25);
//	h.getData();
//
//	Student h2{ "임꺽정", 30, 202503 };
//	h2.getData();
//	h2.showStudent();
//
//	return 0;
//}

///*
//	 상속(Inheritance)2
//	 - protected 접근 제어문: 상속받은 자식이 접근 가능하게 해줌
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class Human {
//protected:
//	char name[20];
//	int age;
//public:
//	Human(const char* aname, int aage) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void getData() {
//		cout << "이름: " << name << "\t나이: " << age << endl;
//	}
//};
//
//
//class Student : public Human {
//private:
//	int stdID;
//public:
//	Student(const char* aname, int aage, int astdID) : Human(aname, aage) {
//		stdID = astdID;
//	}
//	void showStudent() {
//		std::cout << "이름: " << name << "\t나이: " << age << std::endl;		// 자식 클래스에서 부모클래스로 접근하면 오류 발생
//		std::cout << "학번: " << stdID << std::endl;
//	};
//};
//
//int main()
//{
//	Human h("홍길동", 25);
//	h.getData();
//
//	Student h2{ "임꺽정", 30, 202503 };
//	h2.showStudent();
//
//	return 0;
//}

///*
//	상속(Inheritance)3 - 상속관계에서 이니셜라이즈 사용하기
//*/
//#include <iostream>
//
//class Car {
//private:
//	int gasolineGauge;
//public:
//	Car(int ag) : gasolineGauge(ag){}				// 콜론 초기화
//	int getGasGauge() {
//		return gasolineGauge;
//	}
//};
//
//class HybridCar : public Car {
//private:
//	int electricGauge;
//public:
//	HybridCar(int ag, int ae): Car(ag), electricGauge(ae){}
//	int getElecGauge() {
//		return electricGauge;
//	}
//};
//
//class HybirdWatercar : public HybridCar {
//	int waterGauge;			// 접근제어자 생략시 자동으로 private 선언
//public:						// public은 생략 불가
//	HybirdWatercar(int ag, int ae, int aw): HybridCar(ag, ae), waterGauge(aw) {}
//	void showGauge() {
//		std::cout << "잔여 가솔린: " << getGasGauge() << std::endl;
//		std::cout << "잔여 전기량: " << getElecGauge() << std::endl;
//		std::cout << "잔여 워터량: " << waterGauge << std::endl;
//	}
//};
//
//
//int main()
//{
//	HybirdWatercar hwc(10, 20, 30);
//	hwc.showGauge();
//	return 0;
//}

///*
//	상속(Inheritance)4 - 상속관계에서 객체 생성 및 소멸
//	- 객체를 생성할 때 호출되는 생성자와 생성자의 실행은 다름
//	- 즉 생성자의 호출과 생성자의 실행은 다름
//*/
//#include <iostream>
//using namespace std;
//
//class SuperClass {
//private:
//	int num;
//public:
//	SuperClass(int an){
//		num = an;
//		cout << num << " SuperClass constructor" << endl;
//	}
//	~SuperClass(){
//		cout << num << " SuperClass destructor" << endl;
//	}
//};
//
//class SubClass : public SuperClass {
//private:
//	int subNum;
//public:
//	SubClass(int an, int an2):SuperClass(an){
//		subNum = an2;
//		cout << subNum << " SubClass constructor" << endl;
//	}
//	~SubClass() {
//		cout << subNum << " SubClass destructor" << endl;
//	}
//};
//
//int main()
//{
//	SuperClass s{ 1 };
//	cout << "+++++++++++++++++++++++++++++++++++" << endl;
//	SubClass sub{ 2, 22 };
//	
//	return 0;
//}