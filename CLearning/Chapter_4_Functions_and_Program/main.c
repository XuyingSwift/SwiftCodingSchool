#include <stdio.h>
#include <stdlib.h>
#include <calc.h>
/*
    The scope of a name it the part of the program within which the name can be used.
    automatic vairbale/local varibale" decaled at the beginning of a function, the scope is the function in which the anme is declared

    The scope of an external vairbale or a fucntion lasts from the point at which it is declared to the end of the file being complied.
    
    the declaration of an external vairable announces the properties of a vairable(primarily its type), 
    the definition of an external vairable also causes storage to be set aside.
*/

#define MAXOP 100 // max size of operand or operator
#define NUMBER '0' // signla that a number was found
#define MAXVAL 100 //  

int getop(char []);
void push(double);
double pop(void);

int main()
{
    int type;
    double op2;
    char s[MAXOP];

    while((type = getop(s)) != EOF)
    {
        switch (type)
        {
        case NUMBER:
            push(atof(s));
            break;
        case '+':
            push(pop() + pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() -op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else:
                printf("error: zero divisor\n");
                break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("error: unknown commoand %s\n", s);
            break;
        }
    }
    return 0;
}

// int sp; double val[MAXVAL] appear outside of any function, they define the
// the external vairables sp and val, casue storage to be set aside.
// and also serve as the dclarations for the rest of the source file

// on another hand, extern int sp, extern double val[], declare for the rest of the source file that 
// sp is an int, and val is a double array, but they do not create the variables or reserve storage for them.

/*
    There must be only one definition of an exernal variable among all the files that make up the source program.
    Other files may contain extern declarations to access it.

    Initialization of exernal variable goes only with definition
*/
// int sp;
// double val[MAXVAL];