#include <stdio.h>

int main(void) {
	
	float x = 3.45f, y = 6.78f;

	y = y - (int)x;
	x = (int)x + x;

	printf("x = %.2f, y = %.2f\n", x, y);

	return 0;
}
