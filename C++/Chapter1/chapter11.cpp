// A statement is a type of instruction that causes the program to perform some action.
/**
 * 1 Declaration statements
 * 2 Jump statements
 * 3 Expression statements
 * 4 Compound statements
 * 5 Selection statements 
 * 6 Iteration statements
 * 7 Try blocks
 */
// A function is a collection of statements that get executed sequentially(in order, from top to bottom)
// Every C++ program must have a special function named main (all lower case letters). When the program is run, the statements inside of main are executed in sequential order.

# include <iostream>
// this line is a special type of line called a preprocessor directive. This preprocessor directive indicates that we would like to use the contents of the iostream library. 
int main() // every c++ program must have a main function or it will fail to link
{
    std::cout << "Hello, world!"; // which stands for character output
    return 0; //  is a return statement. When an executable program finishes running, the program sends a value back to the operating system in order to indicate whether it ran successfully or not. 
    // This particular return statement returns the value of 0 to the operating system, 
    // which means “everything went okay!”. This is the last statement in the program that executes.
}

//  The rules that govern how sentences are constructed in a language is called syntax.
//  When you compile your program, the compiler is responsible for making sure your program follows the basic syntax of the C++ language. 
//  If you violate a rule, the compiler will complain when you try to compile your program, and issue you a syntax error. 
/**
 * syntax error:
 * Syntax errors are common when writing a program. 
 * Fortunately, they’re typically straightforward to find and fix, 
 * as the compiler will generally point you right at them. 
 * Compilation of a program will only complete once all syntax errors are resolved.
 */
