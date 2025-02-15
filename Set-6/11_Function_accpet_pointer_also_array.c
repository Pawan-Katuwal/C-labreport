#include <stdio.h>

// Function to calculate sum of elements
int sumArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Calling sumArray with an array, which is treated as a pointer
    int result = sumArray(arr, size);

    printf("Sum of array elements: %d\n", result);
    return 0;
}