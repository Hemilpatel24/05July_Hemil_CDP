//Write a program to print the Matrixusing 2-D Array
#include<stdio.h>
int main()
        {
        int i, j, m, n, input1;
        int matrix[10][20];

        printf("Enter number of rows : ");
        scanf("%d", &m);
        printf("Enter number of columns : ");
        scanf("%d", &n);

        /* first input */
        printf("1 ou 0");
            scanf("%d", &input1);
        if (input1 = 0) {
        matrix [0][0]=0;
matrix [0][1]=0;
matrix [1][0]=0;
matrix [1][1]=0;}


    /* Display the matrix */
    {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");


    return 0;
}