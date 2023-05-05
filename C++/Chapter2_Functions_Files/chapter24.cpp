#include<iostream>
int getValueFromUser()
{
    std::cout << "Enter an integer";
    int input{};
    std::cin >> input;
    return input;
}

void printNum(int num)
{
    std::cout << num << " double is: " << num * 2 << '\n';
}

int main()
{
    int num = getValueFromUser();
    // std::cout << num << " doubled is: " << num * 2 << '\n';
    std::cout << "A function parameter is a variable used in header of a function\n"
                 "Function parameters work almost identically to varaibles defined \n"
                 "insdie the function, but with one difference: they are initialized with\n"
                 "with a value provided by the caller of the fuction\n"; 
    printNum(num);
    return 0;
}