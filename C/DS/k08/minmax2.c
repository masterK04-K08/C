#include <stdio.h>

int find_max(int array[], int size) {
	int temp = array[0];
	for(int i = 1, i < size; i++)
		if (temp < array[i])
			temp = array[i];
	return temp;

}

int main(void) {

	int array[] = {1, 4, 14, 5};

	int max = find_max(array, 4);
	printf("max: %d\n", max);

	return 0;
}
