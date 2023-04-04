#include<stdio.h>
int main()
{
    int day;

    printf("1.Monday");
    printf("\n2.Tuesday");
    printf("\n3.Wednesday");
    printf("\n4.Thrusday");
    printf("\n5.Friday");
    printf("\n6.Saturday");
    printf("\n7.Sunday");
    printf("\n\nEnter integer from 1-7:");

    scanf("%d",&day);

    switch(day)
    {
        case 01:
        printf("\nMonday", &day);

        case 02:
        printf("\nTuesday");
        break;

        case 03:
        printf("\nWednesday");
        break;

        case 04:
        printf("\nThrusday");
        break;

        case 05:
        printf("\nFriday");
        break;

        case 06:
        printf("\nSaturday");
        break;

        case 07:
        printf("\nSunday");
        break;

        default:
        printf("\nInvalid Input");
        break;
    }
    return 0;
}
