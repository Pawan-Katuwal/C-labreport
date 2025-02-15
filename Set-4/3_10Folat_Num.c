#include <stdio.h>

int main() {
    float arr[10];

    printf("Enter 10 float numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &arr[i]);
    }

    printf("Entered float numbers are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", arr[i]);
    }

    return 0;
}