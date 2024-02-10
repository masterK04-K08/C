#include <stdio.h>


int main(void) {

	int a = 2, b = 5;

//	x / y
//	y * 2 + 1

	printf("Remainder is: %d\n", a < b ? a : a-(a/b)*b);

	return 0;
}

