///*
//	static3 
//	- StaticTest��� Ŭ������ ����µ� 
//	- ��������δ� �̸�, ��ȭ��ȣ, �ּ�, ȸ����ȣ(cnt)�� ������
//	- 3���Է��� �޴� �����ڸ� �ۼ��Ѵ�.
//	- ȸ����ȣ�� �ڵ����� ������ų ���̱� ����!
//	- ��� ����� showMember() �޼��� ����
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class StaticTest {
//private:
//	char mname[20];
//	char mphone[20];
//	char madr[100];
//	static int cnt;
//public:
//	StaticTest(const char* name, const char* phone, const char* adr) {
//		strcpy(mname, name);
//		strcpy(mphone, phone);
//		strcpy(madr, adr);
//	}
//	
//	void cntAutoPlus();
//
//	void showMember();
//};
//
//void StaticTest::showMember() {
//	std::cout << "ȸ����ȣ: " << cnt << std::endl;
//	printf("�̸�: %s, ��ȭ��ȣ: %s, �ּ�: %s\n", mname, mphone, madr);
//}
//
//void StaticTest::cntAutoPlus() {}
//
//int main()
//{
//	StaticTest m1("ȫ�浿", "010-1111-1111", "�λ�");
//	m1.showMember();
//	StaticTest m2("�迵��", "010-2222-2222", "����");
//	m2.showMember();
//	StaticTest m3("��ö��", "010-3333-3333", "����");
//	m3.showMember();
//
//	return 0;
//}