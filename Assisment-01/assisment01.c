#include <stdio.h>

int main() {
    int choice;
    float bill = 0;
    char c;
    
    printf("Welcome to the Food Billing System!\n");
    printf("Menu:\n");
    printf("1. Burger - 100\n");
    printf("2. Pizza - 180\n");
    printf("3. Dosa - 120\n");
    printf("4. Idli - 50\n");
    printf("5. Exit\n");

    FBS:
    do {
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                bill += 100;
                printf("Burger added to the bill.\n");
                break;
            case 2:
                bill += 180;
                printf("Pizza added to the bill.\n");
                break;
            case 3:
                bill += 120;
                printf("Dosa added to the bill.\n");
                break;
            case 4:
                bill += 50;
                printf("Idli added to the bill.\n");
                break;
            case 5:
                printf("Thank you for using the Food Billing System.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while(choice != 5);
    
    printf("Total bill: %.2f\n", bill);
    
    printf("\nDo you want to place order again? y or n:");
    scanf("%c", &c);
    if(c=='y' || c=='Y')
    {
        goto FBS;
    }
    printf("Have a nice day.");

    return 0;
}
