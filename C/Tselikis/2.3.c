#include <stdio.h>

int main(void) {
	
	int i = 5, j = 4;

	printf("Sum = %d,\tDifference = %d,\tProduct = %d,\tDivision = %.3f\tRemainder = %d\n", i + j, i - j, i * j, (float)i/j, i%j);

	return 0;
}
