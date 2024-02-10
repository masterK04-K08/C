#include <stdio.h>

int main(void) {

	int a = 299, x, y, z;

	x = a / 100;
	y = (a % 100) / 10;
	z = (a % 100) % 10;

	printf("%d\n", x + y + z);		

	return 0;

}
