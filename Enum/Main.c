#include <stdio.h>

enum Days{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main(int argc, char const *argv[])
{
    
    enum Days today = Mon;

    if (today == Sun || today == Sat)
    {

        printf("It's the weekend!");

    } else
    {

        printf("I have to go to school today :(");

    }

    return 0;
}
