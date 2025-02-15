#include <stdio.h>

void displaySum(int a, int b) {
    printf("The sum is: %d\n", a + b);
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    displaySum(x, y);
    return 0;
}