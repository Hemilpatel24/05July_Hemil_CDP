#include <stdio.h>
int main() 
{
   int i, j;
   int input, digit = '1';
   printf("Enter an digit you want to print in the last row: ");
   scanf("%d", &input);
   for (i = 1; i <= (input - '1' + 1); ++i) 
   {
      for (j = 1; j <= i; ++j) 
      {
         printf("%d ", digit);
      }
      ++digit;
      printf("\n");
   }
   return 0;
}