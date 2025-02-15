#include <stdio.h>
#define PI 3.14
int main() {
    float r,h,sa;
    printf("Enter radius and height: ");
    scanf("%f %f", &r, &h);

    sa=2 * PI *r* (r + h);

    printf("The Surface Area of cylinder is: %.2f\n",sa);
    return 0;
}