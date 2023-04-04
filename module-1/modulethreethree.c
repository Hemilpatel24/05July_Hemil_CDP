#include<stdio.h>
int main()
{
    int a,square,cube;

    printf("Enter the value of a :");
    scanf("%d",&a);

    square = a*a;
    cube = a*a*a;

    printf("Square of a is : %d",square);
    printf("\nCube of a is : %d",cube);

    return 0;
}