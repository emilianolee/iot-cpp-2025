/*
	2���� ���� ����(�̸��� ��ȭ��ȣ�� �����Ҵ�)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human {
private:
	char* pname;
	int age;
	char* ptel;
public:
	Human(const char *real_name, int real_age, const char *real_tel){
		pname = new char[strlen(real_name) + 1];
		strcpy(pname, real_name);
		age = real_age;
		ptel = new char[strlen(real_tel) + 1];
		strcpy(ptel, real_tel);
	}
	
	~Human() {
		delete[] pname;
		delete[] ptel;
	}
	void getData(){
		std::cout << "�̸�: " << pname << "\t����: " << age << "\t��ȭ��ȣ: " << ptel << std::endl;
	}
};

int main()
{
	Human h("ȫ�浿", 30, "010-1234-1234");
	h.getData();

	return 0;
}