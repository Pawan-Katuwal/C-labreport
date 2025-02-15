#include <stdio.h>

int main() {
    int x, z, y;

    // Initial values
    x = 2;
    z = 4;

    // Expression a
    y = x++ + ++x;  // x = 2 initially
    printf("a. y = x++ + ++x; -> y = %d, x = %d\n", y, x); // x = 4 after expression

    // Reset x for the next expression
    x = 2;

    // Expression b
    y = ++x + ++x;  // x = 2 initially
    printf("b. y = ++x + ++x; -> y = %d, x = %d\n", y, x); // x = 4 after expression

    // Reset x for the next expression
    x = 2;

    // Expression c
    y = ++x + ++x + ++x;  // x = 2 initially
    printf("c. y = ++x + ++x + ++x; -> y = %d, x = %d\n", y, x); // x = 5 after expression

    // Reset x for the next expression
    x = 2;

    // Expression d
    y = x > z;
    printf("d. y = x > z; -> y = %d\n", y);

    // Expression e
    y = x > z ? x : z;
    printf("e. y = x > z ? x : z; -> y = %d\n", y);

    // Expression f
    y = x & z;
    printf("f. y = x & z; -> y = %d\n", y);

    // Expression g
    y = x >> 2 + z << 1;
    printf("g. y = x >> 2 + z << 1; -> y = %d\n", y);

    return 0;
}