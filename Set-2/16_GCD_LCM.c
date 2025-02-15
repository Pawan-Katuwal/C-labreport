#include <stdio.h>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int num1, num2, hcf, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    hcf = gcd(num1, num2);
    lcm = (num1 * num2) / hcf;

    printf("GCD: %d, LCM: %d\n", hcf, lcm);
    return 0;
}