#include <stdio.h>

int sequentialSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {34, 56, 19, 78, 42};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 78;

    int result = sequentialSearch(arr, n, key);
    if (result == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    return 0;
}