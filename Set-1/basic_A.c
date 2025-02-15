#include<stdio.h>
int main(){
    float a,b,sum,diff,prod,div;
    printf("Enter the first number:\n");
    scanf("%f",&a);
    printf("Enter the second number:\n");
    scanf("%f",&b);
    
    sum=a+b;
    diff=a-b;
    prod=a*b;
    div=a/b;
    printf("The sum is %.2f\n",sum);
    printf("The difference is %.2f\n",diff);
    printf("The product is %.2f\n",prod);
    printf("The division is %.2f\n",div);
    return 0;
}