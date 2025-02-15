#include <stdio.h>

int main() {
    for (int i = 6; i >= 1; i--) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}