#include <stdio.h>

int minmax(int A[], int size);


int main(void) {

	int min = 0;
	int A[] = {3, 44, 23, 42, 1};


	printf("%d, %d\n", minmax(A, sizeof(A)/size(int));

	return 0;
}

int minmax(int A[], int size) {
	//for(int j = 0; j < size; j++)
	//	printf("%d\n", A[j]);

	int min = A[0];
	//printf("%d from minmax base case\n", min);

	for(int i = 1; i < size; i++) {
		if (min > A[i]){
			min = A[i];
			//printf("%d from for loop \n", min);
		}
		continue;
	}
	int max = A[0];

	for(int i = 1; i < size; i++) {
		if (max < A[i]){
			max = A[i];
		}
		continue;
	}
	return min, max;
}
