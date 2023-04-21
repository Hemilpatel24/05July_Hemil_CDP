//WriteaProgramoffindtheelementofgivenpositionfromthearray
#include<stdio.h>
int main() 
{
	float N[AL];
	int i;
    AL=5;
    MAX=5;
	printf("Enter five members of array:\n");
	for(i = 0; i < AL; i++) 
    {
		scanf("%f", &N[i]);
	}
	for(i = 0; i < AL; i++) 
    {
		if(N[i] < MAX) {
			printf("A[%d] = %.1f\n", i, N[i]);
		}
	}
	return 0;
}