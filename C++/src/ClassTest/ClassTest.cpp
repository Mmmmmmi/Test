
/////////////////////////
//���С����
/////////////////////////

#if 0
#include <iostream>
using namespace std;


//һ������Ĵ�СΪ����
class test
{};

//������һ����Ա�����Ĵ�С
class test1
{
private:
	int a;
};

//����һ����Ա����
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

//����Ա����Ϊ�麯��
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

//����Ա����Ϊ��̬��Ա����
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
//this ָ������
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
//����ģʽ����
/////////////////
////////
//static����
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
