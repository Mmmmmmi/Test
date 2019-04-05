
/////////////////////////
//类大小问题
/////////////////////////

#if 0
#include <iostream>
using namespace std;


//一个空类的大小为多少
class test
{};

//包含了一个成员变量的大小
class test1
{
private:
	int a;
};

//多了一个成员函数
class test2
{
public:
	void print()
	{
		cout << a << endl;
	}
private:
	int a;
};

//若成员函数为虚函数
class test3
{
public:
	virtual void print()
	{
		cout << a << endl;
	}
private:
	int a;
};

//若成员函数为静态成员函数
class test4
{
public:
	static void fun()
	{
		cout << "static fun" << endl;
	}
private:
	int a;
};

int main()
{
	cout << sizeof(test) << endl;
	cout << sizeof(test1) << endl;
	cout << sizeof(test2) << endl;
	cout << sizeof(test3) << endl;
	cout << sizeof(test4) << endl;
	return 0;
}
#endif



////////////////////
//this 指针问题
///////////////////

#include <iostream>
using namespace std;

class test
{
public:
	int a;
	int b;
	int c;
	int d;
	int f;
	//~test()
 //	{
	//	delete this;
	//	cout << "~test()" << endl;
	//}

};

//int main()
//{
//	test* t = new test();
////	int* a = new int(5);
////	delete a;
////	cout << a << endl;
//	delete t;
//	return 0;
//}



//////////////////
//单例模式问题
/////////////////
////////
//static问题
///////

int* test() 
{
	static int a = 0;
	cout << a << endl;
	return &a;
}



//int main()
//{
//	int* p = test();
//	*p = 5;
//	test();
//	return 0;
//}
