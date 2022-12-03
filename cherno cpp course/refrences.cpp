#include "header.h"


// REFERENCES are like you using pointers with sugger syntax (simple to read and cleaner)
// you can not change the refrence value when you assign it.
int main()
{
    int a = 5;
    int b = 10;

    int& ref = a;
    ref = b;
    Increment1(&a);
    std::cout << "this is a = " << a << "\n";
    std::cout << "this is b = " << b << "\n";
    Increment2(ref);
    std::cout << "this is a = " << a << "\n";
    std::cout << "this is b = " << b << "\n";
}