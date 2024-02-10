#include <stdio.h>

int main(void) {

	int a, b;

	printf("Enter two ints: ");
	scanf("%d %d", &a, &b);

	printf("\nInt 1: %d\tInt 2: %d\nSum: %d\nDifference: %d\nProduct: %d\nDiv: %.3f\n", a, b, a+b, a-b, a*b, (double)a/b);

	return 0;
}
