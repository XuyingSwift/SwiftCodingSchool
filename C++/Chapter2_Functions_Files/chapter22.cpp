#include<iostream>

// int is the return type
// A return type of int means the function call will return the same integer value to the caller
int returnFive()
{
    // a return statement indicates the specific value that will be returned.
    return 5; // return the specific value 5 to the caller
}

int getValueFromUsers()
{
    std::cout << "Enter a number!\n";
    int input{};
    std::cin >> input;
    return input;
}

int main()
{
    std::cout << "Return statement to indicate the specific value being returned to the caller.\n"
                 "The specific value returned from a function is called return value.\n"
                 "When the return statement is executed, the function exits immediately,\n"
                 "and the return value is copied from the function back to the caller. returned by value."
              << "\n";
    int num = getValueFromUsers();
    std::cout << "you have entered: " << num << "\n";
    std::cout << returnFive() << "\n";     // prints 5
    std::cout << returnFive() + 2 << "\n"; // prints 7
    return 0;
}