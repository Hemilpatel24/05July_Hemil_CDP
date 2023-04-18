#include<stdio.h>
int main()
{
 int n,last;

 printf("\n Enter Last Number : ");
 scanf("%d",&last);

  printf("\n Even Number List :\n ");

 for(n=2;n<=last;n+=2)
  {
    printf(" %d",n);
  }
 
 printf("\n\n Odd Number List :\n ");

 for(n=1;n<=last;n+=2)
 {
   printf(" %d",n);
 }

 return 0;

}
