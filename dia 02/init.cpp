/*
	변수 초기화(initialization)
*/
#include <iostream>

int main()
{
	int num = 3;			// 복사 초기화
	int num2(30);			// 직접 초기화
	int num3{ 300 };		// 중괄호 직접 초기화
	int num4 = { 3000 };	// 중괄호 복사 초기화

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
	변수 초기화(initialization) 2
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
	변수 초기화(initialization)3 - 콜론 초기화
*/
#include <iostream>
using namespace std;

class CTime {
private:
	int m_hour{ 0 };
	int m_min{ 0 };
	int m_sec{ 0 };
public:
	CTime() { cout << "기본 생성자 호출" << endl; }		// 디폴트 생성자

	CTime(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s) // 콜론 초기화(이니셜라이져 리스트)
	{
		cout << "입력 3개 받는 생성자 호출" << endl;
		/*
		m_hour = h;
		m_min = m;		-> 이 3줄 처럼 초기화하는 대신 콜론 초기화를 할 수 있음
		m_sec = s;
		*/
	}

	void setTime(int hour, int min, int sec) {
		m_hour = hour;
		m_min = min;
		m_sec = sec;
	}
	void showTime() const {
		printf("현재 시간은 %d:%d:%d 입니다.", m_hour, m_min, m_sec);
	}
};

int main()
{
	CTime now;	// CTime now = CTime(); 사용 가능
	now.showTime();

	CTime t(15, 30, 30);	// 소괄호 대신 중괄호 사용 가능. 또한 CTime t = { 15, 30, 30 }; 사용 가능
	t.showTime();

	return 0;
}