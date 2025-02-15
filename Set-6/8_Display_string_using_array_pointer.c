#include <stdio.h>

int main() {
    char *names[] = {"Alice", "Bob", "Charlie"};
    int n = 3;

    for (int i = 0; i < n; i++) {
        printf("Name[%d]: %s\n", i, names[i]);
    }

    return 0;
}