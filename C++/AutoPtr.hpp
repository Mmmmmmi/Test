#pragma once

template<class T>
class AutoPtr
{
public:
    AutoPtr(T* ptr = nullptr)
        :_ptr(ptr)
    {}

    T& operator*()
    {
        return *_ptr;
    }

    T& operator->()
    {
        return *_ptr;
    }

    ~AutoPtr()
    {
        if (_ptr) {
            delete _ptr;
        }
    }
private:
    T* _ptr;
};

