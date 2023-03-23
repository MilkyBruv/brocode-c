#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    
    // Declare variables
    int age;
    char name[25];

    // Get name input
    printf("What is your name?\n> ");
    // Use instead of scanf to get whitespace
    fgets(name, 25, stdin);
    // Set last char in 'name' to \0 instead of \n
    name[strlen(name) - 1] = '\0';

    printf("How old are you?\n> ");
    scanf("%d", &age);

    printf("Hello, %s, how are you?\n", name);
    printf("You are %d years old", age);

    return 0;
    
}
