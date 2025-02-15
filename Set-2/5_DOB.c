#include <stdio.h>

int main() {
    int birth_year, birth_month, birth_day;
    int current_year, current_month, current_day;
    int days_lived;

    printf("Enter your birth year, month, and day: ");
    scanf("%d %d %d", &birth_year, &birth_month, &birth_day);

    printf("Enter the current year, month, and day: ");
    scanf("%d %d %d", &current_year, &current_month, &current_day);

    days_lived = (current_year - birth_year) * 365 + (current_month - birth_month) * 30 + (current_day - birth_day);
    printf("Days lived: %d\n", days_lived);
    
    return 0;
}