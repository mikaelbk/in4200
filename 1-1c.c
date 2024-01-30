#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


// When assigning values to the entries of a m × n matrix, it is common
// to use a nested for-loop with the outer index looping over the rows
// and the inner index looping over the columns. Does it matter if the
// sequence of these two loops is swapped? Write a C program to test
// your hypothesis.


int main(int argc, char *argv[]){
	// clean cmd
	printf("\n");
	// initialize variables
	int n = 10000;
	int m = 10000;
	clock_t start, end;
	double cpu_time_used;

	// initialize A
	double **A = (double**)malloc(m*(sizeof(double*)));
	for (int i = 0; i < m; i++)
	{
		A[i] = (double*)malloc(n*sizeof(double));
	}

	// function for filling j first
	void fill_j_first(){
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				A[i][j] = 24;
			}
			
		}
	}

	// function for filling i first
	void fill_i_first(){
		for (int j = 0; j < n; j++)
		{
			for (int i = 0; i < m; i++)
			{
				A[i][j] = 24;
			}
		}
	}
	
	// time with j first
	start = clock();
	fill_j_first();
	end = clock();
	cpu_time_used = ((double)(end-start)) / CLOCKS_PER_SEC;
	printf("CPU time used for j first is %f seconds\n", cpu_time_used);

	// time with i first
	start = clock();
	fill_j_first();
	end = clock();
	cpu_time_used = ((double)(end-start)) / CLOCKS_PER_SEC;
	printf("CPU time used for i first is %f seconds", cpu_time_used);

    // free A
	for (int i=0; i<m; i++){
        A[i] = (double*)malloc(n*sizeof(double));
    }
    for (int i=0; i<m; i++){
        free(A[i]);
    }
    free(A);


	// output
	// CPU time used for j first is 0.669000 seconds
	// CPU time used for i first is 0.277000 seconds
	
	return 0;
}