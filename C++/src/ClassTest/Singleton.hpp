#pragma once 

#include <iostream>

class Singleton1
{
public:
	static Singleton1* getSingleton1()
	{
		return _singleton;
	}

	class Free
	{
	public:
		~Free()
		{
			if (_singleton != nullptr) {
				std::cout << "delete _singleton" << std::endl;
				delete _singleton;
				_singleton = nullptr;
			}
		}
	};
	static Free free;
private:

	Singleton1()
	{
		std::cout << "Singleton1��" << this << std::endl;
	}

	Singleton1(const Singleton1&);
	Singleton1& operator=(const Singleton1&);
	static Singleton1* _singleton;
};


Singleton1* Singleton1::_singleton = new Singleton1();
Singleton1::Free Singleton1::free;

#include <mutex>

class Singleton2
{
public:
	static volatile Singleton2* getSingleton2()
	{
		if (_p == nullptr) {
			_m.lock();
			if (_p == nullptr) {
				_p = new Singleton2();
			}
			_m.unlock();
		}
		return _p;
	}
	class Free
	{
	public:
		~Free()
		{
			if (_p != nullptr) {
				std::cout << "delete _p" << std::endl;
				delete _p;
				_p = nullptr;
			}
		}
	};

private:
	Singleton2()
	{
		std::cout << "Singleton2��" << this << std::endl;
	}

	Singleton2 (const Singleton2&);

	Singleton2& operator=(const Singleton2&);

	static volatile Singleton2* _p;
	static std::mutex _m;
	static Free _free;
};

volatile Singleton2* Singleton2::_p = nullptr;
std::mutex Singleton2::_m;
Singleton2::Free Singleton2::_free;



void test()
{
	Singleton1::getSingleton1();
	Singleton1::getSingleton1();
	Singleton1::getSingleton1();
	Singleton2::getSingleton2();
	Singleton2::getSingleton2();
	Singleton2::getSingleton2();
}
