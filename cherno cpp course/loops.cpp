#include "header.h"

int main()
{
    int i;
    const char *str;

    i = -1;
    str = "hello hix";
    while (++i < 5)
    {
        Log("this is while loop");
    }
    
    for (int i = 0; i < 6; i++)
    {
        Log("this is for loop");
    }
    
}