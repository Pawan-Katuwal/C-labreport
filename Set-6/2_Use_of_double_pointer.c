#include <stdio.h>

int main() {
    int num = 30;
    int *ptr = &num;
    int **dptr = &ptr;

    printf("Value of num: %d\n", num);
    printf("Value at *ptr: %d\n", *ptr);
    printf("Value at **dptr: %d\n", **dptr);

    return 0;
}