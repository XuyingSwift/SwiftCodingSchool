#include <iostream>
int foo()
{
    return 5;
}
int main()
{
    // An expression is a combination of literals, variables, operators and function calls that calculates a single value. 
    // The process of executing an expression is called evaluation, and the single value produced is called result of expression.

    // An expression statement is a statement that consists of an expression followed by a semicolon.

    // What is the different between a statement and expression?
    // Statements are used when we want the program to perform an action.
    // expression are used when we want to calculate a value.

    int c ;      // statement does not contain an expression;
    int x = 5;  // statement that contain an expression;
    x = 5;     // expression statment
    foo();    // fuction calls are part of an expression, expression statement

    std::cout << 2 + 3 << "\n";
    int a{6};
    int b{a - 2};
    std::cout << b << "\n";

    int z{};
    z = a;
    std::cout << z - a << "\n";

    return 0;
}