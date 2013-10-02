#include <stdio.h>
#include <stdlib.h>

int size;
double **l;
double **u;

void printMatrix(double **m) {
	int i =0, j=0;
    for (i=0;i<size;i++) {
        for(j=0;j<size;j++) {
            printf("|  %f  | ",m[i][j]);
        }
        printf("\n");
    }
}

void verify(){
	printMatrix(l);
	printMatrix(u);
}

void decompose(double **m) {
	int i=0, j=0, k=0;
	for(j =0; j < size-1; j++) {
        for(i = j+1; i < size; i++) {
            double factor = m[i][j]/m[j][j];
            for(k = 0; k < size; k++) {
            	u[i][k]= m[i][k] - (m[j][k]* factor);
            }
            l[i][j] = factor;
        }
        m = u;
    }
    for(i = 0; i < size; i++)
        l[i][i] =1;
}

void generateMatrix(int size)
{
    double **mat;

    mat = malloc(size * (sizeof *mat));
    u = malloc(size * (sizeof *u));
    l = malloc(size * (sizeof *l));

    int i =0, j=0;
    for( i=0 ; i < size ; i++) {
    	u[i] = malloc((sizeof *u[i]) * size);
    	l[i] = malloc((sizeof *l[i]) * size);
        mat[i] = malloc((sizeof *mat[i]) * size);
        for( j=0 ; j< size; j++) {
            mat[i][j] = rand() % 100;
        }
    }
    printMatrix(mat);
    decompose(mat);
    verify();
}


int main(int argc, char * argv[])
{
    if(argc < 2) {
    	printf("Matrix Size missing in the arguments \n");
    	return -1;
    }
    size = strtol(argv[1],(char **)NULL,10);
  	printf("Accepted Size %d \n", size);
    generateMatrix(size);
    return 0;
}
