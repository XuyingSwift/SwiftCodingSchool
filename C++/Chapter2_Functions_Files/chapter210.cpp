#include<iostream>
#define MY_NAME "ALEX"
#define HA_HA
#define PRINT_JO
#define FOO 9 // a macro substitution

int main()
{
    std::cout << "A translation unit contains both the processed code from the code file,\n"
                 "as well as the processed code from all of the #inluded files.\n";

    std::cout << "#define directive can be used to create a macro, A macro is a rule that defined how input text is converted into replacement output text.\n"
                 "object-like macros with substitution text: the preprocessor encounters this directive, any further occurence of the identifier is replaced by\n"
                 "substitution text. The identifer is traditionally types all capital letters\n";

    std::cout << "My name is: " << MY_NAME << '\n';

    // Macros of this form work like you might expect: any further occurrence of the identifier is removed and replaced by nothing!

    std::cout << "The conditional compilation preprocessor directives allow you to specify under what conditions something will or won’t compile.\n";
    std::cout << "The #ifdef preprocessor directive allows the preprocessor to check whether an identifier has been previously #defined.\n"
                 "If so, the code between the #ifdef and matching #endif is compiled. If not, the code is ignored.\n";

    #ifdef PRINT_JOE
        std::cout << "joe\n"; // will be compiled since PRINT_JOE is defined
    #endif

    #ifdef PRINT_BOB
        std::cout << "Bob\n"; // will be exluded since PRINT_BOB is not defined
    #endif
    std::cout << "#ifndef is the opposite of #ifdef, in that it allows you to check whether an identifier has NOT been #defined yet.\n";
    #ifndef PRINT_BOB
        std::cout << "PRINT BOB\n";
    #endif

    std::cout << "One more common use of conditional compilation involves using #if 0 to exclude a block of code from being compiled (as if it were inside a comment block):\n";
    // This provides a convenient way to “comment out” code that contains multi-line comments 
    // (which can’t be commented out using another multi-line comment due to multi-line comments being non-nestable):
    #if 0 // Don't comiple anything starting here
        std::cout << "hahahahaha" << "\n";
    #endif

    #ifdef FOO // This FOO does not get replaced because it’s part of another preprocessor directive
        std::cout << FOO << '\n'; // This FOO gets replaced with 9 because it's part of the normal code
    #endif

    std::cout << "scope of #defines\n"
              << "PRINT is only #defined from the point of definition to the end of main.cpp).\n";

    return 0;
}