#include <stdio.h>

int findMax(int x, int y)
{

    // Return x if x > y
    // Return y if x !> y
    return (x > y) ? x : y;

}

int main(int argc, char const *argv[])
{
    
    int max = findMax(209, 4);

    printf("%d", max);

    return 0;
    
}
