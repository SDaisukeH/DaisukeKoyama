#include <stdio.h> 
#include <math.h> 

int main(void)
{
	
	int i;
	int k = 1;
	int n = 10;
	double e = 1.0;

	
	for (i = 1; i<n; i++) {
		k *= i;
		e += 1.0 / k;
	}
	
	printf("ŒvŽZŒ‹‰Ê e = %7.5f\n", e);
	
return 0;
}
