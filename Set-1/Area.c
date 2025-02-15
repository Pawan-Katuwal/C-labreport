#include <stdio.h>
int main() {
    float length,breadth,a;
    printf("Enter length and breadth: ");
    scanf("%f %f", &length, &breadth);
    a=(float)length*breadth;
    printf("Area of rectangle: %.2f\n",a);
    return 0;
}