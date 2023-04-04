#include<stdio.h>
int main()
{
    int P;
    float R,I,T;

    printf("Principal amount :");
    scanf("%d",&P);
    printf("Time invested for :");
    scanf("%f",&T);
    printf("Interest Rate per year :");
    scanf("%f",&R);

    I = P*R*T/100;

    printf("Simple Interest is : %f",I);

    return 0;
}