#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    
    srand(time(0));

    int number1 = (rand() % 6) + 1;
    int number2 = (rand() % 20) + 1;
    int number3 = (rand() % 50) + 1;

    printf("Number 1: %d\n", number1);
    printf("Number 2: %d\n", number2);
    printf("Number 3: %d", number3);

    return 0;
}
