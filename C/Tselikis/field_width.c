#include <stdio.h>

int main(void) {

	int a = 100;
	float b = 1.2365;


	printf("%10d\n", a); //     |       100|
	printf("%10f\n", b); //     |  1.236500|
	printf("%10.3f\n", b);//    |     1.237|
	printf("%*.3f\n", 6, b); // | 1.237|
	printf("%2d\n", a); //      |100| expands field with to fit number
	printf("%6f\n", b); //	    |1.236500| expands field


	return 0;
}
