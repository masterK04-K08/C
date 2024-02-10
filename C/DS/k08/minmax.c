#include <stdio.h>
#include <limits.h>

int find_max(int array[], int size) {
//	if(size == 0)
//		return -1;

	int temp = INT_MIN; // Is this UNDEFINED BEHAVIOUR? because array is empty. 
//	int tempt = array[0]; this is UNDEFINED BEHAVIOUR because you are reading from uninitialized memory (i.e. array[0])
	for(int i = 0; i < size; i++) // you never enter the FOR loop 
		if(temp < *(array + i))
			temp = *(array + i);
	return temp;

}

int main(void) {

	int array[] = {};

	int max = find_max(array, 0);
	printf("max: %d\n", max);

	return 0;
}
