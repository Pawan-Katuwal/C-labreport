#include <stdio.h>

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("Cube of %d: %d\n", i, i * i * i);
        } else {
            printf("Square of %d: %d\n", i, i * i);
        }
    }
    return 0;
}