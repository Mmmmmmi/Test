#pragma once

template<class T>
class AutoPtr
{
public:
    AutoPtr(T* ptr = nullptr)
        :_ptr(ptr)
    {}
    ~AutoPtr()
    {
        if (_ptr) {
            delete _ptr;
        }
    }
    

private:
    T* _ptr;
};

int main() 
{
    return 0   
}
