#include <stdio.h>

void hello(char[], int);

int main(int argc, char const *argv[])
{
    
    // Function prototypes are function declarations
    // ... that have no body and are declared before main()
    // They ensure that calls to a function are made with
    // ... the correct arguments

    // ! Important notes !
    // Many C compilers do not check for parameter matching
    // Missing arguments will result in unexpected behaviour
    // A function prototype causes the compiler to flag an
    // ... error if arguments are missing

    // ! Advantages !
    // 1. Easier to navigate a program with main() at the top
    // 2. Helps with debugging
    // 3. Commonly used in header files

    char name[] = "Kai";
    int age = 16;

    hello(name, age);

    return 0;

}

void hello(char name[], int age)
{

    printf("Name: %s\n", name);
    printf("Age:  %d", age);

}
