#include <iostream>
#include "add.h"

int main()
{
    std::cout << "HEADER FILES!";
    std::cout << "HEader files allow us to put declarartions in one location and then import them whereever we need them \n"
                 "This can svae a lof ot typing in multi-file programs";
    std::cout << "When you #include a file, the content of the included file is inserted at the point of inclusion.\n"
                 "This provides a useful way to pull in declarations from another file.\n"
                 "Header files should generally not contain function and variable definitions, so as not to violate the one definition rule.\n";
    int z = addME(1,2);
    std::cout << z << "\n";
    return 0;
}