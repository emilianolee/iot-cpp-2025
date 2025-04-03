#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Product {
public:
	string id;
	int price;
	string producer;
	Product(string pid, int pprice, string pproducer) {
		id = pid;
		producer = pproducer;
		//id = new char[strlen(pid) + 1];
		//strcpy(id, pid);
		price = pprice;
		//producer = new char[strlen(pproducer) + 1];
		//strcpy(producer, pproducer);
	}
	~Product() {
		//delete[] id;
		//delete[] producer;
	}
};

class Book : public Product {
private:
	int BookID;
public:
	Book(string id, int price, string producer, int BookID);

	void showBook();
};

void Book::showBook() {
std:cout << "å ID: " << BookID << std::endl;
}

class HandPhone : public Product {

};

class Computer : public Product {

};



int main()
{


	return 0;
}
