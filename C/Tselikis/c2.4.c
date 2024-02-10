#include <stdio.h>

int main(void) {

	double i = 12, j = 5, avg;

	avg = i+j/2; //order of operations make this 12 + (5/2) = 14.50
	printf("Avg = %.2f\n", avg);

	return 0;

}
