#include<iostream>

int main()
{
    std::cout << "New programmers often try to write an entire program all at once, and then get overwhelmed when it produces a lot of errors."
                 "A better strategy is to add one piece at a time, make sure it compiles, and test it. Then when you’re sure it’s working,"
                 "move on to the next piece." << "\n";
    
    std::cout << "Enter an integer: " << "\n";

    int num{};        // define a varaible num as an integer variable
    std::cin >> num; // get the integer from the user

    int doubleNum{num * 2}; 
    std::cout << "Double that number is: " << doubleNum << "\n";

    std::cout << "The end result is that our initial solutions often aren’t well structured,\n"
                 "robust (error-proof), readable, or concise. So once your program is working,\n" 
                 "your job really isn’t done (unless the program is a one-off/throwaway).\n"
                 "The next step is to cleanup your code. This involves things like:\n"
                 "removing (or commenting out) temporary/debugging code, adding comments, handling error cases,\n"
                 "formatting your code, and ensuring best practices are followed.\n"
                 "And even then, your program may not be as simple as it could be -- \n"
                 "perhaps there is redundant logic that can be consolidated, or multiple statements that can be combined,\n"
                 "or variables that aren’t needed, or a thousand other little things that could be simplified.\n"
                 "Too often new programmers focus on optimizing for performance when they should be optimizing for maintainability." << "\n";

    return 0;
}