#include <stdio.h>

int main() {
    int arr[10], search, found = 0;

    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for (int i = 0; i < 10; i++) {
        if (arr[i] == search) {
            printf("Number %d found at position %d.\n", search, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Number %d not found.\n", search);
    }

    return 0;
}