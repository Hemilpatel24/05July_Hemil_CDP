#include<stdio.h>
int main()
{
    int x,y;
    char c;

    printf("Enter two integers:");
    scanf("%d%d",&x,&y);

    printf("1.Addition");
    printf("\n2.Substraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");

    printf("\n\nEnter your choice:");
    scanf("\n%c",&c);

    switch(c)
    {
        case '+':
        printf("Addition is : %d",x+y);
        break;

        case '-':
        printf("Substraction is : %d",x-y);
        break;

        case '*':
        printf("Multiplication is : %d",x*y);
        break;

        case '/':
        printf("Division is : %d",x/y);
        break;


        default:
        printf("Invalid Input");
        break;
    }
    return 0;
}