#include  <iostream>

int main()
{
    std::cout << "What is the difference between initialization and assignment?" << "\n";
    std::cout << "Initialization provides a variable with an initial value." << "\n";
    std::cout << "Assignment gives a variable a new value after that variable has been defined." << "\n";

    std::cout << "\n";

    std::cout << "when does undefined behavior occur? What are the consequences of undefined behavior?" << "\n";
    std::cout << "Undefined behavior occurs when the programmer does something that is ill-specified by the C++ language.\n"
                 "The consequences could be almost anything, from crashing to producing the wrong answer to working correctly anyway.\n";

    std::cout << "Enter two integers seperated by space: \n";
    int a{};
    int b{};
    std::cin >> a >> b;

    std::cout << a << " + " << b << " is " << a + b << "\n";
    std::cout << a << " - " << b << " is " << a - b << "\n";

    return 0;
}