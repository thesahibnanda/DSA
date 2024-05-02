#include <stdio.h>

int main()
{
    // Terenary Operator
    printf("Ternary Operator\n");
    int num = 10;
    int result = (num > 5) ? 100 : 200;
    printf("Result: %d\n", result);

    // Bitwise Operator
    printf("\nBitwise Operator\n");
    int a = 5, b = 9;
    printf("a & b = %d\n", a & b); // AND: 1&0 = 0, 0&1 = 0, 0&0 = 0, 1&1 = 1
    printf("a | b = %d\n", a | b); // OR: 1|0 = 1, 0|1 = 1, 0|0 = 0, 1|1 = 1
    printf("a ^ b = %d\n", a ^ b); // XOR: 1^0 = 1, 0^1 = 1, 0^0 = 0, 1^1 = 0
    printf("~a = %d\n", ~a);

    // Left Shift And Right Shift
    printf("\nLeft Shift And Right Shift\n");
    int c = 5;
    printf("c << 1 = %d\n", c << 1); // Extra 0 Is Added To Right, Whole Is Shifted To Left By 1
    printf("c >> 1 = %d\n", c >> 1); // One Bit Is Removed From Right, Whole Is Shifted To Right By 1
    
    // Initialize Binary Numbers
    printf("\nInitialize Binary Numbers\n");
    int x = 0b1010;
    int y = 0b1100;
    printf("x & y = %d\n", x & y);

    return 0;
}
