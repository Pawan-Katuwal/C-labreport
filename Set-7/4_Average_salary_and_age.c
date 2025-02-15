#include <stdio.h>

struct Employee {
    char name[50];
    float salary;
    int age;
    char department[30];
};

int main() {
    struct Employee employees[20];
    float totalSalary = 0;
    int totalAge = 0;

    for (int i = 0; i < 20; i++) {
        printf("Enter details for employee %d:\n", i+1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Department: ");
        scanf(" %[^\n]", employees[i].department);

        totalSalary += employees[i].salary;
        totalAge += employees[i].age;
    }

    printf("\nAverage Salary: %.2f\n", totalSalary / 20);
    printf("Average Age: %.2f\n", (float)totalAge / 20);

    return 0;
}