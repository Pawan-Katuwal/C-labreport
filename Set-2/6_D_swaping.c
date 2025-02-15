#include <stdio.h>
int main() {
    int a = 5, b = 10;
    printf("Original a: %d, b: %d\n", a, b);

    // Swapping with third variable
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping with third variable a: %d, b: %d\n", a, b);

    // Swapping without third variable
    a = 5; b = 10; // Reset values
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping without third variable a: %d, b: %d\n", a, b);

    return 0;
}