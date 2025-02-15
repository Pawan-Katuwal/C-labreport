#include<stdio.h>
int main(){
    int p,t;
    float interest,r;
    printf("Enter Amount:\n");
    scanf("%d",&p);
    
    printf("Enter Time:\n");
    scanf("%d",&t);

    printf("Enter Rate:\n");
    scanf("%f",&r);

    interest=(float)(p*t*r)/100;
    printf("\nThe simple interest is :%f",interest);
    return 0;
}