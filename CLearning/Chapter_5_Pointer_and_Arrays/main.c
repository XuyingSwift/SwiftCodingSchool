#include <stdio.h>
#include <stdlib.h>

    /**
     * A pointer is a group of cells often two or four that can hold an address.
     * The unary operator & gives the address of an object
     * The unary operator * is the indirection or dereference operator;
     * We applied to a pointer , it accesses the object the pointer point to
     *
     */
    void swapp(int *px, int *py);
void swap(int x, int y);

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
    pointer = &a;
    *pointer = *pointer + 1;
    // the unary operators like * and ++ associated right to left
    (*pointer) ++;
    printf("Pinter value is %f", *pointer);
    
    // only when allocated
    // free(pointer);
    
    
    int c = 8;
    int d = 9;
    swap(c, d);
    printf("\nthe number c is %d\n", c);
    // int *pc = &c;
    // int *pd = &d;
    swapp(&c, &d);
    printf("\nthe number c in swapp is %d\n", c);
    return 0;
}

// C passes arguments to function by value, 
// there is no direct way for the called function to alter a vairble in the calling function 

void swap(int x, int y) // wrong
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nthe value of x is %d\n", x);
}

void swapp(int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
    printf("\nin swapp function the value of px is  %d\n", *px);
}