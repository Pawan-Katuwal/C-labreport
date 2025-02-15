#include <stdio.h>

void printPattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        // Print spaces for centering
        for (int j = 1; j <= (rows - i) * 2; j++) {
            printf(" ");
        }

        // Print the descending sequence
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        // Print the ascending sequence
        for (int j = 2; j <= i; j++) {
            printf("%d ", j);
        }

        // Move to the next line
        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printPattern(rows);

    return 0;
}