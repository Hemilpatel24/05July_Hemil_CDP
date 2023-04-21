//Write a Program of Factorial using Recursive Function
#include<stdio.h>
int main()
{
    int num;
    unsigned long long factorial;
    
    /* Input an integer from user */
    printf("Enter any number: ");
    scanf("%d", &num);
    
    factorial = fact(num); // Call factorial function
    
    printf("Factorial of %d is %llu", num, factorial);
    
    return 0;
}
