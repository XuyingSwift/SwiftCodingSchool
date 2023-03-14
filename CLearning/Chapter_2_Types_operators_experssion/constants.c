#include <stdio.h>
#include <string.h>
// constant which means unchangeable and read-only
#define MAXLINE 10

int checkStringLen(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

enum day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main()
{
    /*
        A character constant is an integer, written as on character within single qoutes, such as 'x'.
        The value os a character constant is the numeric value of the character in the machine's character set.

        A constant expression is an expression that involves only constants.

        A string constant or string literal, is a sequence of zero or more characters surrounded by double quotes.

        An enumeration constant  is a list of constant integer values
    */
    char myChar = 'X';
    printf("%c\?\n", myChar);
    printf("%d\n", MAXLINE);
    char line[MAXLINE];
    for (int i = 0; i < MAXLINE; i++)
    {
        line[i] = 'X';
        printf("%c\n", line[i]);
    }

    int result = checkStringLen(line);
    printf("%d\n", result);

    printf("%lu\n", strlen(line));

    enum Bools {YES, NO};
    enum Bools bs;
    switch(bs)
    {
        case YES: printf("%d\n", 0);
        case NO: printf("%d\n", 1);
    }

    enum day days;
    switch(days){
        case Monday: printf("%s\n", "Monday");
        case Tuesday: printf("%s\n", "Tuesday");
        case Wednesday: printf("%s\n", "Wednesday");
        case Thursday: printf("%s\n", "Thursday");
        case Friday: printf("%s\n", "Friday");
        case Saturday: printf("%s\n", "Saturday");
        case Sunday: printf("%s\n", "Sunday");
    }
    return 0;
}