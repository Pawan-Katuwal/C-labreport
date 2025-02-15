#include <stdio.h>

int greater(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("The greater number is: %d\n", greater(x, y));
    return 0;
}