#include <stdio.h>

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[5] = {10, 25, 3, 45, 7};
    int minValue = findMin(arr, 5);
    printf("The minimum value in the array is: %d\n", minValue);
    return 0;
}