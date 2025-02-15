#include <stdio.h>
int main() {
    float sales, commission;
    printf("Enter total sales: ");
    scanf("%f", &sales);

    if (sales < 5000) commission = 0.01 * sales;
    else if (sales <= 8000) commission = 0.03 * sales;
    else if (sales <= 11000) commission = 0.05 * sales;
    else commission = 0.10 * sales;

    printf("Commission: %.2f\n", commission);
    return 0;
}