#include<stdio.h>
int main()
{
    int a=5,b=15,c=14,max,min;

    printf("Enter three Values :");
    scanf("%d\n%d\n%d",&a, &b, &c);

    max = (a>b,a>c) ? a:b, a:c;
    min = (a<b,a<c) ? a:b, a:c;

    printf("Maximum number is : %d",maximum);

    return 0;
}