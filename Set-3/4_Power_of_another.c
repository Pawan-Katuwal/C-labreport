#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent, result;
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);
    printf("%.2f raised to the power %.2f is %.2f\n", base, exponent, result);
    return 0;
}