#include <stdio.h>

int main(void) {
	
	float x = 3.45f, y = 6.78f, x_frac, y_frac, x1, y1;

	x_frac = x - (int)x;
	y_frac = y - (int)y;

	x1 = (int)y + x_frac;	
	y1 = (int)x + y_frac;

	printf("x = %.2f, y = %.2f\n", x1, y1);

	return 0;
}
