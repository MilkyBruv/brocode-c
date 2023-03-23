#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    // Bitwise Operators = special operators used in bit
    // level programming (knowing binary is important
    // for this)

    // &    = AND - Goes through each bit and checks if the are equal
    // |    = OR - Only one bit needs to be 1
    // ^    = XOR - Only one bit can be 1, if neither or both are 1 the bit will be skipped
    // <<   = left shift - Shifts bit to the left
    // >>   = right shift - Shifts bit to the right

    int x = 6;  // 6    = 0000,0110
    int y = 12; // 12   = 0000,1100
    int z1 = 0;  // 0   = 0000,0000
    int z2 = 0;  // 0   = 0000,0000
    int z3 = 0;  // 0   = 0000,0000
    int z4 = 0;  // 0   = 0000,0000
    int z5 = 0;  // 0   = 0000,0000

    z1 = x & y; // z1      = 0000,0100      = 4
    z2 = x | y; // z2      = 0000,1110      = 14
    z3 = x ^ y; // z2      = 0000,1010      = 10
    z4 = x << 1; // z2     = 0000,1100      = 12
    z5 = x >> 1; // z2     = 0000,0011      = 3

    printf("z1 = x & y: %d (0000,0100)\n", z1);
    printf("z2 = x | y: %d (0000,1110)\n", z2);
    printf("z3 = x ^ y: %d (0000,1010)\n", z3);
    printf("z4 = x << 1: %d (0000,1100)\n", z4);
    printf("z5 = x >> 1: %d (0000,0011)\n", z5);

    return 0;
}
