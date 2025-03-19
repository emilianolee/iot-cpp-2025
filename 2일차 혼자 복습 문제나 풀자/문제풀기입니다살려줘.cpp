#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Student {
private:
	char* name;
	const int id;
	double &grade;
public:
	Student(const char* real_name, int real_id, double real_grade) : id(real_id), grade(real_grade) {
		name = new char[strlen(real_name) + 1];
		strcpy(name, real_name);
	}

	~Student() {
		delete[] name;
	}

	void displayInfo() {
		std::cout << "����: " << name << "\t�й�: " << id << "\t����: " << grade << std::endl;
	}
};

int main()
{
	Student s("�̿���", 201910487, 4.26);
	s.displayInfo();

	return 0;
}