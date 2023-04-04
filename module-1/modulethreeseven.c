#include<stdio.h>
int main()
{
    float Celcius,Farenhite;

    printf("Temperature in celcius:");
    scanf("%f",&Celcius);

    Farenhite = Celcius * 9/5;
    Farenhite = Farenhite  + 32;

    printf("Temperature in farenhite : %f",Farenhite);

    return 0;
}
