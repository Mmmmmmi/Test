#include <iostream>
#include "AutoPtr.hpp"
using namespace std;



int main()
{
    AutoPtr<int> ptr(new int(4));
    cout << *ptr << endl;
    return 0;
}

