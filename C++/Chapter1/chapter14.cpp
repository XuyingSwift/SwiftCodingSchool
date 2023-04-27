#include <iostream>

int main()
{
    int x; // define an integer variable named x
    int y, z; // define an integer vairables, named y and z;
    // variable assignment
    int width; // define an integer varaible named with
    width = 5; // copy assignment of value 5 into vairable width
    std::cout << width << "\n";
    width = 7; // change the value stored in width into 7
    std::cout << width << "\n";

    // The value used to initialize a variable is called an initializer.
    int a; // no initializer (default initialization)
    int b = 5; // initializer after equals sign 
    int c(6); // initializer in parenthesis (direct initialization)

    // List initialization methods 
    int d {7}; // direct list initialization 
    int e = {8}; // copy list initialization
    int f = {}; // emtpy // value initialization / zero initialization to value 0
    int m = {0}; //  // explicit initialization to value 0
    // Best practice Initialize your variables upon creation.
    std::cout << m; // we're using that zero value

    // When no initialization value is provided (such as for variable a above), this is called default initialization. In most cases, default initialization leaves a variable with an indeterminate value.
    // When an initializer is provided after an equals sign, this is called copy initialization. This form of initialization was inherited from C.
    // Best practice Favor initialization using braces.
    return 0;
}