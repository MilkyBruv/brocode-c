#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    // Format specifiers

    // %c  = character
    // %s  = string
    // %f  = float
    // %lf = double
    // %d  = integer

    // %.1 = decimal places (%.<num>)
    // %1  = minimum field width
    // %-  = left align

    float item_1 = 2.5553487;
    float item_2 = 3.14;
    float item_3 = 213.0078;

    printf("Item 1: $%-8.3f and $%-8.3f\n", item_1, item_2);
    printf("Item 2: $%8.2f and $%8.3f\n", item_2, item_2);
    printf("Item 3: $%8.2f and $%8.3f\n", item_3, item_2);

    return 0;
    
}
