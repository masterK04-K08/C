#include <stdio.h>
#include <limits.h>

int find_max(int array[], int size) {
	if(size == 0)
		return -1;

	int temp = INT_MIN;
	for(int i = 0; i < size; i++) 
		if(temp < array[i])
			temp = array[i];
	return temp;

}

int main(void) {

	int array[] = {};

	int max = find_max(array, 0);
	printf("max: %d\n", max);
	max = find_max(array, 3); // Passing 3 as size is fine takes subarray
	printf("max: %d\n", max);
	max = find_max(array, 8); // Out of bounds - Undefined Behaviour: Can find garbage value larger and display it
	printf("max: %d\n", max);

	return 0;
}
