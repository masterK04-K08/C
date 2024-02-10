#include <stdio.h>

int main(void) {

	int i = 50, j = 20;


	printf("Sum = %d\n", i + j); 		// 70
	printf("Diff = %d\n", i - j);		// 30
	printf("Product = %d\n", i * j);	// 1000
	printf("Div = %.1d\n", i/j);		// 2.5 
	printf("Div = %.1f\n", (double)i/j);	// 2.5 
	printf("Div = %.f\n", (double)i/j);	// 2.5 
	printf("Rem = %d\n", i%j);		// 10


	return 0;
}
