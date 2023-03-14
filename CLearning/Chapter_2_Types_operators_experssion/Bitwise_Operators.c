#include <stdio.h>

int bitCount(unsigned x)
{
    int b;
    for (b = 0; x != 0; x >>=1)
    {
        if (x & 01)
        {
            b ++;
        }
    }
    return b;
}

int main()
{
    /*
        & bitwise AND
        | bitwise inclusive OR
        ^ bitwise exclusive OR
        << left shit
        >> right shit
        ~ one's complement (unary)
    */

   int a = -57;
   unsigned int b = (unsigned int) a;
   printf("%u\n", bitCount(b));
   int p = 10;
   int n = 2;
   printf("%u\n", (b >> (p+1-n) & ~(~0 << n)));
   printf("The value of signed variable is: %u\n", a);
   printf("The value of unsigned variable is: %u\n", b);
   int i = 0;
   // assignment operator
   i += 2;
   printf("%d\n", i);
   int x = 2;
   int y = 3;
   printf("%d\n", (x = x * (y + 1)));
   printf("%d\n", (x *= (y + 1)));
   return 0;
}