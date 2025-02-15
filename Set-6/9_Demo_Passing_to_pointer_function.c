#include <stdio.h>

void updateValue(int *n) {
    *n = 50;
}

int main() {
    int num = 10;
    printf("Before update: %d\n", num);

    updateValue(&num);

    printf("After update: %d\n", num);
    return 0;
}