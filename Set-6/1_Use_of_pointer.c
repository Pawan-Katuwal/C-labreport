#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr (address of num): %p\n", ptr);
    printf("Value at ptr (value of num): %d\n", *ptr);

    // Modify value via pointer
    *ptr = 20;
    printf("Modified value of num through pointer: %d\n", num);

    return 0;
}