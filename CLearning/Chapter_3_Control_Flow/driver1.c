#include <stdio.h>
#define FOUND 0 
int main()
{
    /**
     * if (expression)
     *      statement;
     * else
     *      statement;
     * the "break" statement causes an immediate exit from the "switch";
     * the "default" statement 
     * do
     *   statement
     * while (expression)
     */
    int n = 10;
    do
    {
        printf("Print out the number: %d\n", n);
        n -= 2;
        break;
    } while (n >=2);

    // break statement provides an early exit from for, while, do
    // continue statement is related to break, but less often used ;
    // it causes the next iteration of the enclosing for, while, do loop to begin
    // continue only apply to loops not switch
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
            continue;
        printf("Printing out each i: %d\n", i);
    }

    // goto breaks out nested loops
    // you should not use goto
    /*
        goto label;
        ...
        label:statement;
    */
    LOOP:for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 4 && j == 4)
                goto LOOP;
            printf("Print out i: %d and j: %d \n", i, j);
        }
    }
    return 0;
}