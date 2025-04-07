#include <iostream>
using namespace std;

// Product 클래스(부모 클래스)
class Product {
private:
    string id;
    int price;
    string producer;
public:
    Product(string pid, int pprice, string pproducer) {
        id = pid;
        producer = pproducer;
        price = pprice;
    }

    void showInfo() {
        cout << "상품 ID: " << id << endl;
        cout << "가격: " << price << endl;
        cout << "제조사: " << producer << endl;
    }
};

// Book 클래스(자식 클래스)
class Book : public Product {
private:
    string bookTitle;
public:
    Book(string pid, int pprice, string pproducer, string pbookTitle) : Product(pid, pprice, pproducer) {
        bookTitle = pbookTitle;
    }

    void showBookInfo() {
        cout << "[책 정보]" << endl;
        showInfo();
        cout << "책 제목: " << bookTitle << endl << endl;
    };
};

// HandPhone 클래스(자식 클래스)
class HandPhone : public Product {
private:
    string phoneName;
public:
    HandPhone(string pid, int pprice, string pproducer, string pphoneName) : Product(pid, pprice, pproducer) {
        phoneName = pphoneName;
    }

    void showPhoneInfo() {
        cout << "[휴대폰 정보]" << endl;
        showInfo();
        cout << "휴대폰 기종: " << phoneName << endl << endl;
    }
};

// Computer 클래스(자식 클래스)
class Computer : public Product {
private:
    string comName;
public:
    Computer(string pid, int pprice, string pproducer, string pcomName) : Product(pid, pprice, pproducer) {
        comName = pcomName;
    }

    void showComputerInfo() {
        cout << "[컴퓨터 정보]" << endl;
        showInfo();
        cout << "컴퓨터 상품명: " << comName << endl << endl;
    }
};



int main()
{
    Book b("B001", 15000, "(주)능률", "토익만세");
    HandPhone h("H001", 990000, "Apple", "IPhone 16");
    Computer c("C001", 1200000, "Samsung", "삼성최고노트북");

    b.showBookInfo();
    h.showPhoneInfo();
    c.showComputerInfo();

    return 0;
}
