#include <stdio.h>
#include <string.h>
int main()
{
    int lower, upper, step;
    char c;
    char line[10];
    char esc = '\\';
    int limit = 10;
    float eps = 1.0e-5;
    const double e = 2.7887;
    const char msg[] = "waring";
    printf("%s\n", msg);
    printf("%lu\n", strlen(msg));

    // Arithmetic Operators
    // % is the modulus operator but it can not apply to double or float;
    int year = 2000;
    if ((year % 4 == 0  && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is a leap year which means that year has 366 days including February 29th as an intercalary day!\n", year);
    } else
    {
        printf("%d not a leap year!\n", year);
    }

    int valid = 0;
    if (valid)
    {
        printf("%d I am valid because I have the value 0\n", valid);
    }

    if (!valid)
    {
        printf("%d I am not valid here\n", valid);
    }
    return 0;
}