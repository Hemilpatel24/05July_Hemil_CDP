#include<stdio.h>
int main()
{
    int a,positive,negative;

    printf("Enter the value :");
    scanf("%d",&a);

    if(a>0)
    {
        printf("Value is a positive integer.");
    }
    else
    {
        printf("Value is a negative integer.");
    }

    return 0;
}