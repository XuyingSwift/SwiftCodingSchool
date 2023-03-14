/**
 * @file types.c
 * @author Xuying Swift
 * @brief 
 * @version 0.1
 * @date 2023-03-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/*
    char: a single byte, capable of holding one character in the local character set
    int: an integer, stores whole numbers
    float: single-precision floating point
    double: double precision floating point
    long: are at least 32 bits
    short: are 16 bits
    signed: may be applied to any char or any integer
    unsigned numbers: are always positive or zero
*/
#include <stdio.h>
int main()
{
    float myFloatNum = 3.5;
    printf("%f\n", myFloatNum);
    printf("%.1f\n", myFloatNum);
    printf("%3.5f\n", myFloatNum);
    double myDoubleNum = 0.98;
    printf("%.3lf\n", myDoubleNum);
    char myD = 'D';
    printf("%c\n", myD);
    return 0;
}