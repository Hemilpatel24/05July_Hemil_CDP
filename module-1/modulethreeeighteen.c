//Write a program of to find out the AreaofTriangle,Rectangle and Circle using If Condition.
#include<stdio.h>
int main()
{
    float l, b, r;
    float area, pi=3.14;
    int c;

    printf("1.Area of Circle");
    printf("\n2.Area of rectangle");
    printf("\n3.Area of Triangle");

    printf("\n\nEnter your choice:");
    scanf("%d",&c);
    
    if(1)
    {
        printf("\nEnter Radius:");
        scanf("%f",&r);

        area = pi*r*r;

        printf("Area of circle : %f",area);
    }
    if(2)
    {
        printf("Enter length:");
        scanf("%f",&l);
        printf("Enter breath:");
        scanf("%f",&b);

        area = l*b;

        printf("Area of Rectangle is : %f",area);
    }


}