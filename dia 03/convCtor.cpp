///*
//	��ȯ ������(Conversion Constructor)
//	- �ٸ� Ÿ���� ��ü�� ��ȯ�� �� ȣ��Ǵ� ������
//	- �Է��� �� ���� ����(���� �Ű�����)
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int val;		// ������ ��� ����
//public:
//	// ��ȯ ������: ����(int)�� �޾� MyClass ��ü�� ��ȯ
//	MyClass(int value) {
//		printf("��ȯ ������ ȣ��!!!\n");
//		val = value;	// ��� ���� �ʱ�ȭ
//	}
//
//	// ��ü�� ���� ����ϴ� �Լ�
//	void printMyClass() {
//		printf("value: %d\n", val);
//	}
//};
//
//int main()
//{
//	MyClass obj = 10;		// ��ȯ ������ ȣ�� -> MyClass obj(10); �� ������ ����
//	obj.printMyClass();		// obj�� �� ���
//
//	MyClass obj2(10);		// �Ϲ����� ������ ȣ�� -> MyClass obj2 = 10; �� ������ ����
//	obj.printMyClass();		// obj2�� �� ���
//
//	return 0;
//}
//
///*
//	��ȯ ������(Conversion Constructor) 2
//*/
//#include <iostream>
//
//class Time {
//private:
//	int hour;
//	int min;
//	int sec;
//public:
//	// ����Ʈ ������
//	Time() {}
//	
//	// ��ȯ������ : �� ����(int)�� �޾� ��, ��, �ʷ� ��ȯ
//	Time(int abssec) {
//		hour = abssec / 3600;	// ��ü �ʸ� 3600���� ������ hour ���
//		min = (abssec / 60) % 60;	// ��ü �ʸ� 60���� ������ 60���� ���� �������� min���� ����
//		sec = abssec % 60;		// �ʴ� 60���� ���� ������ ��
//	}
//
//	// �ð� ��� �Լ�
//	void printTime() {
//		printf("���� �ð��� %d�� %d�� %d�� �Դϴ�.", hour, min, sec);
//	}
//};
//
//int main()
//{
//	Time now = 9999; // ��ȯ ������ ȣ�� -> Time now(9999); �� ���� ���
//	now.printTime();	// ��ȯ�� �ð� ���
//
//	return 0;
//}
//
///*
//	��ȯ ������(Conversion Constructor) 3
//	- explicit Ű���带 ����Ͽ� ������ ��ȯ�� ������ �� ����
//*/
//
//#include <iostream>
//
//class MyClass {
//private:
//	int val;		// ���� ���� �����ϴ� ��� ����
//public:
//	// ��ȯ ������
//	explicit MyClass(int value){		// explicit�� ���� ������ ��ȯ�� ����
//		printf("��ȯ ������ ȣ��!!!\n");
//		val = value;
//	}
//
//	// ��ü�� ���� ����ϴ� �Լ�
//	void printMyClass() {
//		printf("value: %d\n", val);
//	}
//};
//
//int main()
//{
//	//MyClass obj = 10;		// ���� �߻�(������ ��ȯ�� ������ ����)! explicit Ű����� ���� ������ ��ȯ�� ������
//	//obj.printMyClass();
//	
//	// ����� ��ȯ�� ���� ��ü ����
//	MyClass obj2{ 10 };	// �߰�ȣ �ʱ�ȭ ��� ���(explicit�� �־�߸� ����)
//	obj2.printMyClass();
//
//	return 0;
//}