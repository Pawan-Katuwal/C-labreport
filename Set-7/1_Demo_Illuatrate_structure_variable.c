#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person p = {"John Doe", 25, 5.9};  // Initializing structure variable

    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.1f\n", p.height);

    return 0;
}