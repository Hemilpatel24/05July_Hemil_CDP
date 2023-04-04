#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul;
    float div;

    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);

    sum = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;

    printf("Sum = %d",sum);
    printf("\nSub = %d",sub);
    printf("\nMul = %d",mul);
    printf("\nDiv = %.2f",div);

    return 0;
}