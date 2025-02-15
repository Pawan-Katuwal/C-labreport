#include <stdio.h>

int main() {
    char str1[100], str2[100];

    printf("Enter a string without spaces: ");
    scanf("%s", str1);

    getchar();  // clear input buffer

    printf("Enter a string with spaces: ");
    fgets(str2, sizeof(str2), stdin);

    printf("String without spaces: %s\n", str1);
    printf("String with spaces: %s", str2);

    return 0;
}