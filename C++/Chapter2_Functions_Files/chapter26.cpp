// When addressing compile errors in your programs, always resolve the first error produced first and then compile again.
// Let’s say we’re writing a program that has two functions A and B. 
// If function A calls function B, and function B calls function A, then there’s no way to order the functions 
// in a way that will make the compiler happy. If you define A first, the compiler will complain it doesn’t know what B is. 
// If you define B first, the compiler will complain that it doesn’t know what A is.

#include<iostream>

// a function prototype). The function declaration consists of the function’s return type, name, and parameter types, 
// terminated with a semicolon. The names of the parameters can be optionally included.
// Keep the parameter names in your function declarations.
int add(int x, int y);

int main()
{
    std::cout << "A forward declaration allows us to tell the compiler \n"
                 "about the existence of an identifier before actually defining the identifier."
              << "\n";

    std::cout << "A function prototype is a declaration statement that includes a function’s name,\n"
                 "return type, and parameters. It does not include the function body.\n";

    std::cout << "For functions, a function declaration/prototype serves as a forward declaration.\n"
              << "Other types of identifiers (e.g. variables and user-defined types) have a different syntax\n"
              << "for forward declaration.\n";

    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above
    return 0;

}


int add(int x, int y) // even though the body of add() isn't defined until here
{
    return x + y;
}
