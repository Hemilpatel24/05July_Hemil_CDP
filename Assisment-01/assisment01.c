#include <stdio.h>
int no = 0;
int bug()
{

	printf("How many burgur do you want: ");
	scanf("%d", &no);
	printf("Burger added to the bill.\n");
         no *= 100;      	
	return  0;
}
int piz()
{

	printf("How many pizza do you want: ");
	scanf("%d", &no);
	printf("Burger added to the bill.\n");
         no *= 180;      	
	return  0;
}
int dos()
{

	printf("How many dosa do you want: ");
	scanf("%d", &no);
	printf("Burger added to the bill.\n");
         no *= 120;      	
	return  0;
	
}
int idl()
{

	printf("How many idli do you want: ");
	scanf("%d", &no);
	printf("Burger added to the bill.\n");
         no *= 50;      	
	return  0;
}
int main() {
    int choice;
    float bill = 0;
    char c[5];
//Enter the food menu to choose from:    
    printf("Welcome to the Food Billing System!\n");
    printf("Menu:\n");
    printf("1. Burger - 100\n");
    printf("2. Pizza - 180\n");
    printf("3. Dosa - 120\n");
    printf("4. Idli - 50\n");
    printf("5. Exit\n");
    
// Enter your choice to continue with.
        system:
        	
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
            	bug();
                bill += no;
                break;
            case 2:
            	piz();
                bill += no;
                break;
            case 3:
            	dos();
                bill += no;
                break;
            case 4:
            	idl();
                bill += no;
                break;
            case 5:
//                printf("Thank you for using the Food Billing System.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
//  Provide the total amount of the order.  
    printf("Total bill: %.2f\n", bill);
//  Asking if they want to order again.  
    printf("\nDo you want to place order again? y or n:");
    scanf("%s", &c);
//Using conditional statement for asking again.    
    if(c[0]=='y' || c[0]=='Y')
    {
        goto system;
    }
    printf("Have a nice day.");

    return 0;
}
