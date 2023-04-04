#include<stdio.h>
int main()
{
    int r;
    float pi=3.14,area;

    printf("Enter the value of radius:");
    scanf("%d",&r);

    area = r*r*pi;

    printf("area of circle = %f",area);

    return 0;
}