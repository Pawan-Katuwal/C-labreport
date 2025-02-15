#include <stdio.h>
int main() {
    char marital_status, gender;
    float income, tax = 0;
    printf("Enter marital status (M for Married, U for Unmarried): ");
    scanf(" %c", &marital_status);
    printf("Enter gender (M for Male, F for Female): ");
    scanf(" %c", &gender);
    printf("Enter annual income: ");
    scanf("%f", &income);

    if (marital_status == 'M') {
        if (income <= 450000) tax = 0.01 * income;
        else if (income <= 550000) tax = 4500 + 0.10 * (income - 450000);
        else if (income <= 750000) tax = 14500 + 0.20 * (income - 550000);
        else if (income <= 1300000) tax = 54500 + 0.30 * (income - 750000);
        else tax = 204500 + 0.35 * (income - 1300000);
    } else { // Unmarried
        if (income <= 400000) tax = 0.01 * income;
        else if (income <= 500000) tax = 4000 + 0.10 * (income - 400000);
        else if (income <= 750000) tax = 14000 + 0.20 * (income - 500000);
        else if (income <= 1300000) tax = 64000 + 0.30 * (income - 750000);
        else tax = 229000 + 0.35 * (income - 1300000);
    }

    if (gender == 'F') tax *= 0.90; // 10% discount for female
    printf("Total Tax: %.2f\n", tax);
    return 0;
}