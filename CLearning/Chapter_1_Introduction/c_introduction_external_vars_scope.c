/*
    Each local variable in a function comes into existence only when the function is called, and disapperars when the function is exited.
    External variables are globally accessible, they remain in existence permanently, rather than appearing and disappearing as fuctions are called and exited.
    External variables retain their values even after the functions that set them have returned.
    An external variable must be defined, exactly once, outside of any function, the vairable must aslo be declared in each function that wants to access it;
    extern statement
*/

#include <stdio.h>
#define MAXLINE 1000 // maximum input line size

int max; // maximum length seen so far
char line[MAXLINE]; // current input line
char longest[MAXLINE]; // longest line saved here

int getinputline(void);
void copy(void);

// print longest input line; specialized version
int main()
{
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = getinputline() > 0))
    {
        if (len > max)
        {
            max = len;
            copy();
        }
    }
    if (max > 0) {
        printf("%s", longest);
    }
    return 0;
}

// getinputline: 
int getinputline(void)
{
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE -1 && (c=getchar()) != EOF && c != '\n'; i++)
    {
        line[i] = c;
    }

    if (c == '\n')
    {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

// copy
void copy(void)
{
    int i;
    extern char line[], longestp[];
    i = 0;
    while ((longest[i] = line[i]) != '\0')
    {
        i ++;
    }
}