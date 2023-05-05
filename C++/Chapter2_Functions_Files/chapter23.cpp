#include<iostream>

void printHi()
{
    // this function does not return a value so no return statement is needed.
    std::cout << "Hi" << '\n';
}

void printYou()
{
    std::cout << "A\n";
    return;           // the function will return to the caller here
    std::cout << "B"; // this will never be printed and never reached
}

int main()
{
    // void means the functjion does not return a value to the caller.
    printHi();
    std::cout << "Do not put a return statement at the end of a non-value returning function.\n";
    // A return statment that is not the last statement in a function is called an early return.
    // such a statement will cause the function to return to the caller when the return statement is excuted.

    printYou();

    // std::cout << printHi() << "\n";
    // will not compile, function printHi() returns void, can not be sent to st::cout

    return 0;
}