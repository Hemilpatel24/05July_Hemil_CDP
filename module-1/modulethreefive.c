#include<stdio.h>
int main()
{
    int b,h;
    float area;

    printf("Enter the height of the Triangle :");
    scanf("%d",&h);
    printf("Enter the breath of the Triangle :");
    scanf("%d",&b);

    area = 0.5*b*h;

    printf("Area of Trianle is : %f",area);

    return 0;

}
