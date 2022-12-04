#include "header.h"

// new keyword is used to allocate memory in the heap.
// the new keyword not only allocate memory but also calls the constructor.
//  And this is the difference between malloc() and new()
int main()
{
    int *a;
    int *b;

    b = (int *) malloc(sizeof(int) * 50); // 200 bytes
    b = new int[50]; // 200 bytes

    a = new int; 

    // delete: is like free() in c, but this one is not only for free memory, it's also calls the destructor.
    // if you used new with square brackets [], then use delete with square brackets
    delete []b;
    delete a;
}