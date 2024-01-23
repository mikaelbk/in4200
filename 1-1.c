#include <stdio.h>
#include <math.h>

int main(){
	int n = 20;
	float k = -0.25;
	float sum = 0;
	int i;
	for (i=0;i<n;i++){
		float ai = pow(k,i);
		sum += ai;
	}
	printf("%f\n",sum);
	// >0.800000
}
