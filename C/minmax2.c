#include <stdio.h>


int main(void) {

	int A[] = {3, 44, 23, 42, 1};
	int min = A[0];

	for(int i = 1; i < sizeof(A)/sizeof(int); i++)
		printf("%d\n", A[i]);

	return 0;
}

