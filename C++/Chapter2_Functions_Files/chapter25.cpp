// Local variables: Function parameters, as well as variables defined inside the function body
// are called local varaibles.

/**
An identifier is out of scope anywhere it cannot be accessed within the code. 
In the example above, the identifier x is in scope from its point of definition 
to the end of the main function. The identifier x is out of scope outside of that code 
region.

The term “going out of scope” is typically applied to objects rather than identifiers. 
We say an object goes out of scope at the end of the scope (the end curly brace) 
in which the object was instantiated. In the example above, the object named x goes 
out of scope at the end of the function main.
 * 
 */
#include<iostream>

int add(int x, int y) // add x and y are created and enter scope here
{
    int z{x + y}; // z is a local varaible too
    // add's x and y are visible/usable within this function only
    return z;
} // z, y, x destroyed here. x, y go out of scope.

void doSomething()
{
    std::cout << "Hello\n";
}

int main()
{
    std::cout << "An identifier’s scope determines where the identifier can be seen\n"
                 "and used within the source code. When an identifier can be seen\n"
                 "and used, we say it is in scope. When an identifier can not be seen,\n"
                 "we can not use it, and we say it is out of scope. Scope is a\n"
                 "compile-time property, and trying to use an identifier when it is not\n"
                 "in scope will result in a compile error.\n";

    int x{1000};              // x's lifetime begins here.
    int num = add(3,4);
    std::cout << num << "\n";
    doSomething();            // x is still alive during this fucntion call

    int a{5}; // a is created, initialized, and enters scope here
    int b{6}; // b is created, initialized, and enters scope here

    // a and b are usable within this function only
    std::cout << add(a, b) << "\n"; // calls function add() with x=5, y=6

    return 0; // b and a go out of scope and are destroyed here. 
} // x's lifetime ends here