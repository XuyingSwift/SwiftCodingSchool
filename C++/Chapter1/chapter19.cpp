// Introduction to literals and operators

// A literal also known as literal constant is a fixed value that has been inserted directly into the source code.
// The value of a literal is fixed and can not be changed
// The value of a varaible can be set and changed through initialization and assignment respectively.

// Operators Operands and Operators
// ex: 2 + 3, 2 and 3 are operands and + is operator

#include<iostream>

int main()
{
    std::cout << 3 + 4 << "\n";
    std::cout << 3 + 3*4 << "\n";
    std::cout << 3 / 4 << "\n";
    int x{2};
    std::cout << (x = 5) << "\n";

    return 0;
}


