#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    // Do while loops first execute then check condition

    int num = 0;
    int sum = 0;

    
    do {

        printf("Enter a number above 0\n> ");
        scanf("%d", &num);

        if (num > 0)
        {

            sum += num;

        }

    } while (num > 0);

    return 0;
}
