#include <stdio.h>

int find_max(int array[], int size) {
	int max = array[0];
	for(int i = 1; i < size; i++) 
		if(max < array[i])
			max = array[i];
	return max;
}

int main(void) {

	int array[] = {1, 4, 5, 10};

	int max = find_max(array, sizeof(array)/sizeof(int));

	printf("%d\n", max);


	return 0;
}
