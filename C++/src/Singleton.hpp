//#pragma once 
//
//#include <iostream>
//
////����ģʽ
////��������ʱ���ͽ����󴴽���
//class Singleton1
//{
//public:
//	static Singleton1* getSingleton1()
//	{
//		_singleton = new Singleton1();
//		return _singleton;
//	}
//	class Free
//	{
//	public:
//		~Free()
//		{
//			if (_singleton != nullptr) {
//				std::cout << "delete _singleton" << std::endl;
//				delete _singleton;
//				_singleton = nullptr;
//			}
//		}
//	};
//	static Free free;
//private:
//
//	//����ģʽ������ֻ�������һ��
//	//�����캯������Ϊ˽��
//	Singleton1()
//	{
//		std::cout << "Singleton1��" << this << std::endl;
//	}
//
//	//��������ڿ��������Լ��������������   
//	Singleton1(const Singleton1&);
//	Singleton1& operator=(const Singleton1&);
//
//	static Singleton1* _singleton;
//};
//
//
//Singleton1* Singleton1::_singleton;
//Singleton1::Free Singleton1::free;
//
//#include <mutex>
//#include <thread>
//
////����ģʽ
//class Singleton2
//{
//public:
//	//����
//	static volatile Singleton2* getSingleton2()
//	{
//		//�����б������Ż���ָ�����ŵ����⣬Ҳ���ǿռ������ˣ�����û�е��ù��캯����
//		//�����Ϳ���ȫ�����������������ټ�һ���жϡ�
//		if (_p == nullptr) {
//			//������������߳�ȫ����������
//			//���Ϊ�վʹ���
//			_m.lock();
//			if (_p == nullptr) {
//				_p = new Singleton2();
//			}
//			_m.unlock();
//		}
//		return _p;
//	}
//	//�ͷţ�����д�����������У���Ϊdelete ������������� ���������ֻ����delete  ��ѭ��
//	//Ҳ����ֱ��дһ���ͷź�������Ϊ��������߳������ã���ôӦ�������һ��ʹ�õ��̵߳��ͷţ�
//	//�����㲻֪���Ǹ��߳������һ������ˣ�Ӧ��дһ��Ƕ�������ͷ�
//	class Free
//	{
//	public:
//		~Free()
//		{
//			if (_p != nullptr) {
//				std::cout << "delete _p" << std::endl;
//				delete _p;
//				_p = nullptr;
//			}
//		}
//	};
//
//	static Free free;
//
//private:
//	//ֻ�������е��ù��캯�������������Ͽ���������ֻ�ܴ���һ����
//	Singleton2()
//	{
//		std::cout << "Singleton2��" << this << std::endl;
//	}
//
//	Singleton2 (const Singleton2&);
//
//	Singleton2& operator=(const Singleton2&);
//
//	static volatile Singleton2* _p;
//	static mutex _m;
//	static Free _free;
//};
//
//volatile Singleton2* Singleton2::_p = nullptr;
//mutex Singleton2::_m;
//Singleton2::Free Singleton2::free;
//
//
//
//void test()
//{
//	Singleton1::getSingleton1();
//	Singleton1::getSingleton1();
//	Singleton1::getSingleton1();
//	Singleton2::getSingleton2();
//	Singleton2::getSingleton2();
//	Singleton2::getSingleton2();
//}