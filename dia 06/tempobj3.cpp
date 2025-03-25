///*
//	tempobj 아마 임시객체!3
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//	int num;
//public:
//	MyClass(int n) :num(n) { cout << this << ", " << num << " Constructor " << endl; }
//	MyClass(const MyClass& other) :num(other.num) { cout << this << " Copy Constructor" << endl; }
//	~MyClass() { cout << this << ", " << num << " Destructor " << endl; }
//	void setData(int n) { num = n; }
//};
//
//MyClass func(const MyClass& aobj) {
//	cout << "func()" << endl;
//	return aobj;
//}
//
//int main()
//{
//	MyClass obj{ 10 };
//	MyClass obj1{ func(obj) };
//	cout << "adios~~" << endl;
//
//	return 0;
//}