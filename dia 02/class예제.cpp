///*
//	Ŭ���� ����1 - ������ ���� setData�� Ȱ���� MyClass �����
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
//		// name = real_name;	//�迭�� ������ �Ŀ� ���� �����ڸ� ����Ͽ� ���� ���� �Ҵ��� �� ����
//		strcpy(name, real_name);		
//		age = real_age;
//	}*/
//
//	void setData(int real_id, const char real_name[20], int real_age) {		// ���ڿ����� �� const�� �ٿ������
//		id = real_id;
//		strcpy(name, real_name);
//		age = real_age;
//	}
//
//	void getData() {
//		std::cout << "���� MyClass�� �ν��Ͻ� �Դϴ�.\n";
//		std::cout << "id: " << id << "\tname: " << name << "\tage: " << age << std::endl;
//	}
//};
//
//int main()
//{
//	MyClass obj;
//	obj.setData(1, "��ö��", 20);
//	obj.getData();
//	return 0;
//}


///*
//	Ŭ���� ����2 - �����ڸ� Ȱ���� MyClass �����
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
//		std::cout << "���� MyClass�� �ν��Ͻ� �Դϴ�.\n";
//		std::cout << "id: " << id << "\tname: " << name << "\tage: " << age << std::endl;
//	}
//};
//
//int main()
//{
//	MyClass obj(1, "��ö��", 20);
//	obj.getData();
//	return 0;
//}

///*
//	Ŭ���� ����3 - name�� ���� �Ҵ����� ���� MyClass �����
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class MyClass {
//private:
//	int id;
//	char* name;		// �������� �Ҵ�Ǵ� �̸� ���ڿ�
//	int age;
//public:
//	// �⺻ ������
//	MyClass() {};	
//
//	/*
//		�Ű������� �ִ� ������
//		- ��ü ���� �� �л��� ID, �̸�, ���̸� �ʱ�ȭ�Ѵ�.
//		- ���ڿ�(name)�� ���� �Ҵ��Ͽ� �����Ѵ�.
//	*/
//	MyClass(int real_id, const char *real_name, int real_age) {
//		id = real_id;
//		name = new char[strlen(real_name) + 1];		// name�� �������� �޸� �Ҵ�(���ڿ� ���� + 1(null �� ����)) 
//		strcpy(name, real_name);		// �������� �޸� �Ҵ��� ���� ���� �� �ڵ� ó�� ������ ���� ������ְ� ���ڿ� �����ؾ� ��.
//		age = real_age;
//	}
//
//	// �Ҹ���(�ڵ� ȣ��ȴ� -> �����Ҵ� ��� ����� ������ �ۼ��� �ʿ䰡 ����)
//	~MyClass() {
//		delete[] name;		// ���� �Ҵ�� name �޸� ���� -> ���� �� �Ҹ��� �ȿ� �־�� ��
//	}
//
//	void getData() {
//		std::cout << "���� MyClass�� �ν��Ͻ� �Դϴ�.\n";
//		std::cout << "id: " << id << "\tname: " << name << "\tage: " << age << std::endl;
//	}
//};
//
//int main()
//{
//	MyClass obj(1, "��ö��", 20);
//
//	obj.getData();
//
//	return 0;
//}