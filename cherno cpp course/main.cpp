
#include "header.h"

// pointer is just an integer that hold a memory adress.
int main()
{
    int v = 5;
    void *p = &v;
    std::cout << &v << "\n";
    std::cout << *(int *)p << "\n";
    MutiplyAndLog(9, 5);
}