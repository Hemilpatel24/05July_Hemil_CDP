#include<stdio.h>
int main()
{
 int n,last;

 printf("\n Enter Last Number : ");
 scanf("%d",&last);

 //  For loop
 // Code For Even Number List
  printf("\n Even Number List :\n ");

 for(n=2;n<=last;n+=2)
  {
    printf(" %d",n);
  }

 // Code For Odd Number List
 printf("\n\n Odd Number List :\n ");

 for(n=1;n<=last;n+=2)
 {
   printf(" %d",n);
 }

 return 0;

}