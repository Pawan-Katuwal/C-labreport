#include <stdio.h>

int getNumber() {
    return 42;
}

int main() {
    int num = getNumber();
    printf("The number is: %d\n", num);
    return 0;
}