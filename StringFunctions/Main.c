#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    
    char string1[] = "Kai";
    char string2[] = "McEnroe";

    strlwr(string1);                // Lowercase
    strupr(string1);                // Uppercase
    strcat(string1, string2);       // Appends string2 to string1
    strncat(string1, string2, 1);   // Appends <n> characters of string2 to string1
    strcpy(string1, string2);       // Copy string2 to string1
    strncpy(string1, string1, 4);   // Copy <n> characters of string2 to string1

    return 0;
    
}
