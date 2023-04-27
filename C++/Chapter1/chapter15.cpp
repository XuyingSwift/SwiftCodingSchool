// The input/output library is part of the c++ standard library that deals with basic input and output.
// to get input from the keyboard, and output data to console.
#include <iostream>

// std::cout allows us to send data to the console to be printed as text;

int main()
{
    std::cout << "I have this world!" << std::endl; // std::endl prints a newline character to the console
    // Prefer ‘\n’ over std::endl when outputting text to the console.
    std::cout << 4 << std::endl;
    int x{100};
    std::cout << x << std::endl;
    std::cout << "X is qeaul to: " << x << std::endl;

    // std::cin is character input reads input from keyboard
    int y{};
    std::cin >> y;
    std::cout << "You have enterd: " << y << "\n";

    std::cout << "Enter two numbers separated by a space: ";
    int a{};
    int b{};
    std::cin >> a >> b;
    std::cout << "You have entered " << a << " and " << b << "\n"; 
    return 0;
}

/**
 *  is stored in a region of memory set aside to collect such requests (called a buffer). 
 * Periodically, the buffer is flushed, meaning all of the data collected in the buffer is transferred to its destination 
 * 
 * Buffered systems are often used in cases where processing a few large 
 * batches of data is more efficient than processing many smaller batches of data. 
 * Buffering maximizes overall throughput, at the cost of increasing response time.
 */