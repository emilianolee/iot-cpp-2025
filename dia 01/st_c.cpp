///*
//	C ����ü
//*/
//#include <iostream>
//
//typedef struct {
//	char name[20];
//	int age;
//	char job[10];
//} Human;
//
//void showHuman(Human ah) 
//{
//	printf("name: %s, age: %d, job: %s", ah.name, ah.age, ah.job);
//}
//
//int main()
//{
//	Human h = { "��ö��", 30, "���" };
//	showHuman(h);
//
//	return 0;
//}

///*
//	C++ ����ü
//*/
//#include <iostream>
//
//typedef struct human{
//	char name[20];
//	int age;
//	char job[10];
//
//	//C++������ ����Լ� + ����������� ����ü �����ȿ� ����
//	void showHuman()
//	{
//		printf("name: %s, age: %d, job: %s", name, age, job);
//	}
//} Human;
//
//
//int main()
//{
//	Human h = { "��ö��", 30, "���" };
//
//	h.showHuman();
//
//	return 0;
//}

///*
//	C++ class
//*/
//#include <iostream>
//
//class Human {
//public:				// �ܺο����� Ŭ������ ������ �� �ְ� ����
//	char name[20];
//	int age;
//	char job[10];
//
//	//Human() {}		// ����Ʈ ������
//
//	void showHuman()
//	{
//		printf("name: %s, age: %d, job: %s", name, age, job);
//	}
//};
//
//
//int main()
//{
//	Human h = { "��ö��", 30, "���" };
//
//	h.showHuman();
//
//	return 0;
//}