#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
    char remarks[100];
};

int main() {
    struct Student students[5];  // Array of 5 students

    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("Remarks: ");
        scanf(" %[^\n]", students[i].remarks);
    }

    printf("\nDisplaying student details:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Roll: %d\n", students[i].roll);
        printf("Marks: %.2f\n", students[i].marks);
        printf("Remarks: %s\n", students[i].remarks);
    }

    return 0;
}