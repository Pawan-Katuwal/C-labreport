#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (char ch = 'a'; ch < 'a' + i; ch++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}