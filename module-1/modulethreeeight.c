#include<stdio.h>
int main()
{
    int S1,S2,S3,S4,S5,sum;
    float percentage;

    printf("Marks in S1:");
    scanf("%d",&S1);
    printf("Marks in S2:");
    scanf("%d",&S2);
    printf("Marks in S3:");
    scanf("%d",&S3);
    printf("Marks in S4:");
    scanf("%d",&S4);
    printf("Marks in S5:");
    scanf("%d",&S5);

   sum = S1+S2+S3+S4+S5;

   printf("Total Sum is : %d",sum);

   percentage = sum*100/500;

   printf("\nTotal Percentage is : %f",percentage);

   return 0; 

}
