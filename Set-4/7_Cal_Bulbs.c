#include <stdio.h>

int main() {
    int price[5], stock[5], total_price = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter price and stock for bulb %d: ", i + 1);
        scanf("%d %d", &price[i], &stock[i]);
        total_price += price[i] * stock[i];
    }

    printf("Total price of all bulbs: %d\n", total_price);

    return 0;
}