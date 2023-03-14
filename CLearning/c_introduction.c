#include <stdio.h> // include information about standard library
// #define line defines a symbolic name or symbolic onstant to be a particular string of characters
#define LOWER 0   // lower limit of the table
#define UPPER 300 // upper limit
#define STEP 20   // step size
#define IN 1 // inside a word
#define OUT 2 // outside a word

/**
 * In C, All function arguments are passed by value, this means that the called function is given the 
 * values of its arguments in temporary variables ranther than the originals.
 */

void read_file()
{
    int c;
    c = getchar();
    printf("%d", EOF);
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}

void count_chars()
{
    // long nc;
    // nc = 0;
    // while (getchar() != EOF)
    // {
    //     ++nc;
    //     printf("%ld\n", nc);
    // }
    double nc;
    for (nc = 0; getchar() != EOF; nc++)
    {
        ;
    }
    printf("%.0f\n", nc);   
}

// 1.6 Arrays
int power(int m, int n);
int power2(int m, int n);

// 1.9 Character Arrays

int main()
{
    printf("hello, world!\n");
    // print Fhrenheit-Celsius table for fahr = 0, 20, ..., 300
    // int fahr, celsius;
    float fahr, celsius;
    // int lower, upper, step;
    float lower, upper, step;
    /*
        it is bad practice to bury magic numbers like 300 and 20
    */
    lower = 0;   // lower limit of temprature scale
    upper = 300; // upper limit of temperature
    step = 20;   // step size
    fahr = lower;
    while (fahr <= upper)
    {
        // celsius = 5 * (fahr - 32) / 9; // instead of using 5/9 is because that integer division truncates any fractional part is discarded
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        // printf("%d\t%d\n", fahr, celsius); // \t is a tab
        // printf("%3d\t%6d\n", fahr, celsius); // right side align
        printf("%3.0f %6.1f\n", fahr, celsius); // print fahr as least three characters wide, with no farction difits, celsius print out as least 6 chars wide and 1 num after the ddecimal point
        fahr = fahr + step;
    }
    int i = 1;
    int j = 5;
    while (i < j)
    {
        i = i + 1;
        printf("%d\n", i);
    }

    int f;
    for (f = LOWER; f <= UPPER; f = f + STEP)
    {
        printf("%3d %6.1f\n", f, (5.0 / 9.0) * (f - 32));
    }
    //read_file();
    //count_chars();
    int k;
    for (k = 0; k < 10; k++)
    {
        // printf("%d %d %d\n", k, power(2, k), power(-3, k));
        printf("%6d %6d %6d\n", k, power2(2, k), power2(-3, k));
    }

    return 0;
}

int power(int base, int n)
{
    int i, p;
    p = 1;
    for (i = 0; i <= n; i++)
    {
        p = p * base;
    }
    return p;
}

int power2(int base, int n)
{
    int p;
    for (p = 1; n > 0; n--)
    {
        p = p * base;
    }
    return p;
}