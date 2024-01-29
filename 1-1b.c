#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Write a C program that allocates a 1D array of length n which is
// prescribed at runtime. You are supposed to first assign the values
// of the array with random numbers, and then find the maximum and
// minimum values. (You can use e.g. the rand function from stdlib.h.)

int main(int argc, char *argv[]){
	// set random seed
	srand(time(NULL));

	// initialize variables
	int n, i, *v;

	// scanf for input
	printf("Enter number of elements: ");
	scanf("%d", &n);

	// allocate memory for vector
	v = (int*) malloc(n * sizeof(int));
	if(v == NULL) {
		printf("Error! memory not allocated."); exit(-1);
	}
	
	// fill vector with random numbers
	for (i = 0; i < n; i++)
	{
		v[i] = rand();
		v[i] = v[i] % 100 + 1;
	}	

	// initialize min and max values
	int maximum = v[0];
	int minimum = v[0];

	// get min and max values by looping over the array
	for (i = 0; i < n-1; i++)
	{
		if (v[i+1]>maximum)
		{
			maximum = v[i+1];
		}
		if (v[i+1]<minimum)
		{
			minimum = v[i+1];
		}
	}

	// print the array
	for (i = 0; i < n; i++)
	{
		printf("%d,",v[i]);
	}
	
	// print the min and max values
	printf("minimum was %d, maximum was %d",minimum,maximum);

	// free up the memory
	free(v);

	return 0;
}