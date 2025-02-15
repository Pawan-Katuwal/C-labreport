#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is a multiple of 5
    if (number % 5 == 0) {
        printf("The number %d is a multiple of 5.\n", number);
    } else {
        printf("The number %d is not a multiple of 5.\n", number);
    }

    // Check if the number is divisible by 7 but not by 11
    if (number % 7 == 0 && number % 11 != 0) {
        printf("The number %d is divisible by 7 but not by 11.\n", number);
    } else {
        printf("The number %d does not satisfy the condition of being divisible by 7 but not by 11.\n", number);
    }

    return 0;
}