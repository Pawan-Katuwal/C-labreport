#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    int pages;
};

int main() {
    struct Book b = {"The Alchemist", "Paulo Coelho", 197};  // Initializing structure

    printf("Book Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Pages: %d\n", b.pages);

    return 0;
}