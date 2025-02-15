#include <stdio.h>

int main() {
    float x, y;
    char op;
    
    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    
    switch (op) {
        case '+': printf("Result: %.2f\n", x + y); break;
        case '-': printf("Result: %.2f\n", x - y); break;
        case '*': printf("Result: %.2f\n", x * y); break;
        case '/': 
            if (y != 0) 
                printf("Result: %.2f\n", x / y); 
            else 
                printf("Error: Division by zero\n"); 
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}