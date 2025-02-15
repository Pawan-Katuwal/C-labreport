#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compound_interest, amount;
    int n;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter the time period (in years): ");
    scanf("%lf", &time);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Convert rate from percentage to decimal
    rate = rate / 100;
    
    // Calculate compound interest
    amount = principal * pow((1 + rate / n), n * time);
    compound_interest = amount - principal;

    printf("Compound Interest: %.2f\n", compound_interest);
    printf("Total Amount: %.2f\n", amount);

    return 0;
}