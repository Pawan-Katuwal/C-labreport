#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char address[100];
    float salary;
};

void sortEmployees(struct Employee employees[], int n) {
    struct Employee temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(employees[i].name, employees[j].name) > 0) {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Address: ");
        scanf(" %[^\n]", employees[i].address);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    sortEmployees(employees, n);

    printf("\nEmployees sorted by name:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Address: %s\n", employees[i].address);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}