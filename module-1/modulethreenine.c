#include<stdio.h>
int main()
{
    int a=10,b=30;

    printf("Before swap : %d,%d",a,b);
    
    a = a+b;//a=40(10+30)
    b = a-b;//b=10(40-30)
    a = a-b;//a=30(40-10)

    printf("\nAfter swap : %d,%d",a,b);

    return 0;
}