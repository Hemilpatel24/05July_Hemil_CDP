#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,Total;
    float Percentage;
    printf("Marks in S1:");
    scanf("%f",&s1);
    printf("Marks in S2:");
    scanf("%f",&s2);
    printf("Marks in S3:");
    scanf("%f",&s3);
    printf("Marks in S4:");
    scanf("%f",&s4);
    printf("Marks in S5:");
    scanf("%f",&s5);

    Total = s1+s2+s3+s4+s5;
    printf("total marks are : %f",Total);

    Percentage = Total*100/500;
    printf("\npercentage is : %.2f",Percentage);

    if(Percentage>=75){
        printf("\nPassed with distinction");
    }
    else if(Percentage>60){
        printf("\nPassed with First Class");
    }
    else if(Percentage>50){
        printf("\nPassed with Second Class");
    }
    else if(Percentage>30){
        printf("\nPassed with Pass Class");
    }
    else{
        printf("\nYou are Fail");
    }

    return 0;

}