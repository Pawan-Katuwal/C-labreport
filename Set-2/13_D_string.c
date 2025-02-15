#include <stdio.h>

int main() {
    char name[50], address[100];
    int age;
    float weight, height;

    printf("Enter your name: ");
    gets(name);
    printf("Enter your address: ");
    gets(address);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your weight and height: ");
    scanf("%f %f", &weight, &height);

    // Display the information
    printf("\n--- Personal Information ---\n");
    printf("Name: %s\n", name);
    printf("Address: %s\n", address);
    printf("Age: %d years\n", age);
    printf("Weight: %.2f kg\n", weight);
    printf("Height: %.2f inch\n", height);

    return 0;
}