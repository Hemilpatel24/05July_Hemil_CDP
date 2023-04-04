#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three no :");
    scanf("%d\n%d\n%d",&a, &b, &c);

    if(a>b)
    {
        if(a>c)
        printf("A is greater.");
        else
        printf("\nC is greatrer.");
    }
    else
    {
        printf("\nB is greater.");
    }
       
    return 0;
}