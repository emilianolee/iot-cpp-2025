/*
	���� �ʱ�ȭ(initialization)
*/
#include <iostream>

int main()
{
	int num = 3;			// ���� �ʱ�ȭ
	int num2(30);			// ���� �ʱ�ȭ
	int num3{ 300 };		// �߰�ȣ ���� �ʱ�ȭ
	int num4 = { 3000 };	// �߰�ȣ ���� �ʱ�ȭ

	std::cout << num << std::endl;
	std::cout << num2 << std::endl;
	std::cout << num3 << std::endl;
	std::cout << num4 << std::endl;
	
	int x = 3.14;
	std::cout << x << std::endl;
	
	int x2{ 3.14 };
	std::cout << x2 << std::endl;

	return 0;
}

/*
	���� �ʱ�ȭ(initialization) 2
*/
#include <iostream>

class BoxClass {
private:
	int m_width{ 0 };
	int m_height{ 0 };
	int m_length{ 0 };
public:
	int volume() {
		return m_width * m_height * m_length;
	}

};
int main()
{
	BoxClass b;
	std::cout << "b.volume: " << b.volume() << std::endl;

	return 0;
}

/*
	���� �ʱ�ȭ(initialization)3 - �ݷ� �ʱ�ȭ
*/
#include <iostream>
using namespace std;

class CTime {
private:
	int m_hour{ 0 };
	int m_min{ 0 };
	int m_sec{ 0 };
public:
	CTime() { cout << "�⺻ ������ ȣ��" << endl; }		// ����Ʈ ������

	CTime(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s) // �ݷ� �ʱ�ȭ(�̴ϼȶ����� ����Ʈ)
	{
		cout << "�Է� 3�� �޴� ������ ȣ��" << endl;
		/*
		m_hour = h;
		m_min = m;		-> �� 3�� ó�� �ʱ�ȭ�ϴ� ��� �ݷ� �ʱ�ȭ�� �� �� ����
		m_sec = s;
		*/
	}

	void setTime(int hour, int min, int sec) {
		m_hour = hour;
		m_min = min;
		m_sec = sec;
	}
	void showTime() const {
		printf("���� �ð��� %d:%d:%d �Դϴ�.", m_hour, m_min, m_sec);
	}
};

int main()
{
	CTime now;	// CTime now = CTime(); ��� ����
	now.showTime();

	CTime t(15, 30, 30);	// �Ұ�ȣ ��� �߰�ȣ ��� ����. ���� CTime t = { 15, 30, 30 }; ��� ����
	t.showTime();

	return 0;
}