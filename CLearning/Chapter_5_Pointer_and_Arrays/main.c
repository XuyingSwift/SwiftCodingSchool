#include <stdio.h>

/**
 * A pointer is a groupd of celss often two or four that can hold an address. 
 * The unary operator & gives the address of an object
 * The unary operator * is the indirection or dereference operator;
 * We applied to a pointer , it accesses the object the pointer point to
 * 
 */

int main()
{
    int x = 1, y = 2, z[10];
    int *ip; // ip is pointer to int
    ip = &x; // ip is pointer to x now
    y = *ip; // y has value 1 now
    *ip = 0; // x is now 0
    ip = &z[0]; // is now points to z[0]

    double *pointer;
    double a = 10.08;
    *pointer = *pointer + 1;
    // the unary operators like * and ++ associated right to left
    (*pointer) ++;
    printf("Pinter value is %f", *pointer);

    return 0;
}