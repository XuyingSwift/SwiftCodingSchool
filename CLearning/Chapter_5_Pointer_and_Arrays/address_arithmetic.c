#include <stdio.h>
#include <stdlib.h>
/**
 * C is consistent and regular in its approach to address arithmetic;
 * its integration of pointers, arrays, and address arithmetic is one of the strengths of the launage;
 * 
 * 
 *  
 */
#define ALLOCSIZE 10000 // size of available space
static char allocbuf[ALLOCSIZE]; // storage for alloc
static char *allocp = allocbuf; // next free position
// static char *allocp = &allochuf[0];
int main()
{
    return 0;
}

char *alloc(int n) // return pointer to n characters
{
    if (allocbuf + ALLOCSIZE - allocp >= n) // check if it fits
    {
        allocp += n;
        return allocp - n; // old pointer 
    } else { // not enough room
        return 
    }
}

void afree(char *p) // free storage pointed to by p
{
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
    {
        allocp = p;
    }
}