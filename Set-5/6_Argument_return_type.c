#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x, y, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    result = multiply(x, y);
    printf("The result of multiplication is: %d\n", result);
    return 0;
}