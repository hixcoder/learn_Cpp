#include "header.h"

int main()
{
    int example[6];
    int *another;

    for (int i = 0; i < 6; i++)
    {
        example[i] = i+4;
        printf("example[%d] = %d\n", i, example[i]);
    }
    std::cout << std::endl;
    another = example;
    for (int i = 0; i < 6; i++)
    {
        printf("another[%d] = %d\n", i, another[i]);
    }
}