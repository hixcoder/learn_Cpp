
// use this command to compile your code: gcc filename.cpp -lstdc++

#include <iostream>

int main()
{
    char var0 = 'g';
    int var1 = 8;
    unsigned int var2 = 1345294336;
    float var3 = 25.55f;
    bool var4 = true;
    std::cout << "hello hix" << std::endl;
    std::cout << "this is char:" << var0 << std::endl;
    std::cout << "this is int: " << var1 << std::endl;
    std::cout << "this is unsigned int: " << var2 << std::endl;
    std::cout << "this is float: " << var3 << std::endl;
    std::cout << "this is bool: " << var4 << std::endl;

    // the sizeof function
    std::cout << "this is size of int: " << sizeof(var1) << std::endl;

}