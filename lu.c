#include <stdio.h>
#include <stdlib.h>

void printMatrix(double **m, int n) {
    printf("n = %d \n",n);
    int i =0, j=0;
    for (i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("|  %f  | ",m[i][j]);
        }
        printf("\n");
    }
}

void generateMatrix(int size)
{
    double **mat;
    mat = malloc(size * (sizeof *mat));
    int i =0, j=0;
    for( i=0 ; i < size ; i++) {
        mat[i] = malloc((sizeof *mat[i]) * size);
        for( j=0 ; j< size; j++) {
            mat[i][j] = rand() % 100;
        }
    }
    printMatrix(mat,size);
}


int main()
{
    int size;
    printf("Enter the rows/columns of square matrix \n :-");
    scanf("%d",&size);
    generateMatrix(size);
    return 0;
}
