#include <iostream>

void doA()
{
    std::cout <<  "In doA() \n";
}

void doB()
{
    std::cout << "In doB() \n";
}

int main()
{
    std::cout << "A function is a reusable sequence of statements designed to do a particular job" << "\n";
    std::cout << "Function that you write yourself are called user-defined functions\n";
    std::cout << "A function call is an expression that tells the CPU to interrupt the\n"
                 "current function and execute another function.\n"
                 "The CPU “puts a bookmark” at the current point of execution, and then calls (executes)\n"
                 "the function named in the function call. When the called function ends,\n"
                 "the CPU returns back to the point it bookmarked, and resumes execution.\n";

    std::cout << "The function initiating the function call is the caller,\n"
                 "and the function being called is the callee or called function.";

    std::cout << "Unlike some other programming languages, in C++,\n"
                 "functions cannot be defined inside other functions.\n";
    
    std::cout << "Starting main()\n";

    doA();

    doB();

    std::cout << "Ending main()\n";

    return 0;
}