// whitespace is newlinew, taps, and spaces
#include <iostream>

int main()
{
    std::cout << "This is a really, really, really, really, really, "
        "really long line\n"; // one extra indentation for conitnuation line

    std::cout << "This is a really, really, really, really, really, "
                 "really long line\n"; // text aligned with the prvious line for continuation line

    int cost = 57;
    int pricePerItem = 24;
    int value = 66;
    int numberOfIterms = 17;

    std::cout << "BEST PRACTICE\n";
    
    int cost           = 57;
    int pricePerItem   = 24;
    int value          = 66;
    int numberOfIterms = 17;

    std::cout << "Hello world\n"; // cout live in the iostream library
    std::cout << "It is very nice to meet you \n"; // these comments make the code hard to read
    std::cout << "Yeah!\n"; // especially when lines are different lengths;

    std::cout << "Best PRACTICE\n";
    std::cout << "Hello world\n";                    // cout live in the iostream library
    std::cout << "It is very nice to meet you \n";  // these comments make the code hard to read
    std::cout << "Yeah!\n";                        // especially when lines are different lengths;


    return 0;
}