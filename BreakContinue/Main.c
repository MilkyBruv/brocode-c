#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    // continue = skips rest of code and forces the next
    // iteration of the loop
    // break = exits a loop / switch

    for (int i = 1; i <= 20; i++)
    {

        if (i == 13)
        {

            continue;

        }

        printf("%d\n", i);

    }

    return 0;
}
