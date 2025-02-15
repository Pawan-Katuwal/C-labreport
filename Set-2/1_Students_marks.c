#include <stdio.h>
int main() {
    int marks[5], sum = 0;
    float percentage;
    printf("Enter marks for 5 subjects: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    percentage = (float)sum / 5;
    printf("Percentage: %.2f%%\n", percentage);
    
    if (percentage >= 80) printf("Rank: Distinction\n");
    else if (percentage >= 60) printf("Rank: First Division\n");
    else if (percentage >= 40) printf("Rank: Pass\n");
    else printf("Rank: Fail\n");
    return 0;
}