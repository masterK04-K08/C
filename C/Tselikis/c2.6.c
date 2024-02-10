#include <stdio.h>

int main(void) {

	int i, j, k;
	
	i = 35;
	j = i/10;	// 3
	k = i - (10*j);	// 5

	printf("Sum = %d\n", j + k); // 3 + 5 = 8

	return 0;
}
