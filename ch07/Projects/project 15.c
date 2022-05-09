#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)	 
{	
	long double factorial;
	printf("Enter a positive integer: ");
	scanf("%Lf", &factorial);
	
	long double factorial_copy = factorial;
	int copy = factorial;

	while (factorial_copy != 1)
		factorial *= --factorial_copy;

	printf("Factorial of %d: %g", copy, factorial);

	// (a) factorial of 11 (short)
	// (b) factorial of 12 (int)
	// (c) factorial of 12 (long)
	// (d) factorial of 20 (long long)
	// (e) factorial of 34 (float)
	// (f) factorial of 170 (double)
	// (g) factorial of 170 (long double)

	return EXIT_SUCCESS;
}
