#include <stdio.h>

struct Address {
    char city[50];
    char state[50];
};

struct Person {
    char name[50];
    int age;
    struct Address address;  // Nested structure
};

int main() {
    struct Person p = {"Pawan", 20, {"New York", "NY"}};

    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("City: %s\n", p.address.city);
    printf("State: %s\n", p.address.state);

    return 0;
}