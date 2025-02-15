#include <stdio.h>

struct Customer {
    char name[50];
    int accountNo;
    float balance;
};

int main() {
    int n;
    printf("Enter the number of customers: ");
    scanf("%d", &n);

    struct Customer customers[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for customer %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", customers[i].name);
        printf("Account No: ");
        scanf("%d", &customers[i].accountNo);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }

    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (customers[i].balance > customers[maxIndex].balance) {
            maxIndex = i;
        }
        if (customers[i].balance < customers[minIndex].balance) {
            minIndex = i;
        }
    }

    printf("\nCustomer with highest balance:\n");
    printf("Name: %s\nAccount No: %d\nBalance: %.2f\n", customers[maxIndex].name, customers[maxIndex].accountNo, customers[maxIndex].balance);

    printf("\nCustomer with lowest balance:\n");
    printf("Name: %s\nAccount No: %d\nBalance: %.2f\n", customers[minIndex].name, customers[minIndex].accountNo, customers[minIndex].balance);

    return 0;
}