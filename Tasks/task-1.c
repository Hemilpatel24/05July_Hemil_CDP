#include<stdio.h>
int main()
{
    int menu;

    printf("1.Coffee");
    printf("\n2.Chai");
    printf("\n3.Pizza");
    printf("\n4.Snacks");
    printf("\n5.Desserts");

    printf("\nEnter your choice:");
    scanf("%d",&a);

    switch(menu)
    {
        case 1:
        printf("Your order for Coffee is ready.");
        break;

        case 2:
        printf("Your order for Chai is ready.");
        break;

        case 3:
        printf("Your order for Pizza is ready.");
        break;

        case 4:
        printf("Your order for Snacks is ready.");
        break;

        case 5:
        printf("Your order for Dessert is ready.");
        break;

        default:
        printf("Invalid Input.");
        break;
    }
    return 0;
}
