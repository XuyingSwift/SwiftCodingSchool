#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
// return length of string s
int my_strlen(char *s)
{
    int n;
    for (n = 0; *s != '\0'; s++)
        n ++;
    return n;
}

int main()
{
    int *pa;
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // set pa point to element zero of a; that is pa contains the address of a[0]
    // if pa points to a particular element, then pa + 1 points to the next one
    pa = &a[0];
    // pa and a have the identical values. since the name of an array is synonym for the location of initial element
    pa = a;
    int n1 = my_strlen("Hello, world!");
    printf("Print out n1: %d\n", n1);

    char b[5] = "abcde";
    // the array name b is a pointer points to the initial element
    int n2 = my_strlen(b);
    printf("Print out n2: %d\n", n2);
    char *pb;
    pb= b;
    printf("print the value of pb %c, which is a the first char in the array\n", *pb);

    char s1[10] = "abcdefghij";
    char *s2;
    // they are equivalent; the latter one is more explicityly that the vairbale is a pointer
    // we can pass part of an array to a function, by passing a pointer to the beginning of the subarray
 
    int n3 = my_strlen(&s1[2]);
    int n4 = my_strlen(s1+2);
    printf("Printing out s1 staring index 2 the size if %d\n", n3);
    printf("Printing out s1 staring index 2 using the array name and + 2the size if %d\n", n3);
    
    // copy the contents of a[0] into x
    int x = *pa;
 
    return 0;
}