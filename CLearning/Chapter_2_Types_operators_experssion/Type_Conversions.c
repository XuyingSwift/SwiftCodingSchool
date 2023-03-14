#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int convert(char s[]);
int lowerCase(int c);

int main()
{
    char s[] = "2023";
    int n = convert(s);
    printf("%d\n", n);
    int b = lowerCase(48);
    printf("%d\n", b);
    int c = 56;
    char myC = 'X';
    printf("%d\n", isdigit(c));
    printf("%d\n", isdigit(myC));
    printf("%lf\n", sqrt(2));
    char src[50], dest[50];
    strcpy(src, "This is source");
    strcat(dest, "This is destination");
    strcat(dest, src);
    printf("Final Destination string : |%s|\n", dest);
    return 0;
}

// converts a string of digits into its numeric equivalent
int convert(char s[])
{
    int i, n;
    n = 0; 
    for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
    {
        printf("%c\n", s[i]);
        n = 10 * n + (s[i] - '0');
    }
    return n;
}
// convert lower case 
int lowerCase(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 'a' - 'A';
    } else
    {
        return c;
    }
}