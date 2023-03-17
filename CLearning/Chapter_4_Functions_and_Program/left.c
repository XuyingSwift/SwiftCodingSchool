/*
    A register declaration advises the compiler that the vairable in question will be heavily used.
    The idea it the register variables are to be placed in machine registers, which my result 
    in smaller and faster programs

    the register declaration can only be applied to automatic vairables and to the formal parameters
*/

#include <stdio.h>
#define max(A, B) ((A) > (B) ? (A) : (B))
// Conditional Inclustion provides a way to include code selectively, depending on the value of conditions evaluated during compilation
#ifndef HDR
#define HDR
#endif

// static external vairables belong the this file, outside file or function can not acess it
// static functions belong to the source file
// static local variables remain in existence rather than coming and gling each tiem the function activated.
// this means that interanl static variables provide private, permanent storage within a single function
static int a;
static int b;
static void foo(void)
{
    return;
}
void f(register unsigned m, register long n)
{
    return;
}
int main()
{
    int a = 1;
    int b = 2;
    int d = max(a, b);
    printf("%d", d);
    register int x;
    register char c;
}