#include<stdio.h>
int main()
{
    int menu, categories;

    printf("1.Coffee");
    printf("\n2.Chai");
    printf("\n3.Pizza");
    printf("\n4.Snacks");
    printf("\n5.Desserts");

    printf("\n\nEnter your choice:");
    scanf("%d",&menu);

    switch(menu)
    {
        case 1:
        printf("\n1.Black coffee.");
        printf("\n2.Cold coffee.");
        printf("\n3.Hot coffee.");
        printf("\nEnter your choice:");
        scanf("%d",&categories);
        switch(categories)
        {
            case 1:
            printf("\nYour order for black coffee is ready.\nThank You.");
            break;

            case 2:
            printf("\nYour order for cold coffee is ready.\nThank You.");
            break;

            case 3:
            printf("\nYour order for hot coffee is ready.\nThank You.");
            break;

            default:
            printf("\nInvalid Input.");
            
        }
        break;

        case 2:
        printf("\n1.Masala chai.");
        printf("\n2.Adrak chai.");
        printf("\n3.Black chai.");
        printf("\nEnter your choice:");
        scanf("%d",&categories);
        switch(categories)
        {
            case 1:
            printf("\nYour order for masala chai is ready.\nThank You.");
            break;

            case 2:
            printf("\nYour order for adrak chai is ready.\nThank You.");
            break;

            case 3:
            printf("\nYour order for black chai is ready.\nThank You.");
            break;

            default:
            printf("\nInvalid Input.");
            
        }
        break;

        case 3:
        printf("\n1.Hotsauce pizza.");
        printf("\n2.Italian pizza.");
        printf("\n3.Cheese7 pizza.");
        printf("\nEnter your choice:");
        scanf("%d",&categories);
        switch(categories)
        {
            case 1:
            printf("\nYour order for hotsauce pizza is ready.\nThank You.");
            break;

            case 2:
            printf("\nYour order for Italian pizza is reday.\nThank You.");
            break;

            case 3:
            printf("\nYour order for cheese7 pizza is ready.\nThank You.");
            break;

            default:
            printf("\nInvalid Input.");
        }
        break;

        case 4:
        printf("\n1.Samosa.");
        printf("\n2.Aloo chat.");
        printf("\n3.Vadapav.");
        printf("\nEnter your choice:");
        scanf("%d",&categories);
        switch(categories)
        {
            case 1:
            printf("\nYour order for samosa is ready.\nThank You.");
            break;

            case 2:
            printf("\nYour order for aloo chat is ready.\nThank You.");
            break;

            case 3:
            printf("\nYour order for vadapav is ready.\nThank You.");
            break;

            default:
            printf("Invalid Input.");
        }
        break;

        case 5:
        printf("\n1.Black Forest.");
        printf("\n2.Cheese Cake.");
        printf("\n3.Belgium Chocolate Moose.");
        printf("\nEnter your choice:");
        scanf("%d",&categories);
        switch(categories)
        {
            case 1:
            printf("\nYour order for black forest is ready.\nThank You.");
            break;

            case 2:
            printf("\nYour order for cheese cake is ready.\nThank You.");
            break;

            case 3:
            printf("\nYour order for belgium chocolate moose is ready.\nThank You.");
            break;

            default:
            printf("\nInvalid Input.");
        }
        break;
    }
}    
